/* Write application which accept file name from user and display size of file. 
Input : Demo.txt 
Output : File size is 56 bytes 
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

	int Size()
	{
		int offset=0;
		offset = lseek(fd, 0, SEEK_END);
		return offset;
	}

	~FileX()
	{
		close(fd);
	}
};

int main()
{
	char str[30];
	int ret=0;

	cout<<"Enter the name of the file\n";
	cin>>str;

	FileX obj(str);
	ret = obj.Size();
	cout<<"Size of file is : "<<ret<<"\n";
	
	return 0;
}

