//#include <iostream>
//#include <time.h>
#include "GameComponent.h"

class DrawableGameComponent :public GameComponent {
public:
    enum Direction {Left, Right, Up, Down};
    Direction direction;
    DrawableGameComponent(int x, int y, Direction);
    const int SCREEN_HEIGHT;
    const int SCREEN_WIDTH;
    void Update(const tm* eventTime);

// defined the private interface after public, because direction needs to be passed into the private functions.
private:
    void ChangeDirection(int x, int y, Direction);
    void Draw(int x, int y, Direction);
    int x;
    int y;

};
