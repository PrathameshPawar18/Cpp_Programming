// Accept N numbers from user and display summation of digits of each number.  

#include<iostream>
using namespace std;

class Numbers
{
public:
	int iSize;
	int *Arr;

	Numbers(int iNo)
	{
		iSize = iNo;
		Arr = new int[iSize];
	}

	void Accept()
	{
		int i=0;
		cout<<"Enter the elements:\n";
		for(i=0;i<iSize;i++)
		{
			cout<<"Enter "<<i+1<<" element : ";
			cin>>Arr[i];
		}
	}

	void DigitSum()
	{
		int i=0, iSum=0, iDigit=0;
		cout<<"Summation of digits of ech number is : \n";
		for(i=0;i<iSize;i++)
		{
			while(Arr[i]!=0)
			{
				iDigit = Arr[i]%10;
				iSum = iSum+iDigit;
				Arr[i] = Arr[i]/10;
			}
			
			cout<<iSum<<" ";
			iSum=0;
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
	obj.DigitSum();
	return 0;
}