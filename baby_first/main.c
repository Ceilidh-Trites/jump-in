#include "stdint.h"
#include "stdio.h"
#include "stdbool.h"

int32_t main(void) {
	int32_t height = -1;
	
	while (height > 8 || height < 0) {
		printf("How high do you want the pyramid master?\n");
		scanf("%d", &height);
	}
	for (int32_t i = 0; i <= height; i++) {
		for (int32_t j = 0; j < height - i; j++) {
			printf(" "); //spaces b4 the py
		}
		for (int32_t k = 0; k <= i; k++) {
			printf("#"); //pyramid blocks left
		}
		printf(" "); //chimeny
		
		for (int32_t k = 0; k <= i; k++) {
			printf("#"); //pyramid blocks right
		}
		for (int32_t j = 0; j < height - i; j++) {
			printf(" "); //spaces b4 the py
		}
		printf("\n");
	}
	
	
	return 0;
}
