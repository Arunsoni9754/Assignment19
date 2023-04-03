#include<stdio.h>
#include<string.h>
int main()
{   char s[10][20];
    int i,j,k;
    printf("Enter any 5 strings ");
    for(i=0;i<=5;i++)
    {
    fgets(s[i],20,stdin);
    }
    printf("The odd one strings are:\n");
    for(i=0;i<=5;i++)
    {k=0;
        for(j=0;s[i][j]!='\0';j++)
        {
            if(s[i][j]=='@')
            {
                k++;
            }

        }
        if(k==0)
        {
         printf("%s",s[i]);   
        }
        
    }
}