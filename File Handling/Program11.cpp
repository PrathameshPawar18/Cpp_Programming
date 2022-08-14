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
		fd=open(Name, O_WRONLY | O_APPEND);
		if(fd==-1)
		{
			cout<<"Unable to open file\n";
			exit(0);
		}
		else
		{
			cout<<"File successfully opened\n";
		}
	}

	void WriteData()
	{
		char str[] = "Pune";
		write(fd,str,4);
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
	obj.WriteData();
	return 0;
}
