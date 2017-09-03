#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	if(argc != 3) {
		fprintf(stderr, "need exactly 2 hex numbers as arguments\n");
		return 1;
	}

	if(strlen(argv[1]) != strlen(argv[2])) {
		fprintf(stderr, "would be nice if args were same length\n");
		return 1;
	}

	char c[2];
	c[1] = '\x0';

	int a, b;
	for(int i=0; i<strlen(argv[1]); i++) {
		c[0] = argv[1][i];
		a = strtol(c, NULL, 16);
		c[0] = argv[2][i];
		b = strtol(c, NULL, 16);
		printf("%x", a ^ b);
	}
	printf("\n");

	return 0;
}
