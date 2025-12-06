#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="cse",b[10]="ADITYA";
	printf("a string length is:%d\n",strlen(a));
    printf("a string reverse is:%s\n",strrev(a));
	printf("a string in uppercase is:%\n",strupr(a));
	printf("a string in lower case is:%\n",strlwr(b));
	printf("a string copy is:%s\n",strcpy(a,b));
	printf("a string concat is:%\n",strcat(a,b));
	printf("a string compare is:%\n",strcmp(a,b));
	return 0;
}
