#include <iostream>
using namespace std;

int main1() {
    const int size = 10; // �����С
    int scores[size]; // ������������
    int highest = 0; // ��߷ֳ�ʼ��Ϊ0
    int lowest = 100; // ��ͷֳ�ʼ��Ϊ100
    double sum = 0.0; // �����ܺͳ�ʼ��Ϊ0.0

    cout << "������10��������" << endl;

    // ����10������
    for (int i = 0; i < size; i++) {
        cout << "������� " << i + 1 << " ��������";
        cin >> scores[i];

        // ������߷ֺ���ͷ�
        if (scores[i] > highest) {
            highest = scores[i];
        }
        if (scores[i] < lowest) {
            lowest = scores[i];
        }

        sum += scores[i]; // �ۼӷ���
    }

    double average = sum / size; // ֱ��ִ�и���������

    cout << "��߷�: " << highest << endl;
    cout << "��ͷ�: " << lowest << endl;
    cout << "ƽ����: " << average << endl;

    return 0;
}