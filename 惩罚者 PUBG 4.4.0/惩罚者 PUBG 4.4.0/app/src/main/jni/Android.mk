LOCAL_PATH := $(call my-dir)
MAIN_LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE            := libdobby
LOCAL_SRC_FILES         := PunisherDeveloper/Dobby/libraries/$(TARGET_ARCH_ABI)/libdobby.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/PunisherDeveloper/Dobby/libraries/
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := shadowhook
LOCAL_SRC_FILES := PunisherDeveloper/shadowhook/libshadowhook.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)PunisherDeveloper/shadowhook/
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libcurl
LOCAL_SRC_FILES := PunisherDeveloper/curl/curl-android-$(TARGET_ARCH_ABI)/lib/libcurl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libssl
LOCAL_SRC_FILES := PunisherDeveloper/curl/openssl-android-$(TARGET_ARCH_ABI)/lib/libssl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libcrypto
LOCAL_SRC_FILES := PunisherDeveloper/curl/openssl-android-$(TARGET_ARCH_ABI)/lib/libcrypto.a
include $(PREBUILT_STATIC_LIBRARY)



include $(CLEAR_VARS)
LOCAL_MODULE    := signer

LOCAL_CFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w
LOCAL_CFLAGS += -fno-rtti -fno-exceptions -fpermissive
LOCAL_CPPFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w -Werror -s -std=c++17
LOCAL_CPPFLAGS += -Wno-error=c++11-narrowing -fms-extensions -fno-rtti -fno-exceptions -fpermissive
LOCAL_LDFLAGS += -Wl,--gc-sections,--strip-all, -llog
LOCAL_ARM_MODE := arm


LOCAL_C_INCLUDES += $(MAIN_LOCAL_PATH)

LOCAL_SRC_FILES 		:=  main.cpp \
        PunisherDeveloper/tools.cpp \
        Substrate/SubstrateDebug.cpp \
        Substrate/SubstrateHook.cpp \
        Substrate/hde64.c \
        Substrate/SymbolFinder.cpp \
        Substrate/SubstratePosixMemory.cpp \
        PunisherDeveloper/KittyMemory/KittyMemory.cpp \
        PunisherDeveloper/KittyMemory/MemoryPatch.cpp \
        PunisherDeveloper/KittyMemory/MemoryBackup.cpp \
        PunisherDeveloper/KittyMemory/KittyUtils.cpp \
        惩罚者/SDK/叶君_Basic.cpp \
        惩罚者/SDK/叶君_Basic_functions.cpp \
        惩罚者/SDK/叶君_CoreUObject_functions.cpp \
        惩罚者/SDK/叶君_Engine_functions.cpp \
        惩罚者/SDK/叶君_ShadowTrackerExtra_functions.cpp \
        惩罚者/SDK/叶君_Client_functions.cpp \
        PunisherDeveloper/And64InlineHook/And64InlineHook.cpp \
        
        
LOCAL_C_INCLUDES := $(LOCAL_PATH)/PunisherDeveloper/curl/curl-android-$(TARGET_ARCH_ABI)/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/PunisherDeveloper/curl/openssl-android-$(TARGET_ARCH_ABI)/include

LOCAL_CPP_FEATURES                      := exceptions
LOCAL_LDLIBS                            := -llog -landroid -lEGL -lGLESv2 -lGLESv3 -lGLESv1_CM -lz
LOCAL_STATIC_LIBRARIES := libcurl libssl libcrypto libdobby shadowhook
include $(BUILD_SHARED_LIBRARY)
