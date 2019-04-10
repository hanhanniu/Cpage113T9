#include<stdio.h>
int main(){
	int a,count=0,b[5],i=0;
	printf("enter a number which not more than five positive integer:");
	scanf("%d",&a);
	while(a!=0)
	{
		count++;
		b[i++]=a%10;
		a=a/10;
	}
	printf("this is a %d positive integer.\n",count);
	printf("ÕıĞòÊä³ö£º");
	for(i=count-1;i>=0;i--)
	    printf("%d",b[i]);
	printf("\nÄæĞòÊä³ö:");
	for(i=0;i<count;i++)
		printf("%d",b[i]);
}
