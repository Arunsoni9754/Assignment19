#include<stdio.h>
#include<string.h>
void repeat(char s[]);
void repeat(char s[])
{
    int i,j,f=0;
    char a[50],c='\0';
    for(i=0;i<strlen(s);i++)
    {
        for(j=i+1;j<strlen(s)-1;j++)
        {
            if(s[i]==s[j]&&s[j]!=' '&&s[j]!=c)
            {
                s[j]=' ';
                c=s[i];
printf("%c",c);
            }
            
        }
    }

}
int main()
{
    char s[50];
    printf("Enter the string");
    gets(s);
    repeat(s);
     
}
