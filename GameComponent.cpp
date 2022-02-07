#include <iostream>

#include "GameComponent.h"

// define the constructor
GameComponent::GameComponent(void) {
   int id=0;
};

GameComponent::GameComponent(int id, int instances):id(id) {
    instances++;
}

// records the number of instances of the object being created.
int GameComponent::instances = 0;


//define the Update function and what it's mean to do
void GameComponent::Update(const tm *) {
    time_t rawtime;
    struct tm* eventTime;
    char buffer[32];
    time(&rawtime);
    eventTime = localtime(&rawtime);
    GameComponent gameObj;
    gameObj.id = gameObj.instances;
    cout << gameObj.id << endl;
}