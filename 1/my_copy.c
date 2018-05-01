#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
//#define NEW_FILE "copy.txt"
int main(int argc, char **argv[])
{
	FILE *file;
	FILE *newfile;
size_t ret;
int bytesWritten;
	//char filename = *argv[1];
	//char NEW_FILE = *argv[2];
	//char filename[60];
//printf("What file would you like to open?");
//scanf("%s", filename);
file = fopen(argv[1],"r");
 if (file == NULL)
    {
        printf("file non existant");
        return 0;
	}
newfile =fopen(argv[2],"w");
if (!argv[2])
	{
		printf("file creation was unsuccesful");
		return 0;
	}
char buffer[1024];
while((ret =fread(buffer,1, 1024,file)) > 0)
{
bytesWritten = fwrite(buffer,1, ret,newfile);
}
fclose(file);
fclose(newfile);
}