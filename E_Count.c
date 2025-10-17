#include <stdio.h>
#include <string.h>
int main()
{
    char st[1000001];
    scanf("%s",&st);
    int length=strlen(st);   //string e space count kore
    int sum=0;
    for(int i=0;i<length;i++)
    {
      sum =sum+st[i]-'0';
    }
    printf("%d",sum);
}