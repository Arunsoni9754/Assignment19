#include<stdio.h>
#include<string.h>
int main()
{
    char s[10][20];
    int i,j;
    printf("Engter the stroings ");
    for(i=0;i<5;i++)
    {
        fgets(s[i],20,stdin);
    }
for(i=0;i<5;i++)
    {
        printf("%s",s[i]);
    }
}