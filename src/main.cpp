#include <iostream>
#include "raylib.h"
#include "player.h"

int main()
{
	int screenHeight{ 600 };
	int screenWidth{ 1000 };
	SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_RESIZABLE);    // Window configuration flags
	InitWindow(screenWidth, screenHeight, "Dino Run");

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLACK);
		DrawRectangle(100, 100, 30, 30, WHITE);


		DrawFPS(10, 10);
		EndDrawing();
	}
	CloseWindow();

	return 0;
}