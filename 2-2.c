#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

	void *p;
	int i = 0;


	while(1) {
		p = malloc(512);
		printf("[%d] %p\n", i, p);
		sleep(1);
		i++;
	}
	return 0;
}


	
