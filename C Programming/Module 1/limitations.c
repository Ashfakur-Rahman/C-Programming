#include<stdio.h>
int main()
{
    int a=1000000000;//10^9 (showing perfectly)
    printf("%d\n",a);

    int b=10000000000;//10^10 (showing garbage)
    printf("%d\n",b);

    long long int c = 1000000000000000000;//10^18 (showing perfectly)
    printf("%lld\n",c);

    long long int d = 10000000000000000000;//10^19 (showing garbage)
    printf("%lld\n",d);

    float e = 1.123456;//6 decimal point (showing perfectly)
    printf("%f\n",e);

    float f = 1.1234567;//7 decimal point (showing garbage, 1 digit ruduced)
    printf("%f\n",f);

    double g = 123456.123456;//(showing perfectly)
    printf("%lf\n",g);

    return 0;
}