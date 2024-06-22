//write a program to copy one string into another string
#include<stdio.h>
void main()
{
 int i;
 char s[20],d[20];
 printf("enter the string...\n");
 scanf("%s",s);
 printf("before:%s\n",d);
 for(i=0;s[i];i++)
 d[i]=s[i];
 d[i]='\0';
 printf("after:%s\n",d);
 }
