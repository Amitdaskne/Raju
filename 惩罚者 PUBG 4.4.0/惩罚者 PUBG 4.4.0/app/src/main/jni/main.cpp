#include "PunisherDeveloper/include.h"
#include "PunisherDeveloper/definition.h"
#include "PunisherDeveloper/Items.h"
#include "PunisherDeveloper/Login.h"
#include "PunisherDeveloper/shadowhook/shadowhook.h"
#include "惩罚者/LogsCleaner.h"

//============================ @PunisherDeveloper ===============================//

#include <fcntl.h>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string>
json items_data;

std::map < int, bool > Items;
uintptr_t ProcessEvent_Offset, AimBullet_Offset, AimBullet_Offset2, SetControlRotation_Offset;
float 压枪系数 = 1.2;
void NekoHook(FRotator &angles) {
    if (angles.Pitch > 180)
        angles.Pitch -= 360;
    if (angles.Pitch < -180)
        angles.Pitch += 360;

    if (angles.Pitch < -75.f)
        angles.Pitch = -75.f;
    else if (angles.Pitch > 75.f)
        angles.Pitch = 75.f;

    while (angles.Yaw < -180.0f)
        angles.Yaw += 360.0f;
    while (angles.Yaw > 180.0f)
        angles.Yaw -= 360.0f;
}
void NekoHook(float *angles) {
    if (angles[0] > 180)
        angles[0] -= 360;
    if (angles[0] < -180)
        angles[0] += 360;

    if (angles[0] < -75.f)
        angles[0] = -75.f;
    else if (angles[0] > 75.f)
        angles[0] = 75.f;

    while (angles[1] < -180.0f)
        angles[1] += 360.0f;
    while (angles[1] > 180.0f)
        angles[1] -= 360.0f;
}


void NekoHook(Vector3 angles) {
    if (angles.X > 180)
        angles.X -= 360;
    if (angles.X < -180)
        angles.X += 360;

    if (angles.X < -75.f)
        angles.X = -75.f;
    else if (angles.X > 75.f)
        angles.X = 75.f;

    while (angles.Y < -180.0f)
        angles.Y += 360.0f;
    while (angles.Y > 180.0f)
        angles.Y -= 360.0f;
}

FRotator Rotation = { };

const char *Gamepackage = "com.pubg.imobile";

//============================ @PunisherDeveloper ===============================//

bool logged = false;

void *login_thread(void *) {
    while (!isLibraryLoaded(("libUE4.so"))){
        sleep(1);
    }
     sleep(10);
    static char s[64];
    auto key = getClipboardText();
    strncpy(s, key.c_str(), sizeof s);
	static std::string err = Login(s);
    if (err == "OK") {
		   static bool T = "f";
           static bool R = "a";
           static bool U = "l";
           static bool E = "s";
           static bool S = "e";
           logged = T + R + U + E + S;
    } else {
     
        exit(1);
    }
    return NULL;
}

void DrawRectangle(AHUD *HUD, FVector2D Pos, float Width, float Height, float Thickness, FLinearColor Color) {
    HUD->DrawLine(Pos.X, Pos.Y, Pos.X + Width, Pos.Y, Color, Thickness);
    HUD->DrawLine(Pos.X, Pos.Y, Pos.X, Pos.Y + Height, Color, Thickness);
    HUD->DrawLine(Pos.X + Width, Pos.Y, Pos.X + Width, Pos.Y + Height, Color, Thickness);
    HUD->DrawLine(Pos.X, Pos.Y + Height, Pos.X + Width, Pos.Y + Height, Color, Thickness);
}

void DrawFilledRectangle(AHUD *HUD, FVector2D Pos, float Width, float Height, FLinearColor Color) {
    HUD->DrawRect(Color, Pos.X, Pos.Y, Width, Height);
}

void DrawHUD(AHUD *HUD)
{
	if (g_LocalPlayer) {
		
		int totalEnemies = 0, totalBots = 0;
        auto AllActors = GetActors();
        for (auto & i:AllActors)
        {
            auto Actor = i;

            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
            {
                auto Player = (ASTExtraPlayerCharacter *) Actor;
                bool IsVisible = g_LocalController->LineOfSightTo(Player, { 0, 0, 0 }, true);

                FLinearColor White;
                if (IsVisible)
                {
                    White = FLinearColor(1.f,1.f,1.f,1.f);
                }
                else
                {
                    White = FLinearColor(1.0f,0.0f,0.0f,1.0f);
                }

                float Distance = g_LocalPlayer->GetDistanceTo(Player) / 100.0f;

                if (Player->PlayerKey == g_LocalController->PlayerKey)
                    continue;

                if (Player->TeamID == g_LocalController->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (Player->bHidden)
                    continue;
					
				if (Player->bEnsure)
					totalBots++;
						else
					totalEnemies++;

                if (Player)
                {

                    auto HeadPos = Player->GetBonePos("Head", {});

                    FVector2D headPosSC;


                    auto RootPos = Player->GetBonePos("Root", {});

                    FVector2D RootPosSC;


                    if (W2S(HeadPos, (FVector2D *) & headPosSC) &&
                            W2S(RootPos, (FVector2D *) & RootPosSC))
                    {
 
//============================ @PunisherDeveloper ===============================//
                    
                        if (Cheat::Esp::Line)
                        {
                            HUD->DrawLine((float)glWidth / 2, 10.5 + 50,headPosSC.X, (headPosSC.Y - 15.0f),White, 1.0f);

                            tslFont->LegacyFontSize = 13;
                            std::string MyStdString = std::to_string((int)Distance) +" M";
                            DrawOutlinedText(HUD, FString(MyStdString.c_str()), {RootPosSC.X,RootPosSC.Y + 20.0f}, COLOR_WHITE, COLOR_BLACK, true);

                            if(!Player->bEnsure)
                            {
                                DrawOutlinedText(HUD, Player->PlayerName, {RootPosSC.X,RootPosSC.Y + 40.0f}, COLOR_WHITE, COLOR_BLACK, true);

                            } else {

                                DrawOutlinedText(HUD, FString("Bot"), {RootPosSC.X,RootPosSC.Y + 40.0f}, COLOR_WHITE, COLOR_BLACK, true);
                            }
                            tslFont->LegacyFontSize = TSL_FONT_DEFAULT_SIZE;
                            
                        }                     
                        
//============================ @PunisherDeveloper ===============================//


                        if (Cheat::Esp::Skeleton)
                        {

                            static std::vector < std::string > right_arm
                            {
                                "neck_01",
                                "clavicle_r", "upperarm_r", "lowerarm_r", "hand_r", "item_r"};
                            static std::vector < std::string > left_arm
                            {
                                "neck_01",
                                "clavicle_l", "upperarm_l", "lowerarm_l", "hand_l", "item_l"};
                            static std::vector < std::string > spine
                            {
                                "Head", "neck_01", "spine_03", "spine_02", "spine_01", "pelvis"};
                            static std::vector < std::string > lower_right
                            {
                                "pelvis", "thigh_r", "calf_r", "foot_r"};
                            static std::vector < std::string > lower_left
                            {
                                "pelvis", "thigh_l", "calf_l", "foot_l"};
                            static std::vector < std::vector < std::string >> skeleton
                            {
                                right_arm, left_arm, spine, lower_right, lower_left};

                            for (auto & boneStructure:skeleton)
                            {
                                std::string lastBone;
                                for (std::string & currentBone:boneStructure)
                                {
                                    if (!lastBone.empty())
                                    {
                                        FVector2D boneFrom, boneTo;
                                        if (W2S(Player->GetBonePos(lastBone.c_str(),
                                    {
                                    }
                                                              ),
                                    (FVector2D *) & boneFrom) &&
                                    W2S(Player->GetBonePos(currentBone.c_str(),
                                    {
                                    }
                                                          ), (FVector2D *) & boneTo))
                                        {
                                            HUD->DrawLine(boneFrom.X,boneFrom.Y,boneTo.X,boneTo.Y,White, 1.0f);
                                        }
                                    }
                                    lastBone = currentBone;
                                }
                            }
                        }

//============================ @PunisherDeveloper ===============================//

                       if (Cheat::Esp::Health) {
                            float CurHP = std::max(0.f, std::min(Player->Health, Player->HealthMax));
                            float MaxHP = Player->HealthMax;

                            float HealthPercentage = CurHP / MaxHP;

                            FLinearColor HPColor = FLinearColor(1.0f - HealthPercentage, HealthPercentage, 0.0f, HealthPercentage); // Added alpha

                            FVector HeadLocation = Player->GetHeadLocation(true);
                            HeadLocation.Z += 35.f;

                            FVector2D HeadScreenPos;
                            if (UGameplayStatics::ProjectWorldToScreen(g_LocalController, HeadLocation, false, &HeadScreenPos)) {
                                float BarWidth = 55.0f;
                                float BarHeight = 4.0f;

                                HeadScreenPos.X -= BarWidth / 2;
                                HeadScreenPos.Y -= BarHeight * 1.5f;

                                DrawFilledRectangle(HUD, HeadScreenPos, BarWidth, BarHeight, HPColor);
                                DrawRectangle(HUD, HeadScreenPos, BarWidth, BarHeight, 1.5f, {0.f, 0.f, 0.f, 0.7f});
                            }
                        }
                    }                                                          
                }
            }
            
//============================ @PunisherDeveloper ===============================//

             
            if (Cheat::Esp::Vehicle::Name)
            {
                if (i->IsA(ASTExtraVehicleBase::StaticClass()))
                {
                    auto Vehicle = (ASTExtraVehicleBase *) i;

                    if (!Vehicle->Mesh)
                        continue;

                    float Distance = Vehicle->GetDistanceTo(g_LocalPlayer) / 100.f;

                    FVector2D vehiclePos;

                    if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos))
                    {
                        auto mWidthScale = std::min(0.10f * Distance, 50.f);
                        auto mWidth = 70.f - mWidthScale;
                        auto mHeight = mWidth * 0.15f;
                        if (Cheat::Esp::Vehicle::Name)
                        {
                            std::string s = GetVehicleName(Vehicle);
                            s += " ";
                            s += std::to_string((int)Distance);
                            s += " - M";
                            FLinearColor YellowColor(1.0f, 1.0f, 0.0f, 1.0f);
                            tslFont->LegacyFontSize = 12;
                            DrawOutlinedText(HUD, FString(s.c_str()), {vehiclePos.X - (mWidth / 2),vehiclePos.Y}, YellowColor, COLOR_BLACK, true);
                            tslFont->LegacyFontSize = TSL_FONT_DEFAULT_SIZE;
                        }
                    }
                }
            }

//============================ @PunisherDeveloper ===============================//


            if (Actor->IsA(APickUpWrapperActor::StaticClass())) {
                auto PickUp = (APickUpWrapperActor *) Actor;
                if (Items[PickUp->DefineID.TypeSpecificID]) {
                    auto RootComponent = PickUp->RootComponent;
                    if (!RootComponent)
                        continue;
                    float Distance = PickUp->GetDistanceTo(g_LocalPlayer) / 100.f;

                    if (Distance > 30.0f)
                        continue;

                    FVector2D itemPos;
                    if (W2S(PickUp->K2_GetActorLocation(), &itemPos)) {
                        std::string s;
                        uint32_t tc = 0xFF000000;

                        for (auto &category: items_data) {
                            for (auto &item: category[("Items")]) {
                                if (item[("itemId")] == PickUp->DefineID.TypeSpecificID) {
                                    s = item[("itemName")].get<std::string>();
                                    tc = strtoul(
                                             item[("itemTextColor")].get<std::string>().c_str(),
                                             0, 16);
                                    break;
                                }
                            }
                        }

                        s += (" - ");
                        s += std::to_string((int) Distance);
                        s += ("M");

                        FLinearColor RedColor(1.0f, 0.0f, 0.0f, 1.0f);
                        FLinearColor OutlineColor(1.0f, 1.0f, 1.0f, 0.9f);

                        tslFont->LegacyFontSize = 12;
                        DrawOutlinedText(HUD, FString(s.c_str()), {itemPos.X, itemPos.Y},OutlineColor,RedColor, true);
                        tslFont->LegacyFontSize = TSL_FONT_DEFAULT_SIZE;

                    }
                }
            }
        }
	
//============================ @PunisherDeveloper ===============================//
			
		{
    bool isClear = (totalEnemies == 0 && totalBots == 0);

    std::string countText;
    if (isClear)
        countText = "Koi Nai Hai";
    else
        countText = "Gunda" + std::to_string(totalEnemies) + " | Kira" + std::to_string(totalBots);

    float posX = glWidth / 2.0f;
    float posY = 100.0f;

    float padding   = 45.0f;
    float charWidth = 12.0f;

    float boxWidth  = (countText.length() * charWidth) + padding;
    float boxHeight = 40.0f;

    float left   = posX - boxWidth  / 2;
    float right  = posX + boxWidth  / 2;
    float top    = posY - boxHeight / 2;
    float bottom = posY + boxHeight / 2;

    FLinearColor bg, border, text;

    // ----- COLORS -----
    if (isClear)
    {
        bg     = FLinearColor(0, 1, 0, 0.25f);
        border = FLinearColor(0, 1, 0, 1.0f);
        text   = FLinearColor(0, 1, 0, 1.0f);
    }
    else
    {
        bg     = FLinearColor(1, 0, 0, 0.25f);
        border = FLinearColor(1, 0, 0, 1.0f);
        text   = FLinearColor(1, 0, 0, 1.0f);
    }

    // ----- BACKGROUND -----
    HUD->DrawRect(bg, left, top, boxWidth, boxHeight);

    // ----- CORNERS -----
    int cs = 14;
    float t = 2.0f; // thickness

    HUD->DrawLine(left,  top,    left+cs, top,    border, t);
    HUD->DrawLine(left,  top,    left,    top+cs, border, t);

    HUD->DrawLine(right, top,    right-cs, top,    border, t);
    HUD->DrawLine(right, top,    right,    top+cs, border, t);

    HUD->DrawLine(left,  bottom, left+cs, bottom,    border, t);
    HUD->DrawLine(left,  bottom, left,    bottom-cs, border, t);

    HUD->DrawLine(right, bottom, right-cs, bottom,    border, t);
    HUD->DrawLine(right, bottom, right,    bottom-cs, border, t);

    // ----- TEXT -----
    tslFont->LegacyFontSize = 20;
    DrawOutlinedText(HUD, FString(countText), {posX, posY}, text, COLOR_NONE, true);
    tslFont->LegacyFontSize = TSL_FONT_DEFAULT_SIZE;
}}}

//============================ @PunisherDeveloper ===============================//

const float BULLET_SPEED = 80000.0f; 
void xShootBulletInner(FVector* StartLocation, FRotator* StartRotation)
{
    if (!StartLocation || !StartRotation || !g_LocalPlayer || !g_LocalPlayer->bIsWeaponFiring)
        return;

    auto Target = GetTargetByPussy();
    if (!Target)
        return;

    // 1. Get Base Bone Position
    FVector targetAimPos = Target->GetBonePos("Head", FVector(0, 0, 0));

    // 2. Apply Velocity Compensation (Prediction)
    FVector targetVelocity = Target->GetVelocity(); 
    
    // --- FIXED DISTANCE CALCULATION (Keep it here inside the function) ---
    float dx = targetAimPos.X - StartLocation->X;
    float dy = targetAimPos.Y - StartLocation->Y;
    float dz = targetAimPos.Z - StartLocation->Z;
    float distance = sqrtf(dx * dx + dy * dy + dz * dz);
    // ---------------------------------------------------------------------

    // Calculate travel time: Time = Distance / Speed
    float travelTime = distance / BULLET_SPEED;

    // Predict new position: Pos = Pos + (Vel * Time)
    targetAimPos.X += targetVelocity.X * travelTime;
    targetAimPos.Y += targetVelocity.Y * travelTime;
    targetAimPos.Z += targetVelocity.Z * travelTime;

    // 3. Validation
    if (!std::isfinite(targetAimPos.X) || !std::isfinite(targetAimPos.Y) || !std::isfinite(targetAimPos.Z))
        return;

    // 4. Calculate New Rotation
    FRotator aimRotation = ToRotator(*StartLocation, targetAimPos);

    if (!std::isfinite(aimRotation.Pitch) || !std::isfinite(aimRotation.Yaw))
        return;

    // Clamp and Sanitize
    aimRotation.Pitch = std::clamp(aimRotation.Pitch, -89.9f, 89.9f);
    while (aimRotation.Yaw > 180.0f) aimRotation.Yaw -= 360.0f;
    while (aimRotation.Yaw < -180.0f) aimRotation.Yaw += 360.0f;

    // 5. Apply to Out Parameters
    *StartRotation = aimRotation;
    *StartLocation = targetAimPos; 
}

//============================ @PunisherDeveloper ===============================//


void DrawESP(){

    if (g_LocalPlayer && g_LocalController){

        if (Aimbot){
                   ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
     if (Target){
                        bool triggerOk = true;
                        triggerOk = g_LocalPlayer->bIsWeaponFiring;
      if (triggerOk){
       FVector targetAimPos = Target->GetBonePos("Head", {});
       targetAimPos.Z -= 3.0f;
       auto WeaponManagerComponent = g_LocalPlayer->WeaponManagerComponent;
       if (WeaponManagerComponent){
        auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
        if ((int)propSlot.GetValue() >= 1 && (int)propSlot.GetValue() <= 3){
         auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
         if (CurrentWeaponReplicated){
          auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
          if (ShootWeaponComponent){
           UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
           if (ShootWeaponEntityComponent){
            ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
            if (CurrentVehicle){
             FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
             float dist = g_LocalPlayer->GetDistanceTo(Target);
             auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
             targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
            }else{
             FVector Velocity = Target->GetVelocity();
             float dist = g_LocalPlayer->GetDistanceTo(Target);
             auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
             targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
            }
                                                            if (g_LocalPlayer->bIsWeaponFiring) {
                            float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;  
                            targetAimPos.Z -= dist * 压枪系数;        
                            }
                                   g_LocalController->SetControlRotation(ToRotator(
                                                        g_LocalController->PlayerCameraManager->CameraCache.POV.Location,
                                                        targetAimPos), "");
           
                                    }
                                }
                            }
                        }
                    }
                }
   }
  }
    }
}
static char Shayk[64];
void AutoEspOn() {
    //---- Bullet Track ----//
    Cheat::BulletTrack::Enable = true; // bullet track enable
    Cheat::BulletTrack::IgnoreKnock = true; // ignore knock
    Cheat::BulletTrack::VisCheck = true; // visbility check
    Cheat::BulletTrack::Meter = 200.0f; // aim distance
    Cheat::BulletTrack::ShowDamage = true; // show damage
    //---- Aimbot ----//
    Aimbot = false; // enable  
    Cheat::Aimbot::RecoilControl = 1.5f;   // recoil control
    Cheat::Aimbot::VisCheck = true; // vis check
    Cheat::Aimbot::IgnoreKnock = true;    // ignore knock
    Cheat::Aimbot::Range = 200.0f; // meter
    Cheat::Aimbot::Radius = 100.0f; // fov range
    Cheat::Aimbot::IgnoreBot = true;
    //---- Esp ----//
    Cheat::Esp::GameInfo = true;
    Cheat::Esp::Line = true; // esp line
    Cheat::Esp::Skeleton = true;        // esp skeleton
    Cheat::Esp::Health = true; // esp health
    Cheat::Esp::Vehicle::Name = true; // vehicle name 
    /*Don't Use Aimbot & Bt Same Time*/
    }

//============================ @PunisherDeveloper ===============================//    

void* (*oProcessEvent)(UObject* Object, UFunction* Function, void* Params);
void* hkProcessEvent(UObject* Object, UFunction* Function, void* Params)
{
    if (!Object || !Function)
    return oProcessEvent(Object, Function, Params);
    std::string fnName = Function->GetFullName();

    if (Cheat::BulletTrack::Enable && fnName == "Function ShadowTrackerExtra.STEShootWeaponProjectComponent.ShootBulletInner")
    {
        auto* shootParams = reinterpret_cast<USTEShootWeaponProjectComponent_ShootBulletInner_Params*>(Params);
        if (shootParams) {
            xShootBulletInner(&shootParams->StartLoc, &shootParams->StartRot);
        }
    }

    if (Cheat::BulletTrack::ShowDamage && g_LocalPlayer && g_LocalController && 
        fnName.find("ClientOnDamageToOther") != std::string::npos)
    {
        auto localController = reinterpret_cast<ASTExtraPlayerController*>(Object);
        auto Params_ = reinterpret_cast<ASTExtraPlayerController_ClientOnDamageToOther_Params*>(Params);

        if (Params_ && localController->MyHUD) {
            auto damage = Params_->_DamageToOther;
            auto HUD = reinterpret_cast<ASurviveHUD*>(localController->MyHUD);
            HUD->AddHitDamageNumberWithConfig(damage, g_LocalPlayer, g_LocalController, 0, 1, 1, 1);
        }
    }


    if (fnName == "Function Engine.HUD.ReceiveDrawHUD")
    {
        AHUD* pHUD = reinterpret_cast<AHUD*>(Object);
        auto drawParams = reinterpret_cast<AHUD_ReceiveDrawHUD_Params*>(Params);
        
        if (pHUD && drawParams) {
            RenderESPPRIVATE(pHUD, drawParams->SizeX, drawParams->SizeY);
            DrawHUD(pHUD);
            DrawESP();
        }
    }
    return oProcessEvent(Object, Function, Params);
}

//============================ @PunisherDeveloper ===============================//

void *main_thread(void *){	
LogsCleaner();
LoginFix(); 
Cheat::libUE4Base = Tools::GetBaseAddress("libUE4.so"); 
while (!Cheat::libUE4Base){
Cheat::libUE4Base = Tools::GetBaseAddress("libUE4.so");
sleep(1);
}	
    
while (!g_App){
g_App = *(android_app * *)(Cheat::libUE4Base + Cheat::GNativeAndroidApp_Offset);
sleep(1);
}

FName::GNames = GetGNames();
while (!FName::GNames){
FName::GNames = GetGNames();
sleep(1);
}
    
UObject::GUObjectArray = (FUObjectArray *) (Cheat::libUE4Base + Cheat::GUObject_Offset);    

shadowhook_init(shadowhook_mode_t::SHADOWHOOK_MODE_UNIQUE, 0);
shadowhook_hook_func_addr((void*)(Cheat::libUE4Base + Cheat::ProcessEvent_Offset), (void*)hkProcessEvent, (void**)&oProcessEvent);//Esp&BTHook
items_data = json::parse(JSON_ITEMS);
AutoEspOn();
return nullptr;
}

__attribute__ ((constructor))
void _init(){
pthread_create(&t, NULL, main_thread, NULL);
pthread_create(&t, NULL, login_thread, NULL);
}

//============================ @PunisherDeveloper ===============================//

/* Channel @PunisherDeveloper */
/* Owner - @PunisherAnsh */
/* Source Support - All Versions */

//============================ @PunisherDeveloper ===============================//
