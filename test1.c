#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void pmem(void *p, unsigned int bytes)
{
	unsigned char *ptr;
	unsigned int i;

	ptr = (unsigned char *)p;
	for(i=0; i<bytes; i++)
	{
		if(i!=0)
		{
			printf(" ");
		}
		printf("%02x", *(ptr + i));
	}
	printf("\n");
}

int main()
{
	void *p;
	int i;

	for(i=0; i<10; i++)
	{
		p = malloc(1024 * (i +1));
		printf("%p\n", p);
		printf("bytes at %p:\n", (void*)((char *)p - 0x10));
		pmem((char *)p  - 0x10, 0x10);
	}
	return (EXIT_SUCCESS);
}
