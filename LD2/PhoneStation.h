#ifndef PHONESTATION_H
#define PHONESTATION_H

#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

// Клас "Абонент"
class Subscriber {
public:
    // Публічні поля
    std::string name;
    std::string phoneNumber;
    std::string packageType;

    // Публічні методи
    Subscriber(std::string, std::string, std::string, double, bool, int);
    void changePhoneNumber(const std::string&);
    void switchPackage(const std::string&);
    void updateStatus(bool);

    // Метод для запису в файл
    void saveToFile(const std::string&);
    // Метод для читання з файлу
    void loadFromFile(const std::string&);

    // Метод для сортування випадкових значень номера
    void randomAllocateAndSortPhoneNumbers();

private:
    // Приватні поля
    double balance;          // Баланс абонента
    bool isActive;           // Статус активності
    int devicesConnected;    // Кількість підключених пристроїв
    std::vector<int> numbers; // Динамічно виділена пам'ять для номерів

    // Приватні методи
    void blockSubscriber(); // Перевірка несплати і блокування абонента
    void disableService();  // Відключення послуг
    void resetDevices();    // Скидання пристроїв
};

#endif