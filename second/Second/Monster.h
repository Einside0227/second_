#pragma once
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

class Monster {
public:
    Monster(string name)
        : name(name),
        HP(10),
        power(30),
        defence(10),
        speed(10) {}

    void attack(Player* player) {
        if (player == nullptr) {
            cout << "공격 대상이 없습니다." << endl;
            return;
        }
        // 데미지 = 몬스터 공격력 - 플레이어 방어력
        int damage = power - player->getDefence();
        if (damage <= 0)
            damage = 1;  // 최소 1 데미지

        cout << name << " 가(이) " << player->getNickname() << "에게 " << damage << "의 데미지를 입혔습니다." << endl;

        int newHP = player->getHP() - damage;
        if (newHP < 0) newHP = 0;

        player->setHP(newHP);

        if (newHP > 0) {
            cout << "플레이어 남은 HP: " << newHP << endl;
        }
        else {
            cout << "플레이어가 쓰러졌습니다!" << endl;
        }
    }

    // get 함수
    string getName() {
        return name;
    }
    int getHP() {
        return HP;
    }
    int getPower() {
        return power;
    }
    int getDefence() {
        return defence;
    }
    int getSpeed() {
        return speed;
    }
    // set 함수
    void setName(string name) {
        this->name = name;
    }
    void setHP(int HP) {
        this->HP = HP;
    }
    void setPower(int power) {
        this->power = power;
    }
    void setDefence(int defence) {
        this->defence = defence;
    }
    void setSpeed(int speed) {
        this->speed = speed;
    }

protected:
    string name; // 몬스터의 이름
    int HP; // 몬스터의 HP
    int power; // 몬스터의 공격력
    int defence; // 몬스터의 방어력
    int speed; // 몬스터의 스피드
};