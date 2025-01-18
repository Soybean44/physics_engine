#include "ball.hpp"
#include <raylib.h>
#include <raymath.h>

// Set g to 1000 since the screen is 1000 pixels high, meaning itll travel
// 1000 pixels in 1 second
constexpr float g = 1000.0f;
constexpr float dt = 1.0f / 60.0f;

Ball::Ball(Vector2 pos) : pos(pos) {
  vel = Vector2{0};
  ppos = Vector2{0};
}

void Ball::update() {
  // Update velocity
  vel.y += g * dt;

  // Set previous position
  ppos = pos;

  // Update position
  pos += vel * dt;

  // Satisfy all constraints
  // TODO:

  // Update velocity after position correction
  if (dt != 0)
    vel = (pos - ppos) / dt;
}

void Ball::draw() { DrawCircleV(pos, 25, RED); }
