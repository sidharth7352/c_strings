//write a program to insert one extra character in a given string at given index position

#include<stdio.h>
void main()
{
 int i,j,index,length;
 char s[10],c;
printf("enter the string...\n");
scanf("%s",s);
printf("enter the character that we want to insert..\n");
scanf(" %c",&c);
printf("enter the position that we want to insert...\n");
scanf("%d",&index);
printf("befor insertion : %s\n",s);
for(length=0;s[length];length++);
for(i=length;i>=index;i--)
s[i+1]=s[i];
s[index]=c;
printf("after insertion : %s\n",s);
}



