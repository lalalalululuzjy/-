#include <iostream>
using namespace std;

// �������ڽṹ��
struct date {
    int year;
    int month;
    int day;
};

// �ж��Ƿ�Ϊ����
bool runnian(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// ��������ڱ������ǵڼ���
int dayyear(const date& date) {
    int daymonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int daycount = date.day;

    for (int i = 1; i < date.month; ++i) {
        daycount += daymonth[i];
        if (i == 2 && runnian(date.year))
            daycount++;  // February in a leap year
    }

    return daycount;
}

int main4() {
    date date;

    cout << "��������: ";
    cin >> date.year;

    cout << "��������: ";
    cin >> date.month;

    cout << "��������: ";
    cin >> date.day;

    int dayCount = dayyear(date);
    cout << "�����ڱ������ǵ� " << dayCount << " ��" << endl;

    system("pause");

    return 0;
}