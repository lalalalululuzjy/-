#include <iostream>
using namespace std;

// �����������������Լ��
int max(int a, int b) {
    if (b == 0) {
        return a;
    }
    return max(b, a % b);
}

// ����������������С������
int min(int a, int b) {
    return (a * b) / max(a, b);
}

int main4() {
    while (1) {
        int num1, num2;

        cout << "��������������: " << endl;
        cin >> num1 >> num2;

        int zjy = max(num1, num2);
        int ZJY = min(num1, num2);

        cout << "���Լ����: " << zjy << endl;
        cout << "��С��������: " << ZJY << endl;
    }
    system("pause");

    return 0;
}