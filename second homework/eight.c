#include <stdio.h>
void main()
{ 
int i,a,b,c,count=0;//count�Ǽ�����
printf("ˮ�ɻ�����\n");
for (i=100;i<=999;i++)
{ 
a=i/100;  //ȡ��λ����
b=(i-a*100)/10;   //ȡʮλ����
c=i%10;  //ȡ��λ����
if(a*a*a+b*b*b+c*c*c==i)//�����ˮ�ɻ���
{
printf("%d\t",i);
count++;//�����ˮ�ɻ��� �������ͼ�1 
}
}
printf("\nˮ�ɻ����ĸ���Ϊ\t%d",count);
printf("\n");
}
