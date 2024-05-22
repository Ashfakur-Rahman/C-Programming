#include<stdio.h>
int main()
{
    int a=9, b=20;
    int sum=a+b;
    printf("Sum = %d\n",sum);
    int sub=a-b;
    printf("sub = %d\n",sub);
    int mul=a*b;
    printf("mul = %d\n",mul);

    int div=b/a;
    printf("div = %d\n",div);

    //for decimal division value
    float divv=b*1.0/a;
    printf("div = %f\n",divv);

    int mod=b%a;
    printf("mod = %d\n",mod);
    
    return 0;
}