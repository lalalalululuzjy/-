#include <iostream>
#include <string>
using namespace std;

// �����ṹ������ Student
struct Student {
    int num;        // ѧ��
    string name;    // ����
    char sex;       // �Ա�'M'��ʾ�У�'F'��ʾŮ��
    int age;        // ����
    double score;   // �ɼ�
    string addr;    // ��ͥ���ڵ�
};

int main1() {
    // ����һ�� Student �ṹ���������ʼ��
    Student student1;
    student1.num = 131;            // ѧ��
    student1.name = "Zjy";       // ����
    student1.sex = 'M';            // �Ա�
    student1.age = 19;             // ����
    student1.score = 0;        // �ɼ�
    student1.addr = "PingYao";    // ��ͥ���ڵ�

    // ���ѧ����Ϣ
    cout << "ѧ��: " << student1.num << endl;
    cout << "����: " << student1.name << endl;
    cout << "�Ա�: " << student1.sex << endl;
    cout << "����: " << student1.age << endl;
    cout << "�ɼ�: " << student1.score << endl;
    cout << "��ͥ���ڵ�: " << student1.addr << endl;

    system("pause");

    return 0;
}