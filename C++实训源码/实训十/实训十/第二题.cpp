#include <iostream>
using namespace std;

int main2() {
    const int size = 10; // �����С
    int num[size]; // ������������

    // ����10������
    cout << "������" << size << "��������" << endl;
    for (int i = 0; i < size; i++) {
        cout << "�������" << i + 1 << "��������";
        cin >> num[i];
    }

    // �������Ԫ��
    cout << "���������Ԫ��Ϊ��" << endl;
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    // ����洢�����
    cout << "����洢���������Ԫ�أ�" << endl;
    for (int i = size - 1; i >= 0; i--) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}