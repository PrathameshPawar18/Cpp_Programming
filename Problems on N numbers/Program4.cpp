// Accept N numbers from user and display all such elements which are divisible by 3 and 5.

#include<iostream>
using namespace std;

class Numbers
{
public:
	int *Arr;
	int iSize;

	Numbers(int iNo)
	{
		iSize = iNo;
		Arr = new int[iSize];
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

	void Divisible()
	{
		int i=0;
		cout<<"Elements which are divisible by 3 and 5 are : \n";
		for(i=0;i<iSize;i++)
		{
			if( ((Arr[i]%3)==0) && ((Arr[i]%5)==0))
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
	int iSize=0;
	cout<<"Enter the number of elements\n";
	cin>>iSize;

	Numbers obj(iSize);
	obj.Accept();
	obj.Divisible();
	
	return 0;
}