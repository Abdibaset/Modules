/* buggy.c --- program full of bugs 
 * 
 * 
 * Author: Abdibaset A. Bare
 * Created: Sun Jan 22 16:51:50 2023 (-0500)
 * Version: 1.0
 * 
 * Description: guide through how to use gdb debugging tool 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

void doublenumber(int *xp){
	int res;
	if (xp != NULL){ 
		res = (*xp) * 2;
	  *xp = res;
	}
}


int main(void){
	int x, *p;

	x = 10;
	p = (int *)malloc(sizeof(int));
	*p = x;
	doublenumber(&x);
	x += 20;
	doublenumber(&x);
	x += 30;

	doublenumber(NULL);
	printf("result: %d\n", x);
	exit(EXIT_SUCCESS);
}


