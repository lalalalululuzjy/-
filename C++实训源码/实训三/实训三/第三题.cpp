#include <iostream>
using namespace std;

int main3() {
    while (1) {
        char ZJY, zjy;

        cout << "������һ����д��ĸ��";
        cin >> ZJY;

        // ��������Ƿ�Ϊ��д��ĸ
        if (ZJY >= 'A' && ZJY <= 'Z') {
            // ת��ΪСд
            zjy = ZJY + 32;
            cout << "��Ӧ��Сд��ĸΪ��" << zjy << endl;
        }
        else {
            cout << "������Ĳ��Ǵ�д��ĸ��" << endl;
        }
    }
    return 0;
}