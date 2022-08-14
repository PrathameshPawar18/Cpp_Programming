/* Write application which accept two file names from user. Append the contents of 
first file at the end of second file. 
Input : Demo.txt Hello.txt 
Output : Concat contents of Demo.txt at the end of Hello.txt 
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
		fd2 = open(Name2,O_WRONLY);
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

	void Append()
	{
		char Arr[10];
		int ret=0;

		lseek(fd2,1,SEEK_END);
		while((ret=read(fd1,Arr,10))!=0)
		{
			write(fd2,Arr,ret);
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

	cout<<"Enter the name of first file\n";
	cin>>str1;
	cout<<"Enter the name of second file\n";
	cin>>str2;

	FileX obj(str1,str2);
	obj.Append();
	
	return 0;
}