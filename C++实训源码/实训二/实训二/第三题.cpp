#include <iostream>
using namespace std;

int main3() {
    int zjy;
    cout << "��������Ҫ����Ľ�������100Ԫ����";
    cin >> zjy;

    if (zjy <= 0 || zjy > 100) {
        cout << "��������Ч��������һ����Ч�Ľ�1��100֮�䣩��\n";
        return 1;
    }

    int wushi = 0, ershi = 0, shi = 0, wu = 0, yi = 0;

    while (zjy >= 50) {
        zjy -= 50;
        wushi++;
    }

    while (zjy >= 20) {
        zjy -= 20;
        ershi++;
    }

    while (zjy >= 10) {
        zjy -= 10;
        shi++;
    }

    while (zjy >= 5) {
        zjy -= 5;
        wu++;
    }

    yi = zjy;

    cout << "50Ԫֽ�ң�" << wushi << " ��\n";
    cout << "20Ԫֽ�ң�" << ershi << " ��\n";
    cout << "10Ԫֽ�ң�" << shi << " ��\n";
    cout << "5Ԫֽ�ң�" << wu << " ��\n";
    cout << "1Ԫֽ�ң�" << yi << " ��\n";

    system("pause");

    return 0;
}