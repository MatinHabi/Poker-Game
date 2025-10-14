#include <iostream>
#include "helper.h"
using namespace std;


int main(){
    Player *P1 = new Player("sorren");
    Helper::printBalance(P1);
}