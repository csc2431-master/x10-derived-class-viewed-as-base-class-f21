#include <iostream>
using std::cout;

#include "Bat.h"
#include "RoadRunner.h"

void DisplayAnimal(const Animal& animal);

int main() {
    Bat bat("bat");
    RoadRunner roadRunner("RoadRunner");

    cout << "*** Query Bat object as a Bat" << '\n';
    cout << bat << "\n";
    bat.Eat();
    bat.Walk();
    bat.Fly();
    bat.EchoLocate();

    cout << "*** Query Bat object as an Animal" << '\n';
    DisplayAnimal(bat);

    cout << "*** Query RoadRunner object as a RoadRunner" << '\n';
    cout << roadRunner << "\n";
    roadRunner.Eat();
    roadRunner.Walk();
    roadRunner.Fly();

    cout << "*** Query RoadRunner object as an Animal" << '\n';
    DisplayAnimal(roadRunner);
    return 0;
}

void DisplayAnimal(const Animal& creature) {
    cout << creature << "\n";
    creature.Eat();
    creature.Walk();
    creature.Fly();
}
