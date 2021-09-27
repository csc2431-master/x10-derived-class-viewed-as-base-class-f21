//
// Created by Max Benson on 9/26/2021.
//

#ifndef ROADRUNNER_H
#define ROADRUNNER_H

#include "animal.h"

class RoadRunner : public Animal {
public:
    RoadRunner(const string& name)
            : Animal(name) {
    }
    // This is a NON-VIRTUAL method of Animal - usually a BAD IDEA to redefine like this!
    void Walk() const{
        cout << "   RoadRunner::Walk() [not virtual in Animal]: I don't walk, I RUN!" << '\n';
    }
};
#endif //ROADRUNNER_H
