#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	int A[10]={3,7,4,9,12,6,1,11,2,10};
	int i,h=0;
	for(i=0;i<10;i++)
	{
		if(A[i]>h)
			h=A[i];		
	}
	
	int H[h];
	for(i=0;i<h;i++)
	{
		H[i]=0;
	}
	
	for(i=0;i<10;i++)
	{
		H[A[i]]++;
	}
	
	cout<<"missing elements are"<<endl;
	
	for(i=1;i<h;i++)
	{
		if(H[i]==0)
			cout<<i<<endl;
	}

  return 0;
}
