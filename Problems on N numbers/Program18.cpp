//  Accept N numbers from user and return the difference between largest and smallest number. 

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

	int Difference()
	{
		int i=0, iMin=0, iMax;
		iMin=Arr[0];
		iMax=Arr[0];

		for(i=1;i<iSize;i++)
		{
			if(Arr[i]<iMin)
			{
				iMin=Arr[i];
			}
			if(Arr[i]>iMax)
			{
				iMax=Arr[i];
			}
		}
		return iMax-iMin;
	}

	~Numbers()
	{
		delete []Arr; 
	}
};

int main()
{
	int iSize=0, iRet=0;
	cout<<"Enter the number of elements\n";
	cin>>iSize;

	Numbers obj(iSize);
	obj.Accept();
	iRet = obj.Difference();
	cout<<"Difference is : "<<iRet<<endl;
	
	return 0;
}