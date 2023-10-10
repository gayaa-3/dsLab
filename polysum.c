/* to find the sum of two polynomials
here, we input the two polynomials and the sum into the same structure variable
*/

#include <stdio.h>


typedef struct {
	int coeff;
	int exp;	
}poly;

int add(poly p[],poly q[],poly sum[],int a,int b);
int read(poly p[],poly q[],poly sum[],int a,int b);

void main()
{	

	int a,b;
	printf("Enter the number of terms in the first polynomial: ");
	scanf("%d",&a);
	printf("Enter the number of terms in the second polynomial: ");
	scanf("%d",&b);
	
	poly p[a],q[b],sum[a+b];
	read(p,q,sum,a,b);
	add(p,q,sum,a,b);
	
} 

int read(poly p[],poly q[],poly sum[],int a,int b)
{
	
	printf("Enter the first polynomial\n");
	for(int i=0;i<a;i++)
	{
		printf("Enter the coefficient: ");
		scanf("%d",&p[i].coeff);
		printf("Enter the exponent: ");
		scanf("%d",&p[i].exp);
		
	}
	printf("Enter the second polynomial\n");
	for(int i=0;i<b;i++)
	{
		printf("Enter the coefficient: ");
		scanf("%d",&q[i].coeff);
		printf("Enter the exponent: ");
		scanf("%d",&q[i].exp);
	}

return 0;
}	

int add(poly p[],poly q[],poly sum[],int a,int b)
{
	int starta=0,finisha=a-1;
	int startb=0,finishb=b-1;
	int startc=0;
	
	while(starta<finisha && startb<finishb)
	{
		if (p[starta].exp==q[startb].exp)
		{
			sum[startc].coeff=p[starta].coeff+q[startb].coeff;
			sum[startc].exp=p[starta].exp;
			starta++,startb++,startc++;
		}
		if (p[starta].exp<q[startb].exp)
		{
			sum[startc].coeff=p[startb].coeff;
			sum[startc].exp=p[startb].exp;			
			startb++,startc++;
		}
		if (p[starta].exp>q[startb].exp)
		{
			sum[startc].coeff=p[starta].coeff;
			sum[startc].exp=p[starta].exp;			
			starta++,startc++;
		}
	}
	while(starta<finisha)
	{
		sum[startc].coeff=p[starta].coeff;
		sum[startc].exp=p[starta].exp;			
		starta++,startc++;		
	}
	while(startb<finishb)
	{	sum[startc].coeff=p[startb].coeff;
		sum[startc].exp=p[startb].exp;			
		startb++,startc++;
	}
	printf("The sum is: ");
	for(int i=0;i<startc;i++)
		printf("%d, %d \n",sum[i].coeff,sum[i].exp);
}

