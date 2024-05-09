// write a program in c to count vowels in string

#include<stdio.h>
void main()
{
 int i,count;
 char s[100];
 printf("enter the string...\n");
 scanf("%s",s);
 for(i=0,count=0;s[i];i++)
 {
  if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='U')
  count++;
 }
 printf("no .of vowels in string %s = %d ",s,count);
 }
