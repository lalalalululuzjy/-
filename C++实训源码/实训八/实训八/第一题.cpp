#include <iostream>
using namespace std;

// ����������������ļ�ֵ�۵ĺ���
void print() {
    cout << "��ǿ   ����   ����   ��г" << endl;
    cout << "����   ƽ��   ����   ����" << endl;
    cout << "����   ��ҵ   ����   ����" << endl;
}

// ��������Ǻŷָ��ߵĺ���
void print_star() {
    cout << "**********************" << endl;
}

int main1() {
    // ����������������ļ�ֵ�ۣ�ÿһ������м�ʹ���Ǻŷָ�
    for (int i = 0; i < 3; i++) {
        print_star();
        print();
        print_star();
    }

    system("pause");

    return 0;
}