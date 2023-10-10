// binary search an array
#include <stdio.h>

int bin_search(int arr[20],int n);
void main()
{

	int n,arr[20];
	printf("Enter the array size:");
	scanf("%d",&n);						//input array size
		
	printf("Enter the elements as sorted:");
	for (int i=0;i<n;i++)				//input array elements
		scanf("%d",&arr[i]);
	
	bin_search(arr,n);
	
}
		
int bin_search(int arr[20],int n)									// binary search
{	
	int key;
	int begin=0;
	int end=n-1;
	int flag=0;
	
	printf("Enter the element to be searched:");
	scanf("%d",&key);
	
	while (begin<end)
	{
		int mid=(begin+end)/2;
	
		if(arr[mid]==key)
		{
			flag=1;
			printf("Element found at %d.\n",mid);
			break;
		}
		else if(key>arr[mid])
			begin=mid+1;
		else if(key<arr[mid])
			end=mid-1;	
		else
			flag=0;
	}		
	if (flag==0)
		printf("Element not found in array.");
			
return 0;
}

