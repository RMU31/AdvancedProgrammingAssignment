#include <iostream>
#include <time.h>
#include "Game.h"
#include "DrawabaleGameComponent.h"  // since Drawable Game component will inherit the GameComponent class, it doesn't need to be included separately

using namespace std;

class Game::Game() {

};

int main() {
    cout << "Hello Krishna, can you see me?" << endl;
    return 0;
}