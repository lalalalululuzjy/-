#include <iostream>
#include <string>
using namespace std;

int main2() {
    string a;
    cout << "������һ����Сд��ĸ��ɵ��ַ�����";
    cin >> a;

    for (int i = 0; i < a.length(); i++) {
        char b = toupper(a[i]);
        cout << b;
    }

    cout << endl;

    return 0;
}