//7. Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct timeperiod
{
    int hour;
   int minute;
   int sec;

};
int main()
{
    struct timeperiod diff;
    struct timeperiod start_time,end_time;
    
    printf("Enter start time hour minute sec :\n");
    scanf("%d%d%d",&start_time.hour,&start_time.minute,&start_time.sec);

    printf("Enter End hour, minute, second:\n");
    scanf("%d%d%d",&end_time.hour,&end_time.minute,&end_time.sec);

     while(start_time.sec>end_time.sec)
     {
        --end_time.minute;
          end_time.sec+=60;
     }
     diff.sec=end_time.sec-start_time.sec;
     while (start_time.minute>end_time.minute)
     {
        --end_time.hour;
        end_time.minute+=60;
     }
     diff.minute=end_time.minute-start_time.minute;

     diff.hour=end_time.hour-start_time.hour;

    printf("\astart time      %d:%d:%d \n",start_time.hour,start_time.minute,start_time.sec);
    printf("\aend time        %d:%d:%d \n ",end_time.hour,end_time.minute,end_time.sec);
    printf("\adifference time %d:%d:%d \n ",diff.hour,diff.minute,diff.sec);
    printf("\n");


    return 0;
    
}
