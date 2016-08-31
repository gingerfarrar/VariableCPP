#include <iostream>
#include <cstring> //cstyle strings


struct vec2 { float x, y; };

struct Player
{
	char name[80];
	int health;
	int score;
	vec2 position, velocity;
};

struct rectangle
{
	vec2 corners[4];
	float x1, y1;
	float x2, y2;
	float x3, y3;
	float x4, y4;
	float rgb[3];
};

Player makeplayer()
{
	Player player;
	printf("enter name and score: \n");
	scanf_s("%s %d", &player.name, 80, &player.score);
	getchar();
	return player;
};

void printplayer(Player player)
{
	printf("%s %d \n", player.name, player.score);
}

void main()
{
	
	
	Player players[5];
	for (int i = 0; i < 5; ++i)
	{
		players[i] = makeplayer();
	}
	for (int i = 0; i < 5; ++i)
	{
		
		printplayer(players[i]);
	}

	system("pause");
}