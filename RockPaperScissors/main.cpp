#include <iostream>
#include <cstdlib>
#include <ctime>

int randRange(int start, int end);
int solveBattle(int p1, int p2);
void printAction(int action);
int inputRange(int start, int end);

int main()
{
	int player = 0, computer = 0, result = 0;
	while (result == 0)
	{
		
		int var = randRange(1, 3);
		printf("rock: 1, paper: 2, scissors: 3 \n");
		computer = randRange(1, 3);
		player = inputRange(1, 3);

		printf("\nplayer does: ");
		printAction(player);
		printf("\ncomputer does: ");
		printAction(computer);

		result = solveBattle(player, computer);

		switch (result)
		{
		case 0:printf("\nTIE \n"); break;
		case 1:printf("\nplayer wins \n"); break;
		case 2:printf("\ncomputer wins \n"); break;
		}
	}
	getchar();

}


int solveBattle(int p1, int p2)
{
	if (p1 == p2) return 0;

	if ((p1 * p2) % 2 == 0)
		if (p2 < p1) return 1;
		else return 2;
	else
		if (p2 > p1) return 1;
		else return 2;
}

void printAction(int action)
{
	switch (action)
	{
	case 1:printf("rock"); break;
	case 2:printf("paper"); break;
	case 3:printf("scissors"); break;
	}
}

int randRange(int start, int end)
{
	return rand() % (end - start + 1) + start;
}

int inputRange(int start, int end)
{
	int input = 0;
	do {
		printf("input a number between %d and %d", start, end);
		scanf_s("%d", &input);
		getchar();
	} while (input < start || input > end);
	return input;
}