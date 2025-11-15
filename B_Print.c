#include <stdio.h>

void sum(int a)
{
  for(int i=1;i<=a;i++)
  {
     printf("%d ",i);
  }
   
   
}


int main()

{
    int a;
    scanf("%d",&a);
     sum(a);
     return 0;
}