#include<stdio.h>
void main()
{
char s[10];
int i,length,j,t;
printf("enter the string...\n");
scanf("%s",s);
for(length=0;s[length];length++);
printf("before reverse string=%s\n",s);
for(i=0,j=length-1;i<j;i++,j--)
{
t=s[i];
s[i]=s[j];
s[j]=t;
}
printf("after reverse string=%s\n",s);
}
