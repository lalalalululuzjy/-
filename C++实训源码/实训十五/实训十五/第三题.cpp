#include <iostream>
using namespace std;

class RectangularBox {
private:
    double length;
    double width;
    double height;

public:
    // ���캯�������ڳ�ʼ�������������
    RectangularBox() {
        length = 0.0;
        width = 0.0;
        height = 0.0;
    }

    // ���ó�����ĳ�������
    void setDimensions(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // ���㳤��������
    double calculateVolume() {
        return length * width * height;
    }
};

int main3() {
    RectangularBox box1, box2, box3;
    double length, width, height;

    // �����һ��������ĳ�������
    cout << "�������һ��������ĳ�������: " << endl;
    cin >> length >> width >> height;
    box1.setDimensions(length, width, height);

    // ����ڶ���������ĳ�������
    cout << "������ڶ���������ĳ�������: " << endl;
    cin >> length >> width >> height;
    box2.setDimensions(length, width, height);

    // ���������������ĳ�������
    cout << "�����������������ĳ�������: " << endl;
    cin >> length >> width >> height;
    box3.setDimensions(length, width, height);

    // ���㲢�����������������
    cout << "��һ������������Ϊ: " << box1.calculateVolume() << endl;
    cout << "�ڶ�������������Ϊ: " << box2.calculateVolume() << endl;
    cout << "����������������Ϊ: " << box3.calculateVolume() << endl;

    system("pause");

    return 0;
}