#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "�������ַ����ĸ�����";
    cin >> n;

    cin.ignore(); // ����ǰ��Ļس���

    cout << "������ " << n << " ���ַ�����" << endl;

    for (int i = 0; i < n; i++) {
        string a;
        getline(cin, a); // ��ȡһ������

        if (!a.empty() && a[0] == 'A') {
            cout << a << endl;
        }
    }

    return 0;
}