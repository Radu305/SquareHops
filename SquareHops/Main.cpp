#include <iostream>
#include <raylib.h>

int main() {
	const int screenWidth = 1200;
	const int screenHeight = 900;

	InitWindow(screenWidth, screenHeight, "Square Hops");

	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}
}
