#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("enter x:");
	scanf("%d",&x);
	y=-1;                                 //此时y等于-1 
	if (x!=0)                             //如果x不等于0 
	   if (x>0)                           //x大于0时，1赋值给y 
	      y=1;
	   else                              //x小于0的时候,0赋值给y 
	      y=0;
	   printf("x=%d,y=%d\n",x,y);
	return 0;
}                                       //最后运行结果：x<0时，y=0;x=0时，y=-1;x>0时，y=1   不符合题目要求。 
