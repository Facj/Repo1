#include <stdio.h>
#include <time.h>
#include <getopt.h>

int main(int argc, char **argv)
{
char c;
	while ((c = getopt (argc, argv, "v")) != -1)
         switch (c)
           {
           case 'v':
		printf("Loop updated version 2.1 \nDynamically updatable. Compatible from 1.4\n");
             return;
          
           default:
             return;
           }
     

    time_t rawtime;
   struct tm *timeinfo;
   FILE *fp;
   
   while(1)
  {
    sleep(5);
   time (&rawtime);
   timeinfo = localtime (&rawtime);
   fp=fopen("version_record.txt","a");
   fprintf(fp,"Version 2.1 %s", asctime(timeinfo));
   fclose(fp);
   }
 
  return 0;
}
