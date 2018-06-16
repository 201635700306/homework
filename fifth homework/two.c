#include<stdio.h>
#include<string.h> 
int main()
{
    char a[10],b[10],c[10],t[10]; 
       gets(a);
       gets(b);
       gets(c);
       
       if(strcmp(a,b)>0)
       {
         strcpy(t,a);
         strcpy(a,b);
         strcpy(b,t);
       }
         
        
        if(strcmp(a,c)>0)
        {
         strcpy(t,a);
         strcpy(a,c);
         strcpy(c,t);
        }
        
         if(strcmp(b,c)>0)
        {
         strcpy(t,b);
         strcpy(b,c);
         strcpy(c,t);
        }    
        
        puts(a);
        puts(b);
        puts(c);
        return 0;     
}
