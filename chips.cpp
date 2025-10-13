#include "chips.h"

Chips::Chips(): colour(nullptr), value(0){}

Chips::Chips(std::string c){
    if(c != "black" || c != "green" || c != "blue" || c != "red" || c != "white"){
        colour = nullptr;
        throw(101); //invalid colour
        return;
    }

    if(c == "black"){
        value = 100;
        return;
    }else if (c == "green"){
        value = 25;
        return;
    }else if (c == "blue"){
        value = 10;
        return;
    }else if(c == "red"){
        value = 5;
        return;
    }else if(c == "white"){
        value = 1;
        return;
    }else{
        throw(102); //failed to find value
    }
}