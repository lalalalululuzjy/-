#include <iostream>
using namespace std;

// ö������ weekday
enum weekday {
    Sun,     // ������
    Mon,     // ����һ
    Tue,     // ���ڶ�
    Wed,     // ������
    Thu,     // ������
    Fri,     // ������
    Sat      // ������
};

int main2() {
    // ���岢��ֵ workday ����
    weekday workday = Mon;

    // ��� workday ��ֵ
    cout << "workday ��ֵΪ: " << workday << endl;

    system("pause");

    return 0;
}