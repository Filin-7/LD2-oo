#ifndef PHONESTATION_H
#define PHONESTATION_H

#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

// ���� "�������"
class Subscriber {
public:
    // ������ ����
    std::string name;
    std::string phoneNumber;
    std::string packageType;

    // ������ ������
    Subscriber(std::string, std::string, std::string, double, bool, int);
    void changePhoneNumber(const std::string&);
    void switchPackage(const std::string&);
    void updateStatus(bool);

    // ����� ��� ������ � ����
    void saveToFile(const std::string&);
    // ����� ��� ������� � �����
    void loadFromFile(const std::string&);

    // ����� ��� ���������� ���������� ������� ������
    void randomAllocateAndSortPhoneNumbers();

private:
    // ������� ����
    double balance;          // ������ ��������
    bool isActive;           // ������ ���������
    int devicesConnected;    // ʳ������ ���������� ��������
    std::vector<int> numbers; // �������� ������� ���'��� ��� ������

    // ������� ������
    void blockSubscriber(); // �������� �������� � ���������� ��������
    void disableService();  // ³��������� ������
    void resetDevices();    // �������� ��������
};

#endif