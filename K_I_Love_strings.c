#include <stdio.h>
#include <string.h>
int main()
{
    int n; 
    scanf("%d",&n);              // test case 50 kojtese 2 ta 
    for(int i=1;i<=n;i++)
    
    
    {
        char st[55],sd[55];
        scanf("%s %s",st,sd);    // just ipAsu ccsit loop 1 , porer ey gpt k loop 2 te nibe 
        
        int len1=strlen(st);
        int len2=strlen(sd);
        
        int i=0,j=0;

        while(i<len1 && j<len2)
        {
           printf("%c%c",st[i],sd[j]);   // while repeat kore if nile seta akber e sesh hoi jai loop
           i++;
           j++;
        }
        while(i<len1)
        {
            printf("%c",st[i]);
            i++;
        }
        while(j<len2)
        {
            printf("%c",sd[j]);
            j++;
        }
        printf("\n");


    }
}