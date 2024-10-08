﻿#include <iostream>
#include <string>
using namespace std;

class Gun {
private:
    string name;
    int damage;
    int weight;
public:
    Gun(string name, int damage, int weight) {
        this->name = name;
        this->damage = damage;
        this->weight = weight;
    }
    Gun() {
        name = "uzi";
        damage = 12;
        weight = 50;
    }
    bool testWeight(int maxWeight) {
        if (weight >= maxWeight) {
            return false;
        }
        else {
            return true;
        }

    }
    int getTotalWeight(double additionalWeight) const {
        return this->weight + additionalWeight;
    }

    int getTotalWeight(const Gun& other) const {
        return getTotalWeight(other.weight);
    }
    ~Gun() {
        cout << name << endl;
        cout << damage << endl;
        cout << weight << endl;
        cout << "Class deleting" << endl;
    }

};

#include <iostream>

int main()
{
    Gun* dynamicGun = new Gun("test2", 100, 10);
    Gun customGun("test", 76, 20);
    delete dynamicGun;
    return 0;
}

