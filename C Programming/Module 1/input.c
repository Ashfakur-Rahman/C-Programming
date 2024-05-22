#include<stdio.h>
int main()
{
    int a;
    float b;
    char ch;
    scanf("%d%% %f%% %c",&a,&b,&ch);
    printf("%d%% %.2f%% %c",a,b,ch);
    return 0;
    //ইনপুটের সাথে এক্সট্রা কিছু ইনপুট নিতে চাইলে (%,a,a etc.)
    //ঠিক ঐ জিনিসটাই scanf এবং printf এর মধ্যে সঠিক নিয়মে বসাতে হবে।
}