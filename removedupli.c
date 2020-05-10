#include<stdio.h>
#include<stdlib.h>
int duplicate(int *a,int n)
{
	int i,j,pos;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j] && i!=j)
			{	
				printf("\nDuplicate element is:%d",a[i]);
				pos=i;
				
				a[i]=-1;
			}
		}
	}
	printf("\npos--%d",pos);
	printf("\nafter removing duplicate element array is:\n");
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
		
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int main()
{
	int a[20],i,n,pos;
	printf("Total number of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	duplicate(a,n);
	
}
/*OUTPUT
Total number of elements: 6
Enter array elements:1 4 6 3 7 6

Array is:
1	4	6	3	7	6	
Duplicate element is:6
pos--2
after removing duplicate element array is:
1	4	3	7	6	
*/
