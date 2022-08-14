//  Accept N numbers from user and accept Range, Display all elements from that range    

#include<iostream>
using namespace std;

class Numbers
{
public:
	int iSize;
	int iStart;
	int iEnd;
	int *Arr;

	Numbers(int iSize, int iStart, int iEnd)
	{
		this->iSize = iSize;
		this->iStart = iStart;
		this->iEnd = iEnd;
		Arr = new int[this->iSize];
	}

	void Accept()
	{
		int i=0;
		cout<<"Enter the elements\n";
		for(i=0;i<iSize;i++)
		{
			cout<<"Enter "<<i+1<<" element : ";
			cin>>Arr[i];
		}
	}

	void Range()
	{
		int i=0;
		cout<<"Elemens are : \n";
		for(i=0;i<iSize;i++)
		{
			if((Arr[i]>=iStart) && (Arr[i]<=iEnd))
			{
				cout<<Arr[i]<<"\t";
			}
		}
	}

	~Numbers()
	{
		delete []Arr;
	}
};

int main()
{
	int iSize = 0, iStart = 0, iEnd = 0;
	
	cout<<"Enter the numbers of elements\n";
	cin>>iSize;

	cout<<"Enter the starting point\n";
	cin>>iStart;

	cout<<"Enter the ending point\n";
	cin>>iEnd;

	Numbers obj(iSize,iStart, iEnd);
	obj.Accept();
	obj.Range();

	return 0;
}