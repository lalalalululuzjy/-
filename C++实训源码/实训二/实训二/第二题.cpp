#include <iostream>
#include <cmath>
using namespace std;

int main2() {
    while (1) {
        double x, y;

        cout << "������x��ֵ��";
        cin >> x;

        double zjy = sin(x * x);
        double ZJY = 1 - cos(x);

        if (fabs(ZJY) <= 1e-8) {
            cout << "������x����ֵ�����ڡ�" << endl;
        }
        else {
            y = zjy / ZJY;

            cout << "������x����ֵΪ��" << y << endl;
        }
    }

    system("pause");

    return 0;
}