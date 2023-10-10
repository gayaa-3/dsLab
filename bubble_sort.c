#include <stdio.h>

int  bubble_sort(int arr[20],int n);
int rec_bubble_sort(int arr[20],int n);
void main()
{
	int size,arr[20];
	printf("Enter the array size:");
	scanf("%d",&size);
	
	printf("Enter the array elements.");
	for (int i=0;i<size;i++)
		scanf("%d",&arr[i]);
	non_rec_bubble_sort(arr,size);
	rec_bubble_sort(arr,size);
}

int  bubble_sort(int arr[20],int n)
{
	int temp;										//sorting
	for (int i=0;i<n-1;i++)
	{	for (int j=0;j<n-i-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		printf("\nIntermediate array is: ");
		for ( int i=0;i<n;i++)
			printf("%d ",arr[i]);					
	}
	printf("\n");
}

int rec_bubble_sort(int arr[20],int n)
{
	
	return 0;
}

