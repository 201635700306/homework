#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,m,n,t;
	printf("������������m,n:");
    scanf("%d%d",&m,&n);
    if(m>n)
    {
	  t=m;
	  m=n;
	  n=t;}
    for(i=m;i>0;i--)
    if(m%i==0 && n%i==0)
    {
	  printf("���ǵ����Լ��Ϊ��%d\n",i);
      break;}
    printf("���ǵ���󹫱���Ϊ��%d\n",m*n/i); 
	return 0;
}
