// Include the Raylib header file
#include <raylib.h>

int main() {
  // Initialize the Raylib window
  InitWindow(800, 600, "Hello World");

  // Main game loop
  while (!WindowShouldClose()) {
    // Begin drawing
    BeginDrawing();

    // Clear the background
    ClearBackground(RAYWHITE);

    // Draw the "Hello World" text
    DrawText("Hello, World!", 300, 280, 40, LIGHTGRAY);

    // End drawing
    EndDrawing();
  }

  // Close the window
  CloseWindow();

  return 0;
}
