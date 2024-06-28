#include<stdio.h>
void main()
{
 int i,j;
 char s[20],s1[10];
 printf("enter the string...\n");
 scanf("%s",s);
 printf("enter the substring...\n");
 scanf("%s",s1);
 for(i=0;s[i];i++)
 {
  if(s1[0]==s[i])
  {
   for(j=1;s1[j];j++)
   {
    if(s1[j]!=s[i+j])
    break;
   }
   if(s1[j]=='\0')
   {
    printf("substring is present...\n");
    return;
    }
    }
    }
    printf("substring is not present...\n");
    }
