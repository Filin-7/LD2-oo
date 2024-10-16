#include "PhoneStation.h"
#include <iostream>

// Конструктор
Subscriber::Subscriber(std::string name, std::string phoneNumber, std::string packageType, double balance, bool isActive, int devicesConnected)
    : name(name), phoneNumber(phoneNumber), packageType(packageType), balance(balance), isActive(isActive), devicesConnected(devicesConnected) {}

// Зміна номера телефону
void Subscriber::changePhoneNumber(const std::string& newNumber) {
    this->phoneNumber = newNumber;
    std::cout << "Phone number changed to " << phoneNumber << std::endl;
}

// Переключення пакету послуг
void Subscriber::switchPackage(const std::string& newPackage) {
    this->packageType = newPackage;
    std::cout << "Package switched to " << packageType << std::endl;
}

// Оновлення статусу підключення
void Subscriber::updateStatus(bool activeStatus) {
    this->isActive = activeStatus;
    std::string status = isActive ? "Active" : "Temporarily Disabled";
    std::cout << "Subscriber status updated to " << status << std::endl;
    if (!isActive) blockSubscriber();
}

// Метод блокування абонента
void Subscriber::blockSubscriber() {
    std::cout << "Subscriber is blocked due to unpaid balance." << std::endl;
    disableService();
}

// Відключення послуг
void Subscriber::disableService() {
    std::cout << "Services are temporarily disabled." << std::endl;
}

// Скидання пристроїв
void Subscriber::resetDevices() {
    this->devicesConnected = 0;
    std::cout << "All connected devices have been reset." << std::endl;
}

// Запис в файл
void Subscriber::saveToFile(const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << name << '\n' << phoneNumber << '\n' << packageType << '\n'
            << balance << '\n' << isActive << '\n' << devicesConnected << std::endl;
        outFile.close();
    }
}

// Читання з файлу
void Subscriber::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
        inFile >> name >> phoneNumber >> packageType >> balance >> isActive >> devicesConnected;
        inFile.close();
    }
}

// Метод для виділення пам'яті та сортування номерів
void Subscriber::randomAllocateAndSortPhoneNumbers() {
    numbers = { 123, 321, 456, 654, 789, 987 };
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Sorted phone numbers: ";
    for (const auto& num : numbers)
        std::cout << num << " ";
    std::cout << std::endl;
}
