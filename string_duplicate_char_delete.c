#include<stdio.h>
void main()
{
 int i,j,k;
 char s[10];
 printf("enter the string...\n");
 scanf("%s",s);
 printf("before duplicate element deletion :%s\n",s);
 for(i=0;s[i];i++)
 {
  for(j=i+1;s[j];j++)
  {
   if(s[i]==s[j])
   {
    for(k=j;s[k];k++)
    s[k]=s[k+1];
    j--;
    }
    }
    }
    printf("after duplicate element deletion : %s\n",s);
    }
