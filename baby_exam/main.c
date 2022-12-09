#include "stdint.h"
#include "stdio.h"
#include "stdbool.h"

int main(void) {
	printf("I am not a phishing scam, gimme ur credit card. \n");
	uint64_t cardnum;
	scanf_s("%llu", &cardnum, 30);
	uint64_t cardchop = cardnum;
	int32_t oddnums = 0;
	int32_t evennums = 0;
	for (int32_t i = 1; i <= 16; i++) {
		if (i % 2 != 0) {
			oddnums += cardchop % 10;
			cardchop /= 10;
			printf("oddnums %d, cardchop %llu\n", oddnums, cardchop);
		} else {
			int32_t even_greater_10_check = (cardchop % 10) * 2;
			if (even_greater_10_check / 10 != 0) {
				evennums += (even_greater_10_check % 10) + (even_greater_10_check / 10);
			} else {
				evennums += even_greater_10_check;
			}
			cardchop = cardchop / 10;
		}
	}
	int32_t final_divide_10_check = oddnums + evennums;
	if (final_divide_10_check % 10 == 0) {
		printf("your card is at least a little valid, I will now steal your money.\n");
	} else {
		printf("you lied about your card num, try again.\n");
	}
}
