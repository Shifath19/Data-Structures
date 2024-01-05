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
		
		void MaxMin();
		
		~Array()
		 {
			 delete []A;
		 }
};

void Array::MaxMin()
{
	int max,min,i;
	max=A[0];
	min=A[0];
	
	for(i=1;i<length;i++)
	{
		if(A[i]>max)
			max=A[i];
		else if(A[i]<min)
			min=A[i];
	}
	
	cout<<"min="<<min<<"   max="<<max<<endl;
}

int main()
{
	int sz,l;
	cout<<"enter the array size"<<endl;
	cin>>sz;
	cout<<"enter the array length"<<endl;
	cin>>l;
	Array arr(sz,l);
	
	arr.MaxMin();	
	
		
	

  return 0;

}






