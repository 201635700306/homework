#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  float x;
  float y,y1,y2,y3,y4,y5;
  int z;
  y1=100000*0.1;
  y2=y1+100000*0.075;
  y3=y2+100000*0.05;
  y4=y3+100000*0.03;
  y5=y4+400000*0.015;
  printf("请输入利润x:");
  scanf("%f",&x);
  z=x/100000;
  if (z>10)  z=10;
  switch(z)
  {    case 1:
     {
	    y=x*0.1;
	 }break;
       case 2:
	 {
	 	y=y1+(x-100000)*0.075;
	  }break;
       case 3: 
	 {
	 	y=y2+(x-200000)*0.05;
	  }break;
       case 4:
	 {
	 	 y=y3+(x-400000)*0.03;
	  } break;
       case 5:
	 {
	 	 y=y4+(x-600000)*0.015;
	  } break;
       case 6:
	 {
	 	 y=y5+(x-1000000)*0.01;	
	  } break;
  }
   printf("奖金是 %10.2f\n",y);
	return 0;
}
