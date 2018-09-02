#include <stdio.h>

int main(void) {
	int p, a;
	fscanf(stdin,"%i",&p);
	fscanf(stdin,"%i",&a);
	fprintf(stdout,"%i\n",(p-a));
	return 0;
}
