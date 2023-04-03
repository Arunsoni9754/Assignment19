#include<stdio.h>
#include<string.h>
int main()
{   char s[10][20],temp[50];
    int i,j,f=0;
    printf("Enter any 5 strings ");
    for(i=0;i<=1;i++)
    {
        scanf("%s",s[i]);
    }
    printf("Type the string to be searched ");
    
scanf("%s",temp);
    
    for(i=0;i<=1;i++)
    {
        if(strcmp(temp,s[i])==0)
        {
    printf("FOund");  
    return 0;
   }
   
        
    }
printf("Not found");
}    