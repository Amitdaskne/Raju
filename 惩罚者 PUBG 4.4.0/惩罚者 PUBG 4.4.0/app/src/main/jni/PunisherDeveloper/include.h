
//============================ @PunisherDeveloper ===============================//

/* Channel @PunisherDeveloper */
/* Owner - @PunisherAnsh */
/* Source Support - All Versions */

//============================ @PunisherDeveloper ===============================//

#include <list>
#include <vector>
#include <cstring>
#include <pthread.h>
#include <thread>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <dirent.h>
#include <sys/socket.h>
#include <malloc.h>
#include <math.h>
#include <sys/stat.h>
#include <errno.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <locale>
#include <string>
#include <codecvt>
#include "惩罚者/SDK.hpp"
#include "Includes/Logger.h"
#include "Includes/Utils.h"
#include "Includes/oxorany.h"
#include "PunisherDeveloper/KittyMemory/MemoryPatch.h"
#include "Includes/Macros.h"
#include "PunisherDeveloper/Tools.h"
#include "Includes/json.hpp"
#include "Includes/StrEnc.h"
#include "Includes/android_include.h"
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <cassert>
#include <fcntl.h>
#include <unistd.h>

#define ARM64_SYSREG_S3_3_C13_C0_2 "S3_3_C13_C0_2"
#define _ReadStatusReg(reg) ({ uint64_t val; __asm__ volatile("mrs %0, " reg : "=r" (val)); val; })
#define READ_STATUS_REG() ({ uint64_t val; __asm__ volatile("mrs %0, S3_3_C13_C0_2" : "=r" (val)); val; })
char *Offset;
#define ret_zero
#define _BYTE  uint8_t
#define _WORD  uint16_t
#define _DWORD uint32_t
#define _QWORD __int64
#define _OWORD uint64_t
#define _QWORD uint64_t
#define _BOOL8 uint64_t

#define j_j__free
#define log_suspicious_activity
#define apply_cheat_penalty
#define check_memory_integrity
#define __OFSUB__
#define AnoSDKIoctlOld_0
#define HIWORD
#define JUMPOUT
#define byte_4
#include <random>
#define _ReadStatusReg
#define BYTE5
#define BYTE4
#define HIBYTE
#define BYTE6
#define sub_95A8204
#define IsMemoryReadable
#define BYTE1
#define BYTE3
#define MEMORY_BASIC_INFORMATION mbi
#define BYTE2
#define ARM64_SYSREG
#define _WriteStatusReg

#define HIWORD
#define __strncpy_chk
#define __memcpy_chk
#define __strncpy_chk2
#define __fgets_chk
#define __errno
#define qmemcpy

#define byte_4
#define _ReadStatusReg
#define BYTE5
#define BYTE4
#define HIBYTE
#define BYTE6
#define IsMemoryReadable
#define BYTE1
#define BYTE3
typedef long long int64; 
typedef short int16;
DWORD TBlueBase = 0;
DWORD AntBase = 0;
DWORD BufferBase = 0;
DWORD libcBase = 0;
DWORD HdmpveBase = 0;
DWORD libanogsBase = 0;
DWORD libUE4Base = 0;
DWORD UE4Base = 0;
DWORD libanortBase = 0;
DWORD libEGLBase = 0;
DWORD libanogsAlloc = 0;
DWORD libUE4Alloc = 0;
DWORD libEGLAlloc = 0;
unsigned int libanogsSize  = 0;
unsigned int libUE4Size  = 0;
DWORD NewBase = 0;
#define HOOK

// =============================================================================

#define PUNISHER_TARGET "libanogs.so"
#define PUNISHERUE4_TARGET "libUE4.so"

// =============================================================================

#define PUNISHER_TAG "PUNISHER_SYSTEM"

// --- Original Function Pointer UE4 & Anogs ---//
int64_t (*orig_case35)(int64_t a1, unsigned char *a2, size_t a3);
__int64 (*osub_313810)(__int64 a1, __int64 a2);

// =============================================================================

uintptr_t string2Offsets(const char *c) {
    int base = 16;
    // See if this function catches all possibilities.
    // If it doesn't, the function would have to be amended
    // whenever you add a combination of architecture and
    // compiler that is not yet addressed.
    static_assert(sizeof(uintptr_t) == sizeof(unsigned long)
                  || sizeof(uintptr_t) == sizeof(unsigned long long),
                  "Please add string to handle conversion for this architecture.");

    // Now choose the correct function ...
    if (sizeof(uintptr_t) == sizeof(unsigned long)) {
        return strtoul(c, nullptr, base);
    }

    // All other options exhausted, sizeof(uintptr_t) == sizeof(unsigned long long))
    return strtoull(c, nullptr, base);
}


size_t getLibrarySize(const char *libraryName)
{
    FILE *mapsFile = fopen("/proc/self/maps", "r");
    if (mapsFile == nullptr)
    {
        return 0;
    }

    char line[256];
    size_t size = 0;
    uintptr_t startAddr = 0, endAddr = 0;
    while (fgets(line, sizeof(line), mapsFile))
    {
        if (strstr(line, libraryName))
        {
            sscanf(line, "%lx-%lx", &startAddr, &endAddr);
            size = endAddr - startAddr;
            break;
        }
    }

    fclose(mapsFile);
    return size;
}

//=======================================================================

int64_t hooked_case35(int64_t a1, unsigned char *a2, size_t a3) {
    return orig_case35(a1, a2, a3);
}

__int64 hsub_313810(__int64 a1, __int64 a2) {
    
    __int64 result = osub_313810(a1, a2);
    
    if (result == 0) {
        
        *(_QWORD *)(a1 + 112) = (0x32);
        (*(_QWORD *)(a1 + 112), 0, 50);

        if (a2) {
            strncpy((char*)*(_QWORD *)(a1 + 112), (char*)a2, 49);
        }
        
        return 1LL;  
    }
    
    return result;  
}

// =============================================================================
// PUNISHER | NORMAL FUNCTION DEFINITIONS 
// =============================================================================

void __fastcall sub_2234B0(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 10) )
  {
    *(_BYTE *)(a1 + 8) = 1;
    *(_BYTE *)(a1 + 10) = 1;
  }
}


__int64 __fastcall sub_471B68(__int64 a1, int a2)
{
  __int64 v3;
  char v6[32];
  __int64 v7;

  v7 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);

  *(_BYTE *)(a1 + 10) = 3;

  _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));

  return 0LL;
}


//======================================================================= 

#define WRITE_MEMORY(lib, offset, value) do { \
    uintptr_t base = get_module_base(lib); \
    if (base) { \
        WriteMemoryy(base + offset, value); \
    } else { \
        LOGI("Module %s base not found!\n", lib); \
    } \
} while(0)

//======================================================================= 

    

int Write_DWORD(long int addr, uint32_t value) {
    Tools::WriteAddr((void*)(addr), (void*)&value, sizeof(uint32_t));
    return 0;
}

int Write_QWORD(long int addr, uint64_t value) {
    Tools::WriteAddr((void*)(addr), (void*)&value, sizeof(uint64_t));
    return 0;
}

int Write_FLOAT(long int addr, float value) {
    Tools::WriteAddr((void*)(addr), (void*)&value, sizeof(float));
    return 0;
}


int Write_DOUBLE(long int addr, double value) {
    Tools::WriteAddr((void*)(addr), (void*)&value, sizeof(double));
    return 0;
}

int Write_BYTE(long int addr, uint8_t value) {
    Tools::WriteAddr((void*)(addr), (void*)&value, sizeof(uint8_t));
    return 0;
}
int Write_WORD(long int addr, uint16_t value) {
    Tools::WriteAddr((void*)(addr), (void*)&value, sizeof(uint16_t));
    return 0;
}

// =============================================================================
// MAIN INITIALIZATION
// =============================================================================

void *PUNISHER_ENGINE_LAUNCH(void *) {
    while (!isLibraryLoaded(PUNISHER_TARGET)) { sleep(1); }  
    
    LOGI("[%s] 🚀 PUNISHER ENGINE STARTING...", PUNISHER_TAG);

   //Add Your Anogs Bypass Here

    LOGI("[%s] ✅ PUNISHER ENGINE ACTIVE", PUNISHER_TAG);

    return NULL;
}
    
    
// =============================================================================
// PUNISHER UE4 DEFINITIONS 
// =============================================================================

__int64 Punisher_Fix_Damage()
{
  return 0LL;
}

__int64 sub_77CE080()
{
  return 0LL;
}

// =============================================================================
// UE4 INITIALIZATION
// =============================================================================

void *PUNISHER_UE4_LAUNCH(void *) {
    while (!isLibraryLoaded(PUNISHERUE4_TARGET)) { sleep(1); }  
    
    LOGI("[%s] 🚀 PUNISHER UE4 STARTING...", PUNISHER_TAG);
  
    //Add Your Ue4 Bypass Here
  
    LOGI("[%s] ✅ PUNISHER UE4 ACTIVE", PUNISHER_TAG);   
    return NULL;
}



__attribute__((constructor))
void initialize() {
    pthread_t ptid;
    pthread_create(&ptid, NULL, PUNISHER_ENGINE_LAUNCH, NULL);   
    pthread_create(&ptid, NULL, PUNISHER_UE4_LAUNCH, NULL);
}
