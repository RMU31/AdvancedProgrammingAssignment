#include <iostream>
#include "DrawabaleGameComponent.h" // Do not need to include the GameComponent in here since DrawableGameComponent inherits it.


using namespace std;

class Game {
private:
    int componentCount;
  GameComponent** components;
//    intialise;
//    terminate;
//    const int TICKS_1000MS;

public:
    void SetInitialise();
    void SetTerminate();
    void Run();
    void Add(GameComponent*);
    Game();
};