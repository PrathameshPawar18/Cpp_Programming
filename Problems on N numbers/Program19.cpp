// Accept N numbers from user and display all such numbers which contains 3 digits in it.  

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

	void Digits()
	{
		int i=0, iCnt=0, iDigits=0, Temp=0;
		cout<<"Number which contains 3 digits are : ";
		for(i=0;i<iSize;i++)
		{
			Temp =Arr[i];
			while(Arr[i]!=0)
			{
				iDigits = Arr[i]%10;
				iCnt++;
				Arr[i] = Arr[i]/10;
			}
			if(iCnt==3)
			{
				cout<<Temp<<" ";
			}
			iCnt=0;
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
	obj.Digits();
	return 0;
}