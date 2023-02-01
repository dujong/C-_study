#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

class Marine {
	int hp;					// 마린 체력
	int coord_x, coord_y;	// 마린 위치
	int damege;				// 공격력
	bool is_dead;			// 생존 여부
	char* name;				// 마린 이름
public:
	Marine();										// 기본 생성자
	Marine(int x, int y);							// x,y 좌표에 마린 생성
	Marine(int x, int y, const char* marine_name);	// 이름을 가진 마린 x,y 좌표에 생성
	~Marine();

	int attack();						// 데미지 return
	void be_attacked(int damege_earn);	// 입는 데미지
	void move(int x, int y);			// 새로운 위치

	void show_status();		// 상태를 보여줌

};

Marine::Marine() {
	hp = 50;
	coord_x = coord_y = 0;
	damege = 5;
	is_dead = false;
	name = NULL;
}

Marine::Marine(int x, int y) {
	hp = 50;
	coord_x = x;
	coord_y = y;
	damege = 5;
	is_dead = false;
	name = NULL;
}

Marine::Marine(int x, int y, const char* marine_name) {
	hp = 50;
	coord_x = x;
	coord_y = y;
	damege = 5;
	is_dead = false;
	name = new char[strlen(marine_name) + 1];
	strcpy(name, marine_name);
}

Marine::~Marine() {
	std::cout << name << " 의 소멸자 호출 ! " << std::endl;
	if (name != NULL) {
		delete[] name;
	}
}

int Marine::attack() { return damege; }

void Marine::be_attacked(int damege_earn) {
	hp -= damege_earn;
	if (hp <= 0)
		is_dead = true;
}

void Marine::move(int x, int y) {
	coord_x = x;
	coord_y = y;
}

void Marine::show_status() {
	std::cout << " *** Marine:" << name << " ***" << std::endl;
	std::cout << " Location : (" << coord_x << " , " << coord_y << ")" << std::endl;
	std::cout << "HP : " << hp << "\n" << std::endl;
}

int marine()
{
	Marine* marines[100];

	marines[0] = new Marine(2, 3, "Marine1");
	marines[1] = new Marine(3, 5, "Marine2");

	marines[0]->show_status();
	marines[1]->show_status();

	std::cout << std::endl << "마린 1 이 마린 2 를 공격!" << std::endl;
	marines[1]->be_attacked(marines[0]->attack());

	marines[0]->show_status();
	marines[1]->show_status();

	delete marines[0];
	delete marines[1];

	return 0;
}