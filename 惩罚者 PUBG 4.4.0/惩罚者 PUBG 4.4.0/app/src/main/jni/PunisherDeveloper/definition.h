

//============================ @PunisherDeveloper ===============================//

/* Channel @PunisherDeveloper */
/* Owner - @PunisherAnsh */
/* Source Support - All Versions */

//============================ @PunisherDeveloper ===============================//

#include "Quaternion.hpp"

std::string EXP = OBFUSCATE("NULL");
enum EAimTrigger {
    None = 0,
    Shooting = 1,
    Scoping = 2,
    Both = 3,
    Any = 4
};

namespace Cheat {
uintptr_t libUE4Base;
uintptr_t GName_Offest = 0x85DBCEC;
uintptr_t GUObject_Offset = 0xEA31560;
uintptr_t GNativeAndroidApp_Offset = 0xE775F98;
uintptr_t ActorArray_Offest = 0xA34A0D0;
uintptr_t ProcessEvent_Offset = 0x884E068;
uintptr_t ProcessEvent;


using json = nlohmann::json;
std::string originalSignature;
int versionCode;



namespace Esp {
bool Line = false;
bool Skeleton = false;
bool Health = false;
//bool Jeet = false;
bool Distance = false;
bool Name = false;
bool TeamID = false;
bool Alert = false;
bool OneClick = false;
bool Target = false;
bool GameInfo = false;
bool ItemEsp = false;
bool Others = false;
namespace Vehicle {
bool Name = false;
bool Health = false;
bool Fuel = false;
bool GameInfo = true;
}

namespace World {
bool GrenadeWarn = false;
bool LootBox = false;
}
}



namespace BulletTrack {
bool Enable;
bool Enablev2;
bool VisCheck;
bool IgnoreKnock;
bool IgnoreBot;
bool AutoFire;
bool AutoFireOff = false;
float Meter;
float Range = 0;
float AimSet = 0.0f;
auto AimPrediction = 0;
float Radius = 200.0f;
bool ShowDamage;
}

namespace Aimbot {
bool Enable;
bool VisCheck;
bool IgnoreKnock;
bool IgnoreBot;
bool AimPrediction;
EAimTrigger Any;
float RecoilControl;
float RecoilSet;
float Range = 200.0f;
float Radius = 270.0f;
float FireSpeed;

}




static int FlashMode = 1;
bool Extra;
bool FastRunv2;
bool FastRunv3;
bool Magic;
float Energy = 65.0f;
static int ParachuteMode = 1;

}
namespace Others {
bool CorssHairColor = false;
bool ProbeLuffy = false;

}
namespace Settings {
float LandingSpeed = 0.100f;
float SetView = 220.0f;
float GameSpeed = 22.5f;
float PlayerSpeed = 0.15f;
float GameSpeedV2 = 0.100f;
float XHitEffectSize = 10.0f;
float ControlSpeed = 0.100f;
float SpeedScale = 0.0f;
}

float Xpos;
float Ypos;
float UpScale;
#define PI 3.14159265358979323846
#define IM_PI 3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))
#define DEG2RADD(x) ((float)(x) * (float)(IM_PI / 360.f))
#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(g_LocalController, w, true, s)
#define COLOR_BLACK FLinearColor(0, 0, 0, 1.f)
#define COLOR_WHITE FLinearColor(1.f, 1.f, 1.f, 1.f)
#define COLOR_RED FLinearColor(1.f, 0.f, 0.f, 1.f)
#define COLOR_GREEN FLinearColor(0.f, 1.f, 0.f, 1.f)
#define COLOR_BLUE FLinearColor(0.f, 0.f, 1.f, 1.f)

#define COLOR_NONE FLinearColor(0.f, 0.f, 0.f, 0.f)

#define TSL_FONT_DEFAULT_SIZE 20



using namespace SDK;

bool FPS = true;
bool BulletTrack = false;
using namespace SDK;
uintptr_t ProcessEvent;

float FOVsize =280.0f;
float Xs=2.4,Ys=2.4;
float Recoil = 1.5;
bool Aimbot = false;


int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;



FVector GetBoneLocationByName(ASTExtraPlayerCharacter *Actor, const char *BoneName) {
    return Actor->GetBonePos(BoneName, FVector());
}


AHUD *NewHUD = 0;


bool MagicBullet;
bool GunSkin = true;
// Login && SDK Implement
using json = nlohmann::json;
time_t rng = 0;

pthread_t t;

ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;


using namespace SDK;

struct sRegion {
    uintptr_t start, end;
};



std::vector<sRegion> trapRegions;

static UFont *tslFont = 0, *robotoTinyFont = 0;

void *LoadFont(void *) {
    while (!tslFont || !robotoTinyFont) {
        tslFont = UObject::FindObject<UFont>("Font TSLFont.TSLFont");
        robotoTinyFont = UObject::FindObject<UFont>("Font RobotoTiny.RobotoTiny");
        sleep(1);
    }
    return 0;
}

FLinearColor RandomColor() {
    static float x = 0, y = 0;

    constexpr float colorSwitchInterval = 255.0f;
    constexpr float maxColorValue = 255.0f;

    float r = 0, g = 0, b = 0;

    if (y < colorSwitchInterval) {
        r = rand() % static_cast<int>(maxColorValue + 1);
        b = x;
    } else if (y < 2 * colorSwitchInterval) {
        r = rand() % static_cast<int>(maxColorValue + 1) - x;
        b = rand() % static_cast<int>(maxColorValue + 1);
    } else if (y < 3 * colorSwitchInterval) {
        g = x;
        b = rand() % static_cast<int>(maxColorValue + 1);
    } else if (y < 4 * colorSwitchInterval) {
        g = rand() % static_cast<int>(maxColorValue + 1);
        b = rand() % static_cast<int>(maxColorValue + 1) - x;
    } else if (y < 5 * colorSwitchInterval) {
        r = x;
        g = rand() % static_cast<int>(maxColorValue + 1);
    } else {
        r = rand() % static_cast<int>(maxColorValue + 1);
        g = rand() % static_cast<int>(maxColorValue + 1) - x;
    }

    x += 10.0f; // Increase this value to switch colors faster
    if (x >= maxColorValue)
        x = 0.0f;

    y += 10.0f; // Increase this value to switch colors faster
    if (y > 6 * colorSwitchInterval)
        y = 0.0f;

    return {r, g, b, maxColorValue};
}



float ScaleRand;
float TimeLift;

FVector TargetPos = { };

void DrawOutlinedText(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, bool isCenter = false) {
    UCanvas *Canvas = HUD->Canvas;
    Canvas->K2_DrawText(tslFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, true, OutlineColor);
}



bool isObjectInvalid(UObject *obj) {
    if (!Tools::IsPtrValid(obj)) {
        return true;
    }

    if (!Tools::IsPtrValid(obj->ClassPrivate)) {
        return true;
    }

    if (obj->InternalIndex <= 0) {
        return true;
    }

    if (obj->NamePrivate.ComparisonIndex <= 0) {
        return true;
    }

    if ((uintptr_t) (obj) % sizeof(uintptr_t) != 0x0 &&
            (uintptr_t) (obj) % sizeof(uintptr_t) != 0x4) {
        return true;
    }

    if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) {
    return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end;
    }) ||
    std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) {
        return ((uintptr_t) obj->ClassPrivate) >= region.start &&
               ((uintptr_t) obj->ClassPrivate) <= region.end;
    })) {
        return true;
    }

    return false;
}

static UEngine *GEngine = 0;
UWorld *GetWorld()
{
    while (!GEngine)
    {
        GEngine = UObject::FindObject<UEngine>("UAEGameEngine Transient.UAEGameEngine_1");
        sleep(1);
    }
    if (GEngine)
    {
        auto ViewPort = GEngine->GameViewport;

        if (ViewPort)
        {
            return ViewPort->World;
        }
    }
    return 0;
}

TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) (Cheat::libUE4Base + Cheat::GName_Offest))();
}

class FPSCounter {
protected:
    unsigned int m_fps;
    unsigned int m_fpscount;
    long m_fpsinterval;

public:
    FPSCounter() : m_fps(0), m_fpscount(0), m_fpsinterval(0) {
    }

    void update() {
        m_fpscount++;

        if (m_fpsinterval < time(0)) {
            m_fps = m_fpscount;

            m_fpscount = 0;
            m_fpsinterval = time(0) + 1;
        }
    }

    unsigned int get() const {
        return m_fps;
    }
};

FPSCounter fps;

std::vector<AActor *> GetActors() {
    auto World = GetWorld();
    if (!World)
        return std::vector<AActor *>();

    auto PersistentLevel = World->PersistentLevel;
    if (!PersistentLevel)
        return std::vector<AActor *>();

    struct GovnoArray {
        uintptr_t base;
        int32_t count;
        int32_t max;
    };
    static thread_local GovnoArray Actors{};

    Actors = *(((GovnoArray *(*)(uintptr_t)) (Cheat::libUE4Base + Cheat::ActorArray_Offest))(
                   reinterpret_cast<uintptr_t>(PersistentLevel)));

    if (Actors.count <= 0) {
        return {};
    }

    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.count; i++) {
        auto Actor = *(uintptr_t *) (Actors.base + (i * sizeof(uintptr_t)));
        if (Actor) {
            actors.push_back(reinterpret_cast<AActor *const>(Actor));
        }
    }
    return actors;
}


template<class T>
void GetAllActors(std::vector<T *> &Actors) {
    UGameplayStatics *gGameplayStatics = (UGameplayStatics *) gGameplayStatics->StaticClass();
    auto GWorld = GetWorld();
    if (GWorld) {
        TArray<AActor *> Actors2;
        gGameplayStatics->GetAllActorsOfClass((UObject *) GWorld, T::StaticClass(), &Actors2);
        for (int i = 0; i < Actors2.Num(); i++) {
            Actors.push_back((T *) Actors2[i]);
        }
    }
}









SDK::FVector SubtractVectors(SDK::FVector a, SDK::FVector b) {
    SDK::FVector result;
    result.X = a.X - b.X;
    result.Y = a.Y - b.Y;
    result.Z = a.Z - b.Z;
    return result;
}


SDK::FVector AddVectors(SDK::FVector a, SDK::FVector b) {
    SDK::FVector result;
    result.X = a.X + b.X;
    result.Y = a.Y + b.Y;
    result.Z = a.Z + b.Z;
    return result;
}


SDK::FVector MultiplyVectors(SDK::FVector a, SDK::FVector b) {
    SDK::FVector result;
    result.X = a.X * b.X;
    result.Y = a.Y * b.Y;
    result.Z = a.Z * b.Z;
    return result;
}


SDK::FVector DivideVectors(SDK::FVector a, SDK::FVector b) {
    SDK::FVector result;
    result.X = a.X / b.X;
    result.Y = a.Y / b.Y;
    result.Z = a.Z / b.Z;
    return result;
}


SDK::FVector MultiplyVectorFloat(SDK::FVector a, float scalar) {
    SDK::FVector result;
    result.X = a.X * scalar;
    result.Y = a.Y * scalar;
    result.Z = a.Z * scalar;
    return result;
}

FVector Minus_VectorVector(const FVector& A, const FVector& B)
{
    return FVector{A.X - B.X, A.Y - B.Y, A.Z - B.Z};
}


FVector Add_VectorVector(const FVector& A, const FVector& B)
{
    return FVector{A.X + B.X, A.Y + B.Y, A.Z + B.Z};
}

FVector Multiply_VectorFloat(const FVector& A, float Scalar)
{
    return FVector{A.X * Scalar, A.Y * Scalar, A.Z * Scalar};
}



FVector CalculateWeaponMuzzlePosition(const FVector& weaponLocation, const FRotator& weaponRotation, float weaponBodyLength) {

    float radPitch = weaponRotation.Pitch * (3.14159265358979323846 / 180.0f);
    float radYaw = weaponRotation.Yaw * (3.14159265358979323846 / 180.0f);


    float forwardX = std::cos(radPitch) * std::cos(radYaw);
    float forwardY = std::cos(radPitch) * std::sin(radYaw);
    float forwardZ = std::sin(radPitch);


    FVector muzzlePosition = {
        weaponLocation.X + forwardX * weaponBodyLength,
        weaponLocation.Y + forwardY * weaponBodyLength,
        weaponLocation.Z + forwardZ * weaponBodyLength
    };

    return muzzlePosition;
}


FRotator ClampAngles(FRotator inRot) {
    FRotator outRot = inRot;
    if (outRot.Pitch > 180)
        outRot.Pitch -= 360;
    if (outRot.Pitch < -180)
        outRot.Pitch += 360;

    if (outRot.Pitch < -75.f)
        outRot.Pitch = -75.f;
    else if (outRot.Pitch > 75.f)
        outRot.Pitch = 75.f;

    while (outRot.Yaw < -180.0f)
        outRot.Yaw += 360.0f;
    while (outRot.Yaw > 180.0f)
        outRot.Yaw -= 360.0f;
    return outRot;
}


FRotator ToRotator(FVector local, FVector target) {
    FVector rotation = Minus_VectorVector(local, target);
    float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);
    FRotator newViewAngle = {0};
    newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Roll = (float) 0.f;
    if (rotation.X >= 0.f)
        newViewAngle.Yaw += 180.0f;
    return newViewAngle;
}





bool isInsideFOVs(int x, int y) {
    if (!Cheat::Aimbot::Radius)
        return true;

    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int rad = Cheat::Aimbot::Radius * 0.5f;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}





auto GetTargetForAimBot() {
    ASTExtraPlayerCharacter *result = nullptr;
    float max = std::numeric_limits<float>::infinity();
    auto Actors = GetActors();
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *)Actor;
                auto Target = (ASTExtraPlayerCharacter *)Actor;

                float dist = localPlayer->GetDistanceTo(Target) / 100.0f;
                if (dist > Cheat::Aimbot::Range)
                    continue;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;
                if (Player->TeamID == localPlayer->TeamID)
                    continue;
                if (Player->bDead)
                    continue;

                if (Cheat::Aimbot::IgnoreKnock) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Cheat::Aimbot::VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }
                if (Cheat::Aimbot::IgnoreBot) {
                    if (Player->bIsAI)
                        continue;
                }

                auto Root = Player->GetBonePos("Root", {});
                auto Head = Player->GetBonePos("Head", {});
                FVector2D RootSc, HeadSc;
                if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.20f;

                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) &&
                            (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float)(glWidth / 2), (float)(glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

                        if (isInsideFOVs((int)middlePoint.X, (int)middlePoint.Y)) {
                            float dist = FVector2D::Distance(v2Middle, v2Loc);

                            if (dist < max) {
                                max = dist;
                                result = Player;
                            }
                        }
                    }
                }
            }
        }
    }

    return result;
}



    ASTExtraPlayerCharacter* GetTargetByPussy() {
    ASTExtraPlayerCharacter* result = nullptr;
    float minDistance = std::numeric_limits<float>::max();

    if (!g_LocalPlayer || !g_LocalController) 
        return nullptr;

    auto Actors = GetActors();
    FVector viewPos = g_LocalPlayer->GetBonePos("Head", {0, 0, 0});
    viewPos.Z += 10.0f; // Eye level adjustment

    for (auto Actor : Actors) {
        // 1. Basic Validation
        if (!Actor || isObjectInvalid(Actor)) continue;

        // 2. Class Check
        if (!Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) continue;

        auto Player = (ASTExtraPlayerCharacter*)Actor;

        // 3. Team & Self Check
        if (Player == g_LocalPlayer) continue;
        if (Player->TeamID == g_LocalPlayer->TeamID) continue;

        // 4. Status Check (Dead/Knocked)
        if (Player->bDead) continue;
        if (Cheat::BulletTrack::IgnoreKnock && Player->Health <= 0.0f) continue;

        // 5. Distance Check (Optional but good for performance)
        float currentDist = g_LocalPlayer->GetDistanceTo(Player);
        if (currentDist > (Cheat::BulletTrack::Meter * 200.0f)) continue; // Convert meters to CM

        // 6. Visibility Check (Line of Sight)
        if (Cheat::BulletTrack::VisCheck) {
            if (!g_LocalController->LineOfSightTo(Player, viewPos, true))
                continue;
        }

        // 7. Find Closest Target
        if (currentDist < minDistance) {
            minDistance = currentDist;
            result = Player;
        }
    }

    return result;
}



auto GetTargetByCross() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();
    auto Actors = GetActors();

    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;
    FVector PlayerPos = {};

    if (localPlayer) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {

                auto Player = (ASTExtraPlayerCharacter *) Actor;
                float distx = localPlayer->GetDistanceTo(Player) / 100.0f;

                if (distx > Cheat::BulletTrack::Range)
                    continue;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (Player->bHidden)
                    continue;

                if (Cheat::BulletTrack::IgnoreKnock) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Cheat::BulletTrack::VisCheck) {

                    auto CurrentWeaponReplicated = (ASTExtraShootWeapon*)g_LocalPlayer->WeaponManagerComponent->CurrentWeaponReplicated;

                    if (CurrentWeaponReplicated) {
                        FVector weaponlocation = CurrentWeaponReplicated->K2_GetActorLocation();
                        FRotator weaponRotation = CurrentWeaponReplicated->K2_GetActorRotation();
                        float weaponBodyLength = CurrentWeaponReplicated->GetWeaponBodyLength();
                        FVector muzzlePosition = CalculateWeaponMuzzlePosition(weaponlocation, weaponRotation, weaponBodyLength / 1.5);
                        if (!localController->LineOfSightTo(Player, muzzlePosition, true))
                            continue;
                    }
                }
                if (Cheat::BulletTrack::IgnoreBot) {
                    if (Player->bEnsure)
                        continue;
                }
                auto Root = Player->GetBonePos("Root", {});
                auto Head = Player->GetBonePos("Head", {});
                FVector2D RootSc, HeadSc;
                if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.20f;

                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) &&
                            (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float)(glWidth / 2), (float)(glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);


                        float dist = FVector2D::Distance(v2Middle, v2Loc);

                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
            }
        }
    }
    return result;
}








const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
        return "Motorbike";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
        return "Dacia";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
        return "Mini Bus";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
        return "Pick Up";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
        return "Buggy";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
        return "UAZ";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
        return "PG117";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
        return "Aquarail";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
        return "Mirado";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
        return "Rony";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
        return "Scooter";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
        return "Snow Mobile";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
        return "Tuk Tuk";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
        return "Snow Bike";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
        return "Surf Board";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
        return "Snow Board";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
        return "Amphibious";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
        return "Lada Niva";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
        return "UAV";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
        return "Mega Drop";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
        return "Lamborghini";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
        return "Gold Mirado";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
        return "Big Foot";
        break;
    case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
        return "UH60";
        break;
    default:
        return "Vehicle";
        break;
    }
    return "Vehicle";
}



namespace Settings {
static int Tab = 1;
}

void DrawCircle(AHUD* HUD, int x, int y, int radius, int numsides, FLinearColor OutlineColor)
{
    UCanvas* Canvas = HUD->Canvas;
    float Step = 2 * M_PI / numsides;

    for (int i = 0; i < numsides; i++)
    {
        float angle1 = i * Step;
        float angle2 = (i + 1) * Step;

        float X1 = radius * cos(angle1) + x;
        float Y1 = radius * sin(angle1) + y;
        float X2 = radius * cos(angle2) + x;
        float Y2 = radius * sin(angle2) + y;

        Canvas->K2_DrawLine(FVector2D(X1, Y1), FVector2D(X2, Y2), 1.f, OutlineColor);
    }
}

void RenderESPPRIVATE(AHUD* HUD, int ScreenWidth, int ScreenHeight) {
    ASTExtraPlayerCharacter *localPlayer = 0;
	ASTExtraPlayerController *localPlayerController = 0;
    FLinearColor OneColor(1.0f,1.0f,1.0f,1.0f);
    glWidth = ScreenWidth;
    glHeight = ScreenHeight;
    
    UCanvas* Canvas = HUD->Canvas;
    if (Canvas) {


        static bool loadFont = false;
        if (!loadFont) {
            pthread_t t;
            pthread_create(&t, 0, LoadFont, 0);
            loadFont = true;
        }
   if (!tslFont || !robotoTinyFont)
            return;
        tslFont->LegacyFontSize = 17;
        DrawOutlinedText(HUD, FString("        PunisherDeveloper -> 4.4.0"), {(float)glWidth / 10, 680}, COLOR_RED, COLOR_NONE, true);

		
		DrawOutlinedText(HUD, "", {150, 100}, COLOR_RED, COLOR_NONE, true);
		
		DrawOutlinedText(HUD, "", {150, 140}, COLOR_GREEN, COLOR_NONE, true);
     
        if (Aimbot)
        {
    DrawCircle(HUD, ScreenWidth / 2, ScreenHeight / 2, Cheat::Aimbot::Radius, 64, COLOR_RED);
             }
                                
        UGameplayStatics* gGameplayStatics = (UGameplayStatics*)UGameplayStatics::StaticClass();
        auto GWorld = GetWorld();
        if (GWorld) {
            UNetDriver* NetDriver = GWorld->NetDriver;
            if (NetDriver) {
                UNetConnection* ServerConnection = NetDriver->ServerConnection;
                if (ServerConnection) {
                    localPlayerController = (ASTExtraPlayerController*)ServerConnection->PlayerController;
                }
            }

            if (localPlayerController) {
                std::vector<ASTExtraPlayerCharacter*> PlayerCharacter;
                GetAllActors(PlayerCharacter);
                for (auto actor = PlayerCharacter.begin(); actor != PlayerCharacter.end(); actor++) {
                    auto Actor = *actor;


                    if (Actor->PlayerKey == ((ASTExtraPlayerController*)localPlayerController)->PlayerKey) {
                        localPlayer = Actor;
                        break;
                    }
                }

                
                
                
        
                if (localPlayer) {
                    if (Cheat::BulletTrack::AutoFire) {
                        if ((g_LocalPlayer && g_LocalPlayer->RootComponent) && localPlayerController) {
                            ASTExtraPlayerCharacter* Target;
                            Target = GetTargetByCross();

                            auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                            if (WeaponManagerComponent) {
                                auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                if ((int)propSlot.GetValue() >= 1 && (int)propSlot.GetValue() <= 3) {
                                    if (Cheat::BulletTrack::AutoFireOff) {
                                        localPlayerController->OnReleaseFire();
                                    }
                                    if (Target && Target->RootComponent) {
                                        localPlayerController->OnPressFire();
                                    } else {
                                        Cheat::BulletTrack::AutoFireOff = false;
                                    }
                                }
                            }
                        }
                    } else {
                        Cheat::BulletTrack::AutoFireOff = false;
                    }
                }
            }
        }
        g_LocalPlayer = localPlayer;
        g_LocalController = localPlayerController;
    }
}

