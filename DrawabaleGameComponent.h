#include <iostream>
#include "GameComponent.h"
#include <time.h>

using namespace std;

class DrawableGameComponent {
    void ChangeDirection();
    void Draw();
    int x;
    int y;
public:
    DrawableGameComponent(int x, int y);
    const int SCREEN_HEIGHT;
    const int SCREEN_WIDTH;
    void Update( const tm* eventTime);
    enum Direction {Left, Right, Up, Down};
};