#ifndef WEAPON_H
#define WEAPON_H

#include <string>
using namespace std;

class Weapon {
private:
    string name;     // �������� ������
    int damage;      // ��������� ����
    double weight;   // ��� ������

public:
    // ������������
    Weapon(string name, int damage, double weight);
    Weapon();

    // ������
    void displayInfo() const;
    double getTotalWeight(const Weapon& other) const;
    double getTotalWeight(double additionalWeight) const;

    // ����������
    ~Weapon();
};

#endif // WEAPON_H
