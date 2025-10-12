#include <stdio.h>
#include <string.h>
int main()
{
    char st[1000001];
    fgets(st,1000001,stdin);
    for(int i=0;st[i]!='\\';i++)
    {
        printf("%c",st[i]);
    }
}