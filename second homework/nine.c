#include <stdio.h>
int main()
{
    int n,temp,sum; /*n��ʾҪ�жϵ�����temp��ʾ���ӣ�sum��ʾ����֮��*/ 
    for(n=1;n<1000;n++) 
    {
        sum= 0;
        for(temp=1;temp<n;temp++)
        {
            if(n%temp==0) /*�ж�n�ܷ�temp�������ܵĻ�temp��Ϊ����*/ 
            {
                sum=sum+temp; /*������֮��*/ 
            }
        }
        if(sum==n) /*�жϴ����Ƿ��������֮��*/ 
        {
            printf("%d its factors are ",n);
            for(temp=1;temp<n;++temp)
            {
                if(n%temp==0)
                {
                    printf("%d ",temp);
                }
            }
            printf("\n");
        }
         
    }
    return 0;
}
