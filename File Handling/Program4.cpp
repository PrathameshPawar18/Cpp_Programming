#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

class FileX
{
public:
	int fd;

	FileX(char Name[])  // FileX(char *Name)
	{
		fd=open(Name, O_RDONLY);
		if(fd==-1)
		{
			cout<<"Unable to open file\n";
		}
		else
		{
			cout<<"File successfully opened\n";
		}
	}

	void ReadData()
	{
		char Arr[20]={'\0'}; 
		read(fd, Arr, 10);
		cout<<Arr<<"\n";
	}

	~FileX()
	{
		close(fd);
	}
};

int main()
{
	char str[30];
	cout<<"Enter file name\n";
	cin>>str;
	FileX obj(str);
	obj.ReadData();
	return 0;
}
