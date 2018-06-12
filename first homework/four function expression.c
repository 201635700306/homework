#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float x,y ;
	printf("请输入一个x值：");
	scanf("%f",&x);
	if (x<1)
		y=x;
	else if (x<10)
			y=2*x-1;
		else
			y=3*x-11;
	printf("x=%f\n,y=%f\n",x,y);
	return 0;
}
