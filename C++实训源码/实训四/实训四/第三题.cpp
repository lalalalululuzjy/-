#include <iostream>
using namespace std;

int main3() {
    while (1) {
        char zjy;

        cout << "������һ���ַ�: ";
        cin >> zjy;

        if (zjy >= 'A' && zjy <= 'Z') {
            char a = zjy + ('a' - 'A');
            cout << "ת������ַ�Ϊ: " << a << endl;
        }
        else if (zjy >= 'a' && zjy <= 'z') {
            char b = zjy - ('a' - 'A');
            cout << "ת������ַ�Ϊ: " << b << endl;
        }
        else {
            cout << "������Ĳ��Ǵ�Сд�ַ�" << endl;
        }
    }

    system("pause");

    return 0;
}