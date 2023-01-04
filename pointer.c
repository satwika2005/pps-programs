#include<stdio.h>
void main()
{
	int *ptr,n,i,A[10],sum;
	printf("give n");
	scanf("%d",&n);
	ptr=&A[0];
	for(i=0;i<n;i++)
		scanf("%d",ptr++);
	ptr=&A[0];
	for(i=0;i<n;i++)
		printf("\n%d     ",*ptr++);
	sum=sum+*ptr;
	ptr++;
	printf("\n%d",sum);
}

