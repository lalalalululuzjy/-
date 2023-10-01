#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // ���캯��
    Time(int h = 0, int m = 0, int s = 0) {
        hour = h;
        minute = m;
        second = s;
    }

    // ��ȡСʱ
    int getHour() const {
        return hour;
    }

    // ��ȡ����
    int getMinute() const {
        return minute;
    }

    // ��ȡ����
    int getSecond() const {
        return second;
    }

    // ����ʱ��
    void setTime(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    // ��ʾʱ��
    void displayTime() const {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main1() {
    Time t(22, 01, 32);
    t.displayTime();

    system("pause");

    return 0;
}