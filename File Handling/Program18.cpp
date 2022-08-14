/*   Write application which accept file name and one character from user. Count the 
frequency of that character in file. 
Input : Demo.txt 
 M 
Output : Count occurrence of M in Demo.txt 
*/

#include<iostream>
#include<fcntl.h>

using namespace std;

class FileX
{
public:
	int fd;

	FileX(char Name[])
	{
		fd = open(Name,O_RDONLY);
		if(fd==-1)
		{
			cout<<"Unable to open file\n";
			exit(0);
		}
		else
		{
			cout<<"File opened successfully\n";
		}
	}

	int Frequency(char ch)
	{
		int iCnt=0, ret=0;
		char Arr[10];

		while((ret=read(fd,Arr,10))!=0)
		{
			for(int i=0;i<ret;i++)
			{
				if(Arr[i]==ch)
				{
					iCnt++;
				}
			}
		}

		return iCnt;
	}

	~FileX()
	{
		close(fd);
	}
};

int main()
{
	char str[30], ch='\0';
	int iRet=0;

	cout<<"Enter the name of the file\n";
	cin>>str;

	cout<<"Enter character to search\n";
	cin>>ch;

	FileX obj(str);
	iRet = obj.Frequency(ch);
	cout<<"Frequency of "<<ch<<" is "<<iRet<<"\n";

	return 0;
}
