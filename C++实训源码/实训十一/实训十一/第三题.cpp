#include <iostream>
using namespace std;

int main3() {
    int a[3][3] = { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9} };

    bool zjy = false;
    int b, c;

    // �ҳ����㣨������ڣ�
    for (int i = 0; i < 3; i++) {
        int d = a[i][0];
        int e = 0;

        // �ҳ���ǰ�е���Сֵ
        for (int j = 1; j < 3; j++) {
            if (a[i][j] < d) {
                d = a[i][j];
            }
        }

        // �ҳ���ǰ�е����ֵ��������
        for (int j = 1; j < 3; j++) {
            if (a[j][i] > a[e][i]) {
                e = j;
            }
        }

        // �ж��Ƿ�Ϊ����
        if (d == a[i][e]) {
            zjy = true;
            b = i;
            c = e;
            break;
        }
    }

    // ������
    if (zjy) {
        cout << "������ڣ�λ��Ϊ��" << "(" << b << ", " << c << ")" << endl;
    } else {
        cout << "���㲻���ڡ�" << endl;
    }

    system("pause");

    return 0;
}