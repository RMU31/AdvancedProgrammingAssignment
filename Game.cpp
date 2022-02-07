#include <iostream>
#include <time.h>
#include "Game.h"

using namespace std;

Game::Game() {

}
void Game::SetTerminate() {
    cout << "Terminating Game" << endl;
}

void Game::SetInitialise() {
    cout << "Initialising Game" << endl;
}

// runs the actual programme by invoking the functions in setInitialise.
void Game::Run() {

}

void Game::Add(GameComponent*) {

}

// calls the required functions that run the programme, after they inherit the functionality.
int main() {
    Game *game = new Game();  // Creates a dynamic instance of Game
    GameComponent gameComponent;
    game->SetInitialise();
    game->SetTerminate();
    game->Add(&gameComponent);
    game->Run();
    return 0;
}