#include <iostream>
#include <string>
using namespace std;

// ����ѧ���ṹ��
struct Student {
    int id;         // ѧ��
    string name;    // ����
    double english; // Ӣ��ɼ�
    double math;    // ��ѧ�ɼ�
    double physics; // ����ɼ�
};

int main3() {
    const int a = 10;
    Student stu[a];

    // ����ѧ������
    for (int i = 0; i < a; ++i) {
        cout << "������� " << i + 1 << " ��ѧ����ѧ��: ";
        cin >> stu[i].id;
        cout << "������� " << i + 1 << " ��ѧ��������: ";
        cin >> stu[i].name;
        cout << "������� " << i + 1 << " ��ѧ����Ӣ��ɼ�: ";
        cin >> stu[i].english;
        cout << "������� " << i + 1 << " ��ѧ������ѧ�ɼ�: ";
        cin >> stu[i].math;
        cout << "������� " << i + 1 << " ��ѧ��������ɼ�: ";
        cin >> stu[i].physics;
    }

    // ����3�ſγ̵���ƽ���ɼ�
    double e = 0, m = 0, p = 0;
    for (int i = 0; i < a; ++i) {
        e += stu[i].english;
        m += stu[i].math;
        p += stu[i].physics;
    }
    double E = e / a;
    double M = m / a;
    double P = p / a;

    // �ҳ���߷ֵ�ѧ��
    double max = (stu[0].english + stu[0].math + stu[0].physics) / 3;
    int b = 0;
    for (int i = 1; i < a; ++i) {
        double aver = (stu[i].english + stu[i].math + stu[i].physics) / 3;
        if (aver > max) {
            max = aver;
            b = i;
        }
    }

    // ������
    cout << "3�ſγ̵���ƽ���ɼ���" << endl;
    cout << "Ӣ��: " << E << endl;
    cout << "��ѧ: " << M << endl;
    cout << "����: " << P << endl;

    cout << "��߷�ѧ������Ϣ��" << endl;
    cout << "ѧ��: " << stu[b].id << endl;
    cout << "����: " << stu[b].name << endl;
    cout << "ƽ���ɼ�: " << max << endl;

    system("pause");

    return 0;
}