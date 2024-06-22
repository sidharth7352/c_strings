// write a program to concatinate a string to another string

#include<stdio.h>
void main()
{
 int i,j,len;
 char s[20],d[20];
 printf("enter the string\n");
 scanf("%s",s);
 printf("enter the string to concatinate\n");
 scanf("%s",d);
 printf("before: s=%s d=%s\n",s,d);
 for(len=0;s[len];len++);
 for(i=0,j=len;s[i];i++,j++)
 s[j]=d[i];
 s[j]='\0';
 printf("after: s=%s",s);
 }
