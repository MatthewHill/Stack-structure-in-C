#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char* argv[])
{
	ssize_t bytesRead;
	ssize_t bytesWritten;
	int filedesc = open(argv[1], O_RDONLY);
	if(filedesc <0)
	{
		return 1;
	}
	int copy = open(argv[2], O_WRONLY | O_CREAT, 0644);
	if(copy <0)
	{
		return 1;
	}
	char buffer[1024];
while((bytesRead = read(filedesc, &buffer, 1024)) > 0)
{
 bytesWritten = write(copy, &buffer, (ssize_t) bytesRead);
	
}
	
	close(filedesc);
	close(copy);
	return (EXIT_SUCCESS);
}