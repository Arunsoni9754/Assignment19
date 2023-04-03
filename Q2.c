#include<stdio.h>
#include<string.h>
int main()
{   char s[10][20],temp[20][20];
    int i,n;
    printf("Enter any 5 strings ");
    for(i=0;i<=5;i++)
    {
        fgets(s[i],20,stdin);
    }
for(i=0;i<=5;i++)
{
for(int j=i;j<5;j++)
    {
        if(s[j][0]>s[j+1][0])
        {
                strcpy(temp[i], s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], temp[i]);
        }
    }
}
for(i=0;i<=5;i++)
    {
        printf("%s",s[i]);
    }
}