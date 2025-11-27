#include <stdio.h>

void fun(int n)
{
    if(n==0)
    {
        return;
    }
    printf("%d ",n);
    fun(n-1);
    if(n != 1)           
    printf(" ");

}

int main()
{
    int n;
    scanf("%d",&n);
    fun(4);
}