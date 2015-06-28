#ifndef LAYER_H
#define LAYER_H

#include "Tile.h"
#include <string>

using namespace std;

class Layer
{
    public:
        Layer(string name);

        string getName(){return name;}
        char** getBlueprint(){return blueprint;}
        void setBlueprint(char** blueprint) {this->blueprint = blueprint;}

        void setShown(bool s) {shown = s;}
        bool isShown() {return shown;}

    private:
        string name;

        char** blueprint;

        bool shown;
};

#endif // LAYER_H