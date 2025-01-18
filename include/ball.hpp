#pragma once
#include <raylib.h>
class Ball {
public:
  Vector2 pos;
  Vector2 ppos;
  Vector2 vel;

  Ball(Vector2 pos);
  void update();
  void draw();
};
