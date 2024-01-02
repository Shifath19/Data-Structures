#include<iostream>

using namespace std;
class Array
{
	private:
		int *A;
		int size;
		int length;
	public:
		Array()
		{
			 size=10;
			 length=0;
			 A=new int[size];
		 }
		 Array(int sz,int l)
		 {
			 size=sz;
			 length=l;
			 A=new int[size];
			 for(int i=0;i<l;i++)
				{
					cout << "Enter element " << i + 1 << ": ";
			        cin >> A[i];
					
				}
		}
		
		void Sduplicates();
		void duplicates();
		
		~Array()
		 {
			 delete []A;
		 }
};

void Array::duplicates()
{
	int h=A[0];
	int i;
	for(i=1;i<length;i++)
		{
			if(A[i]>h)
			h=A[i];
		}
	int H[h];
	for(i=0;i<h;i++)
		{
			H[i]=0;
		}
	
	for(i=0;i<length;i++)
		{
			H[A[i]]++;
		}
		
	
	for(i=0;i<h;i++)
		{
			if(H[i]>1)
			cout<<i<<" is repeated "<<H[i]<<" times"<<endl;
		}
}
void Array::Sduplicates()
{
	int lastDup=0;
	int i;
	for(i=0;i<length;i++)
	{
		if(A[i]==A[i+1] && A[i]!=lastDup)
		{
			cout<<A[i]<<" is duplicate"<<endl;
			lastDup=A[i];
		}
	}
	
	for(i=0;i<length-1;i++)
	{
		if(A[i]==A[i+1])
		{
			int j=i+1;
			while(A[i]==A[j]){
				j++;
			}
			cout<<A[i]<<" is repeating "<<j-i<<" times"<<endl;
			i=j-1;
		}
	}
}


int main()
{
	int sz,l;
	cout<<"enter the array size"<<endl;
	cin>>sz;
	cout<<"enter the array length"<<endl;
	cin>>l;
	Array arr(sz,l);	
	//arr.Sduplicates();
	arr.duplicates();
		
	

  return 0;
}



