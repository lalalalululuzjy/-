#include <iostream>
using namespace std;

bool zjy(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main3() {
    int num;

    cout << "������һ��������: ";
    cin >> num;

    if (zjy(num)) {
        cout << num << " ������" << endl;
    }
    else {
        cout << num << " ��������" << endl;
    }

    system("pause");

    return 0;
}