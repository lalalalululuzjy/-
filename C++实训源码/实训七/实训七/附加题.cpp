#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // ʹ�õ�ǰʱ����Ϊ���������

    int num; // ��Ŀ����
    int min;    // ���ַ�Χ����Сֵ
    int max;    // ���ַ�Χ�����ֵ
    int score = 0;   // �û��÷�

    cout << "��ӭʹ����ѧ������ϰϵͳ!" << endl;

    // ��ȡ�û�������Ŀ���������ַ�Χ
    cout << "��������Ŀ����: ";
    cin >> num;

    cout << "���������ַ�Χ����Сֵ: ";
    cin >> min;

    cout << "���������ַ�Χ�����ֵ: ";
    cin >> max;

    // ���ɲ��ش���Ŀ
    for (int i = 1; i <= num; i++) {
        int num1 = rand() % (max - min + 1) + min;
        int num2 = rand() % (max - min + 1) + min;
        int zjy = num1 + num2;
        int ZJY;

        cout << "���� #" << i << ": " << num1 << " + " << num2 << " = ";
        cin >> ZJY;

        if (ZJY == zjy) {
            cout << "�ش���ȷ!" << endl;
            score++;
        }
        else {
            cout << "�ش������ȷ���� " << zjy << endl;
        }
    }

    // ����ɼ�
    cout << "��ϰ��������ĵ÷���: " << score << "/" << num << endl;

    return 0;
}