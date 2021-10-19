#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int i,j;
	float f,g;
	scanf("%d %d %f", &i, &j, &f, &g);
	printf("%d %D\n%.1f %f", i+j, i-j, f+g, f-g);
}
