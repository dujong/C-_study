#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

class Photon_Cannon {
	int hp, shield;
	int coord_x, coord_y;
	int damege;
	char* name;

public:
	Photon_Cannon(int x, int y);
	Photon_Cannon(int x, int y, char* cannnon_name);
	~Photon_Cannon();
	// 복사 생성자
	// T(const T& a);
	// 복사 생성자는 const를 활용하여 복사하는 용도로만 쓰는것이 적합
	// 생성 시에만 호출 가능
	Photon_Cannon(const Photon_Cannon& pc);

	void show_status();
};

Photon_Cannon::Photon_Cannon(int x, int y){
	std::cout << "생성자 호출 !" << std::endl;
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damege = 20;
	name = NULL;
}

Photon_Cannon::Photon_Cannon(int x, int y, char* cannnon_name)
{
	std::cout << "생성자 호출 !" << std::endl;
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damege = 20;
	name = new char[strlen(cannnon_name) + 1];
	strcpy(name, cannnon_name);
}

Photon_Cannon::~Photon_Cannon()
{
	if (name) delete[] name;
}

Photon_Cannon::Photon_Cannon(const Photon_Cannon& pc){
	std::cout << "복사 생성자 호출 !" << std::endl;
	hp = pc.hp;
	shield = pc.shield;
	coord_x = pc.coord_x;
	coord_y = pc.coord_y;
	damege = pc.damege;

	name = new char[strlen(pc.name) + 1];
	strcpy(name, pc.name);
}

void Photon_Cannon::show_status(){
	std::cout << "Photon Cannon " << std::endl;
	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "<< std::endl;
	std::cout << " HP : " << hp << std::endl;
}

int main()
{
	Photon_Cannon pc1(3, 3);
	Photon_Cannon pc2(pc1);
	Photon_Cannon pc3 = pc2;

	pc1.show_status();
	pc2.show_status();

	return 0;
}


