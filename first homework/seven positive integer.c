#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int a,b,c,d,e,n;
	printf("请输入一个不多于5位的正整数：\n");
	scanf("%d",&x);
    if(x>9999) n=5;
    else if(x>999) n=4;
    else if(x>99) n=3;
    else if(x>9) n=2;
    else  n=1;
    printf("这是一个 %d 位的整数\n",n);
    printf("每位数字为:");
    e=x/10000;
    d=(x-e*10000)/1000;
    c=(x-e*10000-d*1000)/100;
    b=(x-e*10000-d*1000-c*100)/10;
    a=x-e*10000-d*1000-c*100-b*10;
 switch(n)
 {
        case 5:
   {
    printf("%d,%d,%d,%d,%d\n",e,d,c,b,a);
                printf("逆序数字为:");
                printf("%d%d%d%d%d\n",a,b,c,d,e);
   }break;
        case 4:
   {
    printf("%d,%d,%d,%d\n",d,c,b,a);
                printf("逆序数字为:");
                printf("%d%d%d%d\n",a,b,c,d);
   }break;
        case 3:
   {
    printf("%d,%d,%d\n",c,b,a);
                printf("逆序数字为:");
                printf("%d%d%d\n",a,b,c);
   }break; 
        case 2:
   {
    printf("%d,%d\n",b,a);
                printf("逆序数字为:");
                printf("%d%d\n",a,b);
   }break;
        case 1:
   {
    printf("%d\n",e);
                printf("逆序数字为:");
                printf("%d\n",a);
   }break;
 } 
	return 0;
}
