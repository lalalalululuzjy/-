#include <iostream>
using namespace std;

int main2() {
    int numPeaches = 1; // ��10��ʣ�µ�������

    // �ӵ�9�쵹�Ƶ���1��
    for (int day = 9; day >= 1; day--) {
        numPeaches = 2 * (numPeaches + 1);
    }

    cout << "��һ�칲ժ�� " << numPeaches << " ������" << endl;

    system("pause");

    return 0;
}