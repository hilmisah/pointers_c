#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int *p;
	p = &a;
	a = 10;
	printf(" %d ", p);
	printf(" \n%d , ", *p);
	printf(" \n%d," , a);
	
	return 0;
}
