#include<stdio.h>
void main()
{
char s[10];
int i;
printf("enter the string....\n");
scanf("%s",s);
for(i=0;s[i];i++);
printf("length of %s=%d\n",s,i);
}
