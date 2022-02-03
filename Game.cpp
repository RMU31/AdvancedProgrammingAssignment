#include <iostream>
#include <time.h>
#include "Game.h"
#include "DrawabaleGameComponent.h"  // since Drawable Game component will inherit the GameComponent class, it doesn't need to be included separately

using namespace std;

//function pointers for the initialise and terminate functions
 void SetInitialise() {
     cout << "Initialising Game" << endl;
 }
 void SetTerminate() {
     cout << "Terminating Game" << endl;
 }


int main() {
    void (*initialise)();
    initialise = SetInitialise;
    initialise();

    void (*terminate)();
    terminate = SetTerminate;
    terminate();
    cout << "Hello Krishna, can you see me?" << endl;
    return 0;
}