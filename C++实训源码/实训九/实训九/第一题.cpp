#include <iostream>
using namespace std;

unsigned long long zjy(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * zjy(n - 1);
    }
}

int main1() {
    int num;

    cout << "������һ���Ǹ�����: ";
    cin >> num;

    if (num < 0) {
        cout << "����ӦΪ�Ǹ�����" << endl;
    } else {
        unsigned long long result = zjy(num);
        cout << "�׳� " << num << "! = " << result << endl;
    }

    system("pause");

    return 0;
}