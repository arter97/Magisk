#pragma once

#include <logging.h>

#define MAIN_SOCKET  "a6c2339b087f4ceca5202ba8625327e4cb40468de4664997a6cedcd69a9366f9"
#define JAVA_PACKAGE_NAME "com.topjohnwu.magisk"
#define LOGFILE         "/cache/magisk.log"
#define UNBLOCKFILE     "/dev/.magisk_unblock"
#define DISABLEFILE     "/cache/.disable_magisk"
#define MAGISKTMP       "/sbin/.magisk"
#define MIRRDIR         MAGISKTMP "/mirror"
#define BLOCKDIR        MAGISKTMP "/block"
#define BBPATH          MAGISKTMP "/busybox"
#define MODULEMNT       MAGISKTMP "/modules"
#define ROOTOVL         MAGISKTMP "/rootdir"
#define ROOTMNT         ROOTOVL "/.mount_list"
#define SECURE_DIR      "/data/adb"
#define MODULEROOT      SECURE_DIR "/modules"
#define MODULEUPGRADE   SECURE_DIR "/modules_update"
#define DATABIN         SECURE_DIR "/magisk"
#define MAGISKDB        SECURE_DIR "/magisk.db"
#define BOOTCOUNT       SECURE_DIR "/.boot_count"
#define MANAGERAPK      DATABIN "/magisk.apk"

// Legacy crap
#define LEGACYCORE      MODULEROOT "/.core"

constexpr const char *applet_names[] = { "su", "resetprop", "magiskhide", nullptr };

// Multi-call entrypoints
int magisk_main(int argc, char *argv[]);
int magiskhide_main(int argc, char *argv[]);
int magiskpolicy_main(int argc, char *argv[]);
int su_client_main(int argc, char *argv[]);
int resetprop_main(int argc, char *argv[]);
