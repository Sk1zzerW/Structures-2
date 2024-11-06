#include <iostream>
#include <string>
using namespace std;

struct Car {
    double length;
    double clearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    string color;
    string transmissionType;

    void setValues(double l, double c, double ev, double ep, double wd, const string& col, const string& trans) {
        length = l;
        clearance = c;
        engineVolume = ev;
        enginePower = ep;
        wheelDiameter = wd;
        color = col;
        transmissionType = trans;
    }

    void display() const {
        cout << "Длина " << length << " м\n";
        cout << "Клиренс " << clearance << " см\n";
        cout << "Объем двигателя " << engineVolume << " л\n";
        cout << "Мощность двигателя " << enginePower << " л.с.\n";
        cout << "Диаметр колес " << wheelDiameter << " дюймов\n";
        cout << "Цвет " << color << "\n";
        cout << "Тип коробки передач " << transmissionType << "\n";
    }
    bool findByColor(const string& col) const {
        return color == col;
    }
};

int main() {
    Car car;
    car.setValues(4.5, 15.5, 2.0, 150, 18, "Красный", "Автоматическая");

    cout << "Авто:\n";
    car.display();

    string searchColor;
    cout << "\nВаш цвет: ";
    cin >> searchColor;

    if (car.findByColor(searchColor)) {
        cout << "Автомобиль с цветом \"" << searchColor << "\" найден:\n";
        car.display();
    }
    else {
        cout << "Автомобиль с цветом \"" << searchColor << "\" не найден.\n";
    }

    return 0;
}
