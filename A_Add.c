#include <stdio.h>

int sum(int a, int b)
{
    int sum1=a+b;
    printf("%d",sum1);
    return sum1;
}


int main()

{
    int a,b;
    scanf("%d %d",&a,&b);
     sum(a,b);
     return 0;
}