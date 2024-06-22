//write a c program to compare two strings
#include<stdio.h>
void main()
{
 int i;
 char s1[10],s2[10];
 printf("enter the strings..\n");
 scanf("%s%s",s1,s2);
 for(i=0;s1[i];i++)
 {
  if(s1[i]!=s2[i])
  break;
  }
  if(s1[i]==s2[i])
  printf("two strings are equal...\n");
  else 
  printf("strings are not equal...\n");
  }
