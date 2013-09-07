#include<stdio.h>
#include<string.h>


inline void fastRead(int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}

int main()
{
    int t,i=0,flag = 0,len;
    char c[60];
    fastRead(&t);
    while(t--)
    {
        flag = 0;
        scanf("%s",c);
        len = strlen(c);
       for(i=0;i<len;i++)
        {
            if(c[i] == 'D')
            {
                flag =1;
            }
            
        }
        if(flag)
            printf("You shall not pass!\n");
        else
            printf("Possible\n");
        
    }
    return 0;
}