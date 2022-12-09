
#include "stdint.h"
#include "stdio.h"
#include "stdbool.h"

int32_t main(void) {
	int32_t digits = 0;
	printf("girl, gi'me yo digits!\n");
	scanf_s("%d", &digits, 30);
	/* int32_t test1s = digits % 10;*/
	/* int32_t test10s = digits / 10;*/
	/* printf("%d %d\n", test1s, test10s);*/
	int32_t total = 0;
	while (digits >= 1){
		int32_t next_num = digits % 10;
		total += next_num;
		digits = digits / 10;
	}
	printf("%d", total);
}
