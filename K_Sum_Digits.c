#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char st[n+1];

    scanf("%s",st);
    int sum=0;
    int length=strlen(st);
    for(int i=0;i<length;i++)
    {
        sum =sum+(st[i]-'0');

    }
    printf("%d",sum);
}

