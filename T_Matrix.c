#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    int sum=0;
    int sum1=0;
  
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                     sum=sum+array[i][j]; 
                                          
                }
            
                 if(i+j == n-1)  
                {
                    sum1=sum1+array[i][j];
                }
            }
                
            
        }  
        int diff=abs(sum-sum1);
        printf("%d",diff);
       
}