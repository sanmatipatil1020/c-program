#include<stdio.h>
#include<time.h>

int linearSearch(int arr[],int size,int target)
{
	int i,j;
	
	for(i=0;i<size;i++)
	{
		if(arr[i] == target)
			return i;
	}
	return -1;
}

void timeCalc()
{
	int size=1000;
	int arr[size];
	int n[21];
	int i,j;
	double t;
	clock_t t1,t2;
	
	for(i=1;i<=size;i++)
	{
		arr[i-1]=i;
	}
	
	for(i=1;i<=10;i++)
	{
		n[i] = 10*(i-1);
		n[10+i] = 100*i;
	}
	

	for(j=1;j<=20;j++)
	{
		t1=clock();
		for(i=1;i<=500000;i++)
		{
			linearSearch(arr,0,n[j]);
		}
    	t2=clock();
		t=t2-t1;
		t=t/500000;
		printf("%d\t%0.10lf\n",n[j],t);		
	}

	

}

int main()
{
	timeCalc();
	return 0;
}
