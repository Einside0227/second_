#include <iostream>
#include "Player.h"
#include "Monster.h"
using namespace std;

Monster::Monster(string name)
	: name(name),
	HP(10),
	power(30),
	defence(10),
	speed(10) {}

void Monster::attack(Player* player) {
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
string Monster::getName() {
	return name;
}
int Monster::getHP() {
	return HP;
}
int Monster::getPower() {
	return power;
}
int Monster::getDefence() {
	return defence;
}
int Monster::getSpeed() {
	return speed;
}
// set 함수
void Monster::setName(string name) {
	this->name = name;
}
void Monster::setHP(int HP) {
	this->HP = HP;
}
void Monster::setPower(int power) {
	this->power = power;
}
void Monster::setDefence(int defence) {
	this->defence = defence;
}
void Monster::setSpeed(int speed) {
	this->speed = speed;
}
