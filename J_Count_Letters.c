
#include <stdio.h>
#include <string.h>

int main()
{
    static char st[10000001]; // static → safer for large input
    scanf("%s", st);

    int length = strlen(st);
    int fre[26] = {0};
    
    for(int i=0; i<length; i++)
    {
        fre[st[i]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(fre[i]>0)
        {
            printf("%c : %d\n", i+'a', fre[i]);
        }
    }

    return 0;
}



