# 🎮 전직 시스템과 전투 시스템

두 번째 실습 과제를 풀어보았습니다!

## 사용한 기술
<img alt="C++" src ="https://img.shields.io/badge/C++-00599C.svg?&style=for-the-badge&logo=cplusplus&logoColor=White"/>

## 1️⃣ 필수 기능
- Player라는 기본 클래스를 정의 합니다.
    - Player 클래스에는 `attack()`이라는 순수 가상 함수를 포함합니다.
        - `attack()` 함수는 무기를 휘두르기만 하는 기본적인 공격 함수입니다.
- Player 클래스를 상속받아 다양한 직업 클래스를 생성합니다.
    - 예) Warrior, Magician, Thief, Archer
        - 각 직업 클래스에서 `attack()`함수를 **재정의**(오버라이딩)하여 해당 직업의 공격을 출력하면 됩니다!
- 메인 함수에서 Player 타입의 포인터를 선언하고, 해당하는 번호를 입력하면 (1. 전사 2. 마법사 3. 도적 4. 궁수)  Warrior, Magician, Thief, Archer 중 해당하는 직업을 할당해줍니다. → 이후 Player는 `attack()` 함수를 호출하여 공격합니다.
- 전체적인 구조는 아래와 같습니다.
<img width="741" height="539" alt="Image" src="https://github.com/user-attachments/assets/2d17c47b-6183-4804-995d-09b42b727250" />

## 📁 디랙토리 구조
```
JobChange/
│
├── main.cpp               // 메인 실행 파일
├── Player.h               // Player 클래스 정의
├── Player.cpp             // Player 클래스 구현
├── Warrior.h              // Warrior 클래스 정의
├── Warrior.cpp            // Warrior 클래스 구현
├── Magician.h             // Magician 클래스 정의
├── Magician.cpp           // Magician 클래스 구현
├── Thief.h                // Thief 클래스 정의
├── Thief.cpp              // Thief 클래스 구현
├── Archer.h               // Archer 클래스 정의
├── Archer.cpp             // Archer 클래스 구현
```

## 2️⃣ 도전 기능
아래 코드 스니펫을 보고 Monster 클래스를 작성해주세요!
```
class Monster {
public:
		// Monster 생성자
		// - 몬스터의 이름을 매개변수로 입력 받습니다.
		// - 모든 몬스터는 HP 10, 공격력 30, 방어력 10, 스피드 10의 능력치를 가집니다.
    Monster(string name);
    
    // 몬스터의 공격 함수
    // - 플레이어 객체 포인터를 매개변수로 입력 받습니다.
    // - 몬스터의 공격력-플레이어의 방어력을 데미지로 정의합니다.
    // - 만약 위에서 계산한 데미지가 0 이하라면, 데미지를 1로 정의합니다.
    // - 플레이어에게 얼마나 데미지를 입혔는지 출력합니다.
    // - 플레이어 객체의 getHP 함수를 실행하여 플레이어HP-데미지 계산 결과를
    // - 플레이어 객체의 setHP 매개변수로 전달합니다.
    // - 플레이어가 생존했을 경우, 플레이어의 남은 HP를 출력합니다.
    void attack(Player* player);
    
    // 몬스터의 속성값을 리턴하는 get 함수
    string getName();
    int getHP();
    int getPower();
    int getDefence();
    int getSpeed();
		
		// 몬스터의 속성값을 정의하는 set 함수
    void setName(string name);
    void setHP(int HP);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);

protected:
    string name; // 몬스터의 이름
    int HP; // 몬스터의 HP
    int power; // 몬스터의 공격력
    int defence; // 몬스터의 방어력
    int speed; // 몬스터의 스피드
};
```
