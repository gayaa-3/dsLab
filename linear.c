//linear search
#include <stdio.h>

int search(int arr[30],int n, int x);

void main()
{
	int size,arr[30],key;
	printf("Enter the array size: ");
	scanf("%d",&size);
	
	printf("Enter the elements: ");
	for (int i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Enter element to be searched: ");
	scanf("%d",&key);
	search(arr,size,key);
}

int search(int arr[30],int n, int x)
{
	int flag=0;
	for (int i=0;i<n;i++)
	{
		if (arr[i]==x)
		{
			printf("Element found at %d.\n",i+1);
			flag=1;
			break;
		}
	}
	if (flag==0)
		printf("Element not found in the array.");
}
