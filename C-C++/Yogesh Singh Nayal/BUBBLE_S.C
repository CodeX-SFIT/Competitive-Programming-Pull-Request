#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,A[10],n,temp;
	clrscr();
	printf("Enter no. of array elements: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[i])
			{
				temp=A[j];
				A[j]=A[i];
				A[i]=temp;
			}
		}
	}
	printf("sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	getch();
}