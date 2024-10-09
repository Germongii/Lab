#include "Weapon.h"
#include <iostream>
using namespace std;

// ����������� � �����������
Weapon::Weapon(string name, int damage, double weight) {
    this->name = name;
    this->damage = damage;
    this->weight = weight;
}

// ����������� ��� ����������, �������� �������� �� ���������
Weapon::Weapon() {
    name = "Basic Sword";
    damage = 10;
    weight = 2.5;
}

// ����� ��� ������ ���������� �� ������
void Weapon::displayInfo() const {
    cout << "Weapon Name: " << name << endl;
    cout << "Damage: " << damage << endl;
    cout << "Weight: " << weight << " kg" << endl;
}

// ������������� ����� ��� ��������� ���������� ���� �������� ������� � ��������������� ����
double Weapon::getTotalWeight(double additionalWeight) const {
    return this->weight + additionalWeight;
}

// ����� ��� ��������� ���������� ���� �������� ������� � ����������� �������, ��������� ������������� �����
double Weapon::getTotalWeight(const Weapon& other) const {
    return getTotalWeight(other.weight);
}

// ����������
Weapon::~Weapon() {
    cout << "Destroying Weapon: " << name << endl;
}
