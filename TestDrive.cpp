#include <iostream>
#include <time.h>

using namespace std;

int main() {
    // string name;
    // int age;


    // cout << "Hello to the World, Please enter your name!";
    // cin >> name;


    // cout << "hello, " << name << endl;

    time_t rawtime;
    struct tm* timeinfo;
    char buffer[32];
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    // localtime(&timeinfo, &natime);
    // asctime(buffer, 32, &timeinfo);
    strftime(buffer, 32, "Time is %I:%M%p.", timeinfo);

    cout << "The current time is: " << buffer << endl;
    cout << timeinfo->tm_hour << ":" << timeinfo->tm_min << ":" << timeinfo->tm_sec << endl;

}
