#include <stdio.h>
#include <stdlib.h>

void main() {
	float a;  
    double b;  
    printf("������һ��С��1000��������");  
    scanf("%f",&a);  
    if( a > 0 && a < 1000 )  
    {  
        b = sqrt(a);  
        printf("����ƽ�����ǣ�%2.0f\n",b);  
    }  
    else  
        printf("��������ݲ���ָ����Χ�����������룺\n");  
	return 0;
}
