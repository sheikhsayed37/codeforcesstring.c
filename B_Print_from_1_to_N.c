#include <stdio.h>
void sayed(int n)
{
    if(n==6)
    {
        return;
    }
    printf("%d\n",n);
    sayed(n+1);
}
int main()
{
    int n;
  scanf("%d",&n);
  sayed(1);

}