//write a program to merge 2 strings to another string
// i/p: s1:"1234" s2:"ABCD" o/p:"1A2B3C4D"


#include<stdio.h>
void main()
{
char s1[10],s2[10],s3[10];
int i,j,k;
printf("enter the first string\n");
scanf("%s",s1);
printf("enter the second string\n");
scanf("%s",s2);
  for(k=0;s3[k],s1[i],s2[j];k++)
  {
   if(k%2==0)
   {
     s3[k]=s1[i];
     i++;
     }
     else
     {
      s3[k]=s2[j];
      j++;
      }
      }
      printf("string after merge=%s\n",s3);
      }


