#include <stdio.h>
int main()
{
    int n,m;

    scanf("%d %d",&n,&m);
    
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);

    }
    int fre[100001]={0};
    int value;
    for(int i=0;i<n;i++)
    {
        value=a[i];
        fre[value]++;
    }
    for(int i=1;i<=m;i++)
    {
        printf("%d\n",fre[i]);
    }

}


