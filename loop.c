#include <stdio.h>
#include <time.h>

int main()
{
  6
  time_t rawtime;
   struct tm *timeinfo;
   FILE *fp;
   
   while(1){
   sleep(5);
   time (&rawtime);
   timeinfo = localtime (&rawtime);
   fp=fopen("version_record.txt","a");
   fprintf(fp,"Version 2.5     %s",asctime(timeinfo));
   fclose(fp);
   }
 
  return 0;
}
