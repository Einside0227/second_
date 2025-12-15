#include "Magician.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname) {
    job_name = "마법사";
    cout << "* 마법사로 전직하였습니다." << endl;
    HP = 60;
}

void Magician::attack() {
    cout << "* 지팡이를 휘두른다" << endl;
}