#pragma once
#include <utility>

class Animal;

class Family {
    protected:
        std::pair<Animal&, Animal&> adults;
        int timeNextBreed;
    public:
        virtual void nextBreed();
        virtual void breed();
        virtual void setNextBreed();
};
