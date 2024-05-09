//write a program in c to count number of words in a given string

#include<stdio.h>
void main()
{
 int i,c;
 char s[200];
 printf("enter the string...\n");
 gets(s);
 for(i=0,c=1;s[i]!='\0';i++)
 {
  if(s[i]==' ')
  c++;
 }
 printf("number of words of string %s = %d",s,c);
}
