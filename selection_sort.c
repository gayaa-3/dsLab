# include <stdio.h>

int selection_sort(int arr[20],int n);
void main()
{
	int size,arr[20];
	printf("Enter the array size:");	//array size input
	scanf("%d",&size);
	
	printf("Enter the array elements:");
	for(int i=0;i<size;i++)		//array elements input
		scanf("%d",&arr[i]);
	selection_sort(arr,size);		//function call
}


int selection_sort(int arr[20],int n)
{
	//printf("Entered.\n");
	int temp;
	for (int i=0;i<n-1;i++)
	{
		int min=i;
		for (int j=i+1;j<n;j++)
		{
			if (arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
		
			printf("\nIntermediate array is:");
			for (int x=0;x<n;x++)
				printf("%d ",arr[x]);
			
		//printf("\n");				
	}
}

/*

1)
	linear search
	Enter the array size:
	5
	Enter the elements as sorted:11 22 33 44 55
	Enter the element to be searched:44
	Element found at 3.

2)mec@ccf-41:~/csb26$ gcc bubble_sort.c
	mec@ccf-41:~/csb26$ ./a.out
	Enter the array size:6
	Enter the array elements.66 33 55 44 22 88

	Intermediate array is: 33 55 44 22 66 88 
	Intermediate array is: 33 44 22 55 66 88 
	Intermediate array is: 33 22 44 55 66 88 
	Intermediate array is: 22 33 44 55 66 88 
	Intermediate array is: 22 33 44 55 66 88 

3)mec@ccf-41:~/csb26$ gcc linear.c
	mec@ccf-41:~/csb26$ ./a.out
	Enter the array size: 5
	Enter the elements: 11 22 33 44 55
	Enter element to be searched: 44
	Element found at 4.

4)gcc selecton_sort.c
	mec@ccf-41:~/csb26$ ./a.out
	Enter the array size:5
	Enter the array elements:2 6 3 5 4

	Intermediate array is:2 6 3 5 4 
	Intermediate array is:2 3 6 5 4 
	Intermediate array is:2 3 4 5 6 
	Intermediate array is:2 3 4 5 6
	*/

