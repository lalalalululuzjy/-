#include <iostream>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    string gender;

public:
    void setData(int id, string sname, string sgender) {
        studentID = id;
        name = sname;
        gender = sgender;
    }

    void display() {
        cout << "ѧ��: " << studentID << endl;
        cout << "����: " << name << endl;
        cout << "�Ա�: " << gender << endl;
    }
};

int main2() {
    Student stuOne;

    int id;
    string name, gender;

    cout << "������ѧ����ѧ��: ";
    cin >> id;
    cout << "������ѧ��������: ";
    cin >> name;
    cout << "������ѧ�����Ա�: ";
    cin >> gender;

    stuOne.setData(id, name, gender);
    stuOne.display();

    system("pause");

    return 0;
}