#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int YearMouth[]={31,29,31,30,31,30,31,31,30,31,30,31,32};
typedef struct Date
{
      int year;
      int mouth;
      int day;
}DATE;
BOOL isNotRuiYear(int year)
{
      BOOL flog=FALSE;
 
      if(0==year%4 &&  0==year/4%100)
            flog=TRUE;
      if(0==year%400)
            flog=TRUE;

     return flog;
}

void main()
{

      DATE date;
      int i;
      int AllDay=0;
      printf("please input int year!\n");
      scanf("%d",&date.year);
      printf("please input int mouth!\n");
      scanf("%d",&date.mouth);
      printf("please input int day!\n");
      scanf("%d",&date.day);
      if(isNotRuiYear(date.year))
      {
            for(i=0;i<date.mouth;i++)
               AllDay+=YearMouth[i];
            AllDay-=1;
      }
      else
      {
            for(i=0;i<date.mouth;i++)AllDay+=YearMouth[i];

      }
  printf("this %d year %d mouth %d day in all year is %d days \n",date.year,date.mouth,date.day,AllDay);

}
