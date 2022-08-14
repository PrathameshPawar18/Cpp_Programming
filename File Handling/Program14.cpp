/*   Write application which accept file name from user and read all data from that file 
and display contents on screen. 
Input : Demo.txt 
Output : Display all data of file. 
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

	void ReadData()
	{
		char Arr[10];
		int ret=0;
		cout<<"Data from the file is :\n";
		while((ret=read(fd,Arr,10))!=0)
		{
			write(1,Arr,ret);
		}
	}

	~FileX()
	{
		close(fd);
	}
};

int main()
{
	char str[30];

	cout<<"Enter the name of the file\n";
	cin>>str;

	FileX obj(str);
	obj.ReadData();
	
	return 0;
}