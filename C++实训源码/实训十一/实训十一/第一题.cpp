#include <iostream>
using namespace std;

int main1() {
    int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int sum1 = 0; // ���Խ�����Ԫ��֮��
    int sum2 = 0; // ���Խ�����Ԫ��֮��

    // �������Խ��ߺͷ��Խ����ϵ�Ԫ��֮��
    for (int i = 0; i < 3; i++) {
        sum1 += a[i][i]; // ���Խ���Ԫ��֮��
        sum2 += a[i][2 - i]; // ���Խ���Ԫ��֮��
    }

    // ������
    cout << "���Խ�����Ԫ��֮��: " << sum1 << endl;
    cout << "���Խ�����Ԫ��֮��: " << sum2 << endl;

    system("pause");

    return 0;
}