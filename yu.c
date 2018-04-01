#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd;
	char s[6];
	
	char buf[]="12";
	
	//fd = open("test.txt", O_RDONLY);
	
	//fd = open("test.txt",O_CREAT|O_RDWR);
	
	fd = open("test.txt",O_RDWR|O_CREAT|O_APPEND);
	//read(fd, s, 6);
	
	write(fd, buf, 3);
	
	close(fd);
	
	//printf("%s\n", s);
	
	return 0;
}
