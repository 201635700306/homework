#include <stdio.h>
main()
{
int k; 
double s; 
for(k=1;k<=100;k++)
{
s=s+k;
}
for(k=1;k<=50;k++)
{
s=s+k*k;
}
for(k=1;k<=10;k++)
{
s=s+1.0/k; 
}
printf("the Sum is %lf",s); 
} 
