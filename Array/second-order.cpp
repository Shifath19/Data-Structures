#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;


int secondSmallest(int arr[], int n){
	
	int i,small=arr[0],Ssmall;
	Ssmall=INT_MAX;
	for(i=1;i<n;i++)
	{
		if(arr[i]<small)
		{
			Ssmall=small;
			small=arr[i];	
		}
		else if(arr[i] != small && arr[i]<Ssmall)
		{
			Ssmall=arr[i];
		}
	}
	
	return Ssmall;
}

int secondLargest(int arr[], int n)
{
	int Slar=-1;
	int lar=arr[0];
	
		for(int i=1;i<n;i++)
	{
		if(arr[i]>lar)
		{
			Slar=lar;
			lar=arr[i];
		}
		
		else if(arr[i]<lar && arr[i]>Slar)
			Slar=arr[i];
	}
	
	return Slar;
}

int secondOrderEle(int arr[],int n)
{
	int ssmallest=secondSmallest(arr, n);
	int slargest=secondLargest(arr, n);
	
	cout<<ssmallest<<"  "<<slargest;
	return 0;
}

int main()
{
	int arr[]={2,11,5,8,9,6};
	secondOrderEle(arr,6);
	

  return 0;
}
