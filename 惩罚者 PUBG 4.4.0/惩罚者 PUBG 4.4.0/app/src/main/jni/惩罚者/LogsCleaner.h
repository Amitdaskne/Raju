void LogsCleaner()
{
    system("rm -rf /data/data/com.tencent.ig/files");
    system("rm -rf /data/data/com.tencent.ig/files/ano_tmp");
    system("touch /data/data/com.tencent.ig/files/ano_tmp");
    system("chmod 000 /data/data/com.tencent.ig/files/ano_tmp");
    system("rm -rf /data/data/com.tencent.ig/files/obblib");
    system("touch /data/data/com.tencent.ig/files/obblib");
    system("chmod 000 /data/data/com.tencent.ig/files/obblib");
    system("rm -rf /data/data/com.tencent.ig/files/xlog");
    system("touch /data/data/com.tencent.ig/files/xlog");
    system("chmod 000 /data/data/com.tencent.ig/files/xlog");
    system("rm -rf /data/data/com.tencent.ig/app_bugly");
    system("touch /data/data/com.tencent.ig/app_bugly");
    system("chmod 000 /data/data/com.tencent.ig/app_bugly");
    system("rm -rf /data/data/com.tencent.ig/app_crashrecord");
    system("touch /data/data/com.tencent.ig/app_crashrecord");
    system("chmod 000 /data/data/com.tencent.ig/app_crashrecord");
    system("rm -rf /data/data/com.tencent.ig/app_crashSight");
    system("touch /data/data/com.tencent.ig/app_crashSight");
    system("chmod 000 /data/data/com.tencent.ig/app_crashSight");
}

void LoginFix()
{
   system("rm -rf /data/data/com.tencent.ig/shared_prefs");
   system("mkdir /data/data/com.tencent.ig/shared_prefs");
   system("chmod 777 /data/data/com.tencent.ig/shared_prefs");
   system("rm -rf /data/data/com.tencent.ig/files");
   system("rm -rf /data/data/com.tencent.ig/databases");
   system("rm -rf /data/data/com.tencent.ig/files/login-identifier.txt");
   system("rm -rf /data/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Intermediate");
   system("rm -rf /data/data/com.tencent.ig/files/TGPA");
   system("rm -rf /data/data/com.tencent.ig/files/ProgramBinaryCache");
   system("chmod -R 000 /data/data/com.tencent.ig/files/ano_tmp/ano.ano3.dat");
}