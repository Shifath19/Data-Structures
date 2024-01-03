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
		
		void Ksum(int k);
		
		~Array()
		 {
			 delete []A;
		 }
};

void Array::Ksum(int k){
	
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
		if(H[k-A[i]]!=0){
			
			cout<<k-A[i]<<" + "<<A[i]<<" = "<<k<<endl;
		}

		H[A[i]]++;
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
	//arr.duplicates();
	arr.Ksum(10);
		
	

  return 0;







