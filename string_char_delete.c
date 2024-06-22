//write a program to delete specific character from the given string..

#include<stdio.h>
void main()
{
 int i,j;
 char s[10],ch;
 printf("enter the string...\n");
 scanf("%s",s);
 printf("enter the character that we want to delete...\n");
 scanf(" %c",&ch);
 printf("before deleting=%s\n",s);
 for(i=0;s[i];i++)
 {
  if(s[i]==ch)
  {
  
   for(j=i;s[j];j++)
   s[j]=s[j+1];
   i--;
   }
   }
   printf("after deleting=%s\n",s);
   }

