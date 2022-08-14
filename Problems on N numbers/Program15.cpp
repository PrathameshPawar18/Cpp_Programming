//  Accept N numbers from user and return product of all odd elements.    

#include<iostream>
using namespace std;

class Numbers
{
public:
	int iSize;
	int *Arr;

	Numbers(int iSize)
	{
		this->iSize = iSize;
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

	int Product()
	{
		int i=0, iMult=1, iFlag=0;
		for(i=0;i<iSize;i++)
		{
			if((Arr[i]%2)!=0) 
			{
				iMult = iMult*Arr[i];
			}
			if(Arr[i]==1)
			{
				iFlag=1;
			}
		}
		if(iMult>1)
		{
			return iMult;
		}
		else if(iFlag==1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	~Numbers()
	{
		delete []Arr;
	}
};

int main()
{
	int iSize = 0, iRet=0;
	
	cout<<"Enter the numbers of elements\n";
	cin>>iSize;

	Numbers obj(iSize);
	obj.Accept();
	iRet = obj.Product();
	cout<<"Product of all odd elements is "<<iRet<<endl;

	return 0;
}