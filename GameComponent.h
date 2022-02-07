#include <iostream>
#include <time.h>


using namespace std;

class GameComponent {
private:
    GameComponent(int id, int instances);

    int id;
    static int instances;

public:
    GameComponent();
    void Update(const tm*);
};
