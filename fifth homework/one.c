#include<stdio.h>
int main()
{
void fun(int *p1, int *p2, int *p3);
int a, b, c;
printf("enter three numbers :\n");
scanf_s("%d%d%d", &a, &b, &c);
fun( &a, &b, &c);
return 0;
}
void fun(int *p1, int *p2, int *p3)
{
int *temp1, *temp2 ,*temp3;
if ((*p1) > (*p2))
{
temp1 = p1;
p1 = p2; 
p2 = temp1;
}
if ((*p1) > (*p3))
{
temp3 = p1;
p1 = p3;
p3 = temp3;


}
if ((*p2) > (*p3))
{
temp2 = p2;
p2 = p3;
p3 = temp2;
}
printf("%d\t%d\t%d\t\n", *p1, *p2, *p3);
} 
