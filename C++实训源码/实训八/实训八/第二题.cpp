#include <iostream>
using namespace std;

int max(int a, int b, int c) {
    int max = a;  // �����һ�������

    // �Ƚϵڶ������͵�һ�����Ĵ�С
    if (b > max) {
        max = b;
    }

    // �Ƚϵ��������͵�ǰ������Ĵ�С
    if (c > max) {
        max = c;
    }

    return max;
}

int main2() {
    int a, b, c;

    cout << "������������: "<<endl;
    cin >> a >> b >> c;

    int zjy = max(a, b, c);
    cout << "��������: " << zjy << endl;

    system("pause");

    return 0;
}