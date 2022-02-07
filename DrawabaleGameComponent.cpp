#include <iostream>
#include <time.h>

#include "DrawabaleGameComponent.h"

// Do not need namespace std here, since the parent class GameComponent already has it defined and this component inherits from it.

// This class will have a constructor, x & y set to 0.
// Display ID and also the time of invocation
// Invokes the Draw() member function- displays the current direction, with x and y values (same line)
// Invokes the ChangeDirection member function- assigns a new random direction to the direction data member.
// CONDITION: it should be different to current direction.
//x range: 0...80
// y range: 0...20
// should not exceed screen size

DrawableGameComponent::DrawableGameComponent(int x, int y, Direction= Right) : SCREEN_HEIGHT(80), SCREEN_WIDTH(20), x(x), y(y) {}

void DrawableGameComponent::Update(const tm *eventTime) {
    GameComponent gameComponent;
    cout << gameComponent.id << endl;
    cout << gameComponent.*tm << endl;
}

void DrawableGameComponent::Draw(int x, int y, Direction) {
    this->x = x;
    this->y = y;
}