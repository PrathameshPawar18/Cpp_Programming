/* Write application which accept two file names from user. Compare the contents of 
that two files. If contents are same then return true otherwise return false. 
Input : Demo.txt Hello.txt 
Output : Compare contents of Demo.txt and Hello.txt  
*/

#include<iostream>
#include<fcntl.h>

using namespace std;

class FileX
{
public:
	int fd1;
	int fd2;

	FileX(char Name1[], char Name2[])
	{
		fd1 = open(Name1,O_RDONLY);
		fd2 = open(Name2,O_RDONLY);
		if(fd1==-1 || fd2==-1)
		{
			cout<<"Unable to open file\n";
			exit(0);
		}
		else
		{
			cout<<"File opened successfully\n";
		}
	}

	bool Compare()
	{
		int ret1=0, ret2=0, Flag=0;
		char *Arr = new char[10];
		char *Brr = new char[10];

		while(((ret1=read(fd1,Arr,10))!=0) && ((ret2=read(fd2,Brr,10))!=0))
		{
			for(int i=0;i<ret1 || i<ret2;i++)
			{
				if(Arr[i]!=Brr[i])
				{
					Flag=1;
					break;
				}
			}
		}
		delete []Arr;
		delete []Brr;
		
		if(Flag==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	~FileX()
	{
		close(fd1);
		close(fd2);
	}
};

int main()
{
	char str1[30], str2[30];
	bool bRet=false;

	cout<<"Enter the name of first file\n";
	cin>>str1;
	cout<<"Enter the name of second file\n";
	cin>>str2;

	FileX obj(str1,str2);
	bRet = obj.Compare();

	if(bRet==true)
	{
		cout<<"Contents of both the files are same\n";
	}
	else
	{
		cout<<"Contents of both the files are not same\n";
	}
	
	return 0;
}