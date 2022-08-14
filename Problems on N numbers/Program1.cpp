// Accept N numbers from user and return difference between summation 
//of even elements and summation of odd elements. 

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
		cout<<"Enter the elements\n";
		for(int i=0;i<iSize;i++)
		{
			cout<<"Enter "<<i+1<<" element : ";
			cin>>Arr[i];
		}
	}

	int Difference()
	{
		int iSumEven=0, iSumOdd=0, i=0;
		for(i=0;i<iSize;i++)
		{
			if((Arr[i]%2)==0)
			{
				iSumEven = iSumEven + Arr[i];
			}
			else
			{
				iSumOdd = iSumOdd + Arr[i];
			}
		}
		return iSumEven-iSumOdd;
	}

	~Numbers()
	{
		delete []Arr;
	}
};
int main()
{
	int iRet=0, iSize=0;
	cout<<"Enter the number of elements\n";
	cin>>iSize;

	Numbers obj(iSize);
	obj.Accept();
	iRet = obj.Difference();
	cout<<"Difference is : "<<iRet<<"\n";
	
	return 0;
}