#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("enter x:");
	scanf("%d",&x);
	y=0;                                     //��ʱy����0
	if (x>=0)                                //���x���ڵ���0 
	   if(x>0) y=1;                          //x����0ʱ��1��ֵ��y 
	else y=-1;                               //x����0��ʱ��,-1��ֵ��y 
	printf("x=%d,y=%d\n",x,y);
	return 0;                               //������н����x<0ʱ��y=0;x>0ʱ��y=1;x=0ʱ��y=-1   ��������ĿҪ��
}
