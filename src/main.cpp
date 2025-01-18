// Include the Raylib header file
#include "ball.hpp"
#include <raylib.h>

int main() {
  InitWindow(1000, 1000, "Hello World");

  Ball ball(Vector2{500.0f, 500.0f});

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    // Update

    ball.update();

    // Draw

    BeginDrawing();

    ClearBackground(SKYBLUE);

    ball.draw();

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
