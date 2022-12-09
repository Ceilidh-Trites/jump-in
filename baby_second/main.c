#include "stdint.h"
#include "stdio.h"
#include "stdbool.h"

int32_t main(void) {
	int32_t fac;
	int32_t answer = 1;
	printf("what num you fac?\n");
	scanf("%d", &fac);
	for (int32_t i = 1; i <= fac; i++) {
		answer *= i;
	}
	printf("%d", answer);
	return 0;
}
