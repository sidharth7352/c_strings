//write a program to count ,in a string how many lowercase,uppercase,special characters,digits present count it

#include<stdio.h>
void main()
{
 int i,c=0,a=0,d=0,k=0;
 char s[25];
 printf("enter the string...\n");
 scanf("%s",s);
 for(i=0;s[i];i++)
 {
   if(s[i]>='a' & s[i]<='z')
   c++;
   
   if(s[i]>='A' & s[i]<='Z')
   a++;

   if(s[i]>='0' & s[i]<='9')
   d++;

   if(s[i]>=32 & s[i]<=47 || s[i]>=58 & s[i]<=64 || s[i]>=91 & s[i]<=96 || s[i]>=123 & s[i]<=126)
   k++;
  }
   printf("no.of lowercase letters=%d\n",c);
   printf("no.of uppercase letters=%d\n",a);
   printf("no.of digits=%d\n",d);
   printf("special charectors=%d\n",k);
   }
