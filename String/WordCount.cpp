/*
Input : __Abc___p15___&__AB__
Output : 4
*/

#include<iostream>
using namespace std;

class NumberX
{
public:
	char str[30];

	void Accept()
	{
		cout<<"Enter string\n";
		scanf(" %[^\n]s",str);
	}

// Time complexity is O(N) where N is no of letters in string

	int WordCount()
	{
		char *ptr=str;
		int iCnt=0;
		while(*ptr!='\0')
		{
			if(*ptr==' ')
			{
				while((*ptr==' ') && (*ptr!='\0'))
				{
					ptr++;
				}
			}
		 	else
			{
				iCnt++;
				while((*ptr!=' ') && (*ptr!='\0'))
				{
					ptr++;
				}
			}
		}
		return iCnt;
	}
};

int main()
{
	int iRet = 0;
	NumberX obj;
	obj.Accept();
	iRet = obj.WordCount();
	cout<<"Word count is : "<<iRet<<"\n";
	
	return 0;
}
