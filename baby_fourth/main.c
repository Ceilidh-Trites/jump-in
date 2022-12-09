#include "stdint.h"
#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"


int32_t main(void) {
	printf("gimme an int to initialize psudo randomness, I didnt want to include time.\n");
	int32_t randomizer;
	scanf_s("%d", &randomizer, 30);
	srand(randomizer);
	int32_t random = rand() % 100 + 1;
	printf("now make a guess between 1-100.\n");
	int32_t guess;
	scanf_s("%d", &guess, 30);
	while (guess != random) {
		if (guess == 1337) {
			printf("shhh dont tell them you cheated, its %d.\n", random);
		} else if (guess < 1 || guess > 100) {
			printf("I said BETWEEN 1-100.\n");
		} else if (guess < random) {
			printf("too low, guess again.\n");
		} else if (guess > random) {
			printf("too high maw fukka.\n");
		}
		scanf_s("%d", &guess, 30);
	}
	printf("Hurray you got it!\n");
}
