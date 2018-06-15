#include<stdio.h>
void main()

{
char a[50]="love";
char b[50]="zheshida";

int i=0,j=0;
while(a[i]!='\0')
	i++;
while(b[j]!='\0')
	a[i++]=b[j++];
a[i]='\0';
printf("the new string is %s\n",a);

}
