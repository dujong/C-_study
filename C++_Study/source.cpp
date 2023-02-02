//// C++_Study.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//#include <iostream>
//
//#include "header1.h"
//
//int change_val(int& p, int* q) {
//	p = 3;
//	*q = 33;
//	if (p == 3 && *q == 33)
//		std::cout << "change success" << std::endl;
//	else
//		std::cout << "change fail" << std::endl;
//
//	return 0;
//}
//
////�޸� �Ҵ� new ,delete
//typedef struct Animal {
//	char name[30];  // �̸�
//	int age;        // ����
//
//	int health;  // ü��
//	int food;    // ��θ� ����
//	int clean;   // ������ ����
//} Animal;
//
//void create_animal(Animal* animal) {
//	std::cout << "������ �̸�? ";
//	std::cin >> animal->name;
//
//	std::cout << "������ ����? ";
//	std::cin >> animal->age;
//
//	animal->health = 100;
//	animal->food = 100;
//	animal->clean = 100;
//}
//
//void play(Animal* animal) {
//	animal->health += 10;
//	animal->food -= 20;
//	animal->clean -= 30;
//}
//void one_day_pass(Animal* animal) {
//	// �Ϸ簡 ������
//	animal->health -= 10;
//	animal->food -= 30;
//	animal->clean -= 20;
//}
//void show_stat(Animal* animal) {
//	std::cout << animal->name << "�� ����" << std::endl;
//	std::cout << "ü��    : " << animal->health << std::endl;
//	std::cout << "��θ� : " << animal->food << std::endl;
//	std::cout << "û��    : " << animal->clean << std::endl;
//}
//
//int main_()
//{
//	//�����
//	std::cout << "========= ����� ========= " << std::endl;
//	int age;
//	std::cout << "Your age:";
//	std::cin >> age;
//	std::cout << "my age : " << age << std::endl;
//
//	//������
//	std::cout << "========= ������ ========= " << std::endl;
//	int number1 = 5;
//	int number2 = 10;
//	change_val(number1, &number2);
//	std::cout << number1 << std::endl;
//	std::cout << number2 << std::endl;
//
//	int& another_number = number1;
//	another_number = 10;
//	std::cout << "number:" << number1 << std::endl;
//	std::cout << "another_number:" << another_number << std::endl;
//
//	//�޸� �Ҵ� new ,delete
//	// T* pointer = new T;
//	// T* pointer = new T[size];
//	std::cout << "========= �޸� �Ҵ� new ,delete ========= " << std::endl;
//	int* p = new int;
//	*p = 10;
//
//	std::cout << *p << std::endl;
//	delete p;
//
//
//	Animal* list[10];
//	int animal_num = 0;
//
//	for (;;) {
//		std::cout << "1. ���� �߰��ϱ�" << std::endl;
//		std::cout << "2. ��� " << std::endl;
//		std::cout << "3. ���� ���� " << std::endl;
//
//		int input;
//		std::cin >> input;
//
//		switch (input) {
//			int play_with;
//		case 1:
//			list[animal_num] = new Animal;
//			create_animal(list[animal_num]);
//
//			animal_num++;
//			break;
//		case 2:
//			std::cout << "������ ���? : ";
//			std::cin >> play_with;
//
//			if (play_with < animal_num) play(list[play_with]);
//
//			break;
//
//		case 3:
//			std::cout << "������ ����? : ";
//			std::cin >> play_with;
//			if (play_with < animal_num) show_stat(list[play_with]);
//			break;
//		}
//
//		for (int i = 0; i != animal_num; i++) {
//			one_day_pass(list[i]);
//		}
//	}
//	for (int i = 0; i != animal_num; i++) {
//		delete list[i];
//	}
//
//
//	return 0;
//}