#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	void *p;

	p = malloc(1024);

	int size1 = sizeof (*p);
	int size2 = sizeof (p);

	printf("BEFORE HEAP: %d\n", size1);
	printf("AFTER HEAP: %d\n", size2);

	return 0;
}
