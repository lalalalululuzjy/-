#include <iostream>
#include <iomanip> 
using namespace std;

int main2() {
    double r = 0.0, h = 0.0;

    cout << "������Բ�İ뾶��r����";
    cin >> r;

    cout << "������Բ���ĸߣ�h����";
    cin >> h;

    // ����Բ���ܳ�
    double zhouchang = 2 * 3.14159 * r;

    // ����Բ�����
    double mianji = 3.14159 * r * r;

    // ����Բ��ı����
    double biaomianji = 4 * 3.14159 * r * r;

    // ����Բ������
    double qiutiji = (4.0 / 3.0) * 3.14159 * r * r * r;

    // ����Բ�������
    double zhutiji = mianji * h;

    cout << fixed << setprecision(2);

    cout << "Բ���ܳ�Ϊ��" << zhouchang << endl;
    cout << "Բ�����Ϊ��" << mianji << endl;
    cout << "Բ��ı����Ϊ��" << biaomianji << endl;
    cout << "Բ������Ϊ��" << qiutiji << endl;
    cout << "Բ�������Ϊ��" << zhutiji << endl;

    system("pause");

    return 0;
}