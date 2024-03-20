#include<stdio.h>
void main()
{
char s[10];
int i,length;
printf("enter the string...\n");
scanf("%s",s);
for(length=0;s[length];length++);
for(i=length-1;i>=0;i--)
printf("%c",s[i]);
printf("\n");
}
