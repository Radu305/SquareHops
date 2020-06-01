#include <iostream>
#include <raylib.h>

int main() {
	const int screenWidth = 900;
	const int screenHeight = 600;

	InitWindow(screenWidth, screenHeight, "Square Hops");

	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}
}
