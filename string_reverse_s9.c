/* write a program to reverse all words in string
input : sidharth ashik
output : htrahdis kihsa */

#include<stdio.h>
void main()
{
	char s[30],t;
	int a,i=0,j=0,k;
	printf("enter the string...\n");
	scanf("%[^\n]",s);
	for(a=0;s[a];a++)
	{
		for( ;s[j];j++)
		{
			if(s[j]==' '||s[j]==0)
				break;
		}
		k=j;
		for(k=k-1;i<k;i++,k--)
		{
			t=s[i];
			s[i]=s[k];
			s[k]=t;
		}
		j++;
		i=j;
	}
	printf("%s\n",s);
}
