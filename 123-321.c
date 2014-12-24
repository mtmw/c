#include <stdio.h>

int main()
{
    int a=0, b=0, c=0, y=0;
    printf("In Value:");
    scanf("%d",&y);
    a=y/100;
    b=y%100/10;
    c=y%100%10;
    
    printf("Out Value: %d\n",c*100+b*10+a);
    
    return 0;
}

