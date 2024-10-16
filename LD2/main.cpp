#include "PhoneStation.h"
#include <iostream>

int main() {
    // Статичні об'єкти
    Subscriber sub1("John", "12345", "Basic", 50.0, true, 2);
    Subscriber sub2("Alice", "54321", "Premium", 100.0, true, 3);
    Subscriber sub3("Bob", "11111", "Standard", 20.0, false, 1);
    Subscriber sub4("Carol", "22222", "Basic", 70.0, true, 4);
    Subscriber sub5("Eve", "33333", "Premium", 200.0, false, 0);

    // Динамічні об'єкти
    Subscriber* sub6 = new Subscriber("Frank", "66666", "Basic", 30.0, true, 1);
    Subscriber* sub7 = new Subscriber("Grace", "77777", "Standard", 50.0, false, 2);
    Subscriber* sub8 = new Subscriber("Hank", "88888", "Premium", 150.0, true, 3);
    Subscriber* sub9 = new Subscriber("Ivy", "99999", "Basic", 60.0, true, 2);
    Subscriber* sub10 = new Subscriber("Jack", "101010", "Standard", 40.0, false, 1);

    // Робота з методами
    sub1.changePhoneNumber("55555");
    sub2.switchPackage("Gold");
    sub3.updateStatus(true);

    // Робота з файлами
    sub4.saveToFile("subscriber4.txt");
    sub5.loadFromFile("subscriber4.txt");

    // Сортування номерів
    sub6->randomAllocateAndSortPhoneNumbers();

    // Вивільнення динамічної пам'яті
    delete sub6;
    delete sub7;
    delete sub8;
    delete sub9;
    delete sub10;

    return 0;
}
