#include <iostream>
#include <ctime>
#include <random>
using namespace std;


int main(){
    srand(time(NULL));
    int randi;
    for(int i = 0 ; i < 20 ; i++){
        randi  = rand() % 52;
        cout << randi << " ";
    }
    cout << "\n";
}