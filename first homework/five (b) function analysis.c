#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("enter x:");
	scanf("%d",&x);
	y=0;                                     //此时y等于0
	if (x>=0)                                //如果x大于等于0 
	   if(x>0) y=1;                          //x大于0时，1赋值给y 
	else y=-1;                               //x等于0的时候,-1赋值给y 
	printf("x=%d,y=%d\n",x,y);
	return 0;                               //最后运行结果：x<0时，y=0;x>0时，y=1;x=0时，y=-1   不符合题目要求。
}
