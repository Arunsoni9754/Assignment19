#include<stdio.h>
#include<string.h>
int main()
{
    char s[5][20];
    int i,n;
    printf("Enter any 5 strings ");
    for(i=0;i<=4;i++)
    {
        fgets(s[i],20,stdin);
    }
    for(i=0;i<=4;i++)
    { n=0;
        for(int j=0;s[i][j]!='\0';j++)
        {    
            if(s[i][j]=='a'||s[i][j]=='A'||s[i][j]=='e'||s[i][j]=='E'||s[i][j]=='i'||s[i][j]=='I'||s[i][j]=='o'||s[i][j]=='O'||s[i][j]=='u'||s[i][j]=='U')
            {
                n++;
            }    
        }    printf("The number of vowels in  %s is %d \n",s[i],n);
    }
}