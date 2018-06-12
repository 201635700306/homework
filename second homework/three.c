#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,m,n,t;
	printf("请输入正整数m,n:");
    scanf("%d%d",&m,&n);
    if(m>n)
    {
	  t=m;
	  m=n;
	  n=t;}
    for(i=m;i>0;i--)
    if(m%i==0 && n%i==0)
    {
	  printf("它们的最大公约数为：%d\n",i);
      break;}
    printf("它们的最大公倍数为：%d\n",m*n/i); 
	return 0;
}
