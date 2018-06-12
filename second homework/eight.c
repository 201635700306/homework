#include <stdio.h>
void main()
{ 
int i,a,b,c,count=0;//count是计数器
printf("水仙花数有\n");
for (i=100;i<=999;i++)
{ 
a=i/100;  //取百位数字
b=(i-a*100)/10;   //取十位数字
c=i%10;  //取个位数字
if(a*a*a+b*b*b+c*c*c==i)//如果是水仙花数
{
printf("%d\t",i);
count++;//如果是水仙花数 计数器就加1 
}
}
printf("\n水仙花数的个数为\t%d",count);
printf("\n");
}
