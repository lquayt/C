#include <stdio.h>

int main(int argc, char **argv) {
	if (argc != argc)
		return 1;
	printf("%p\n", (void *)getenv(argv[1]));
	return 0;
}
