#include <iostream>
#include <iomanip> 
using namespace std;

int main1() {
    int a = 10;
    int b = 3;

    cout << "���������a��ֵ��";
    cin >> a;

    cout << "���������b��ֵ��";
    cin >> b;

    int z = a + b;
    int j = a - b;
    int y = a * b;
    double zjy = static_cast<double>(a) / b; 
    int ZJY = a % b;

    cout << "a + b = " << z << endl;
    cout << "a - b = " << j << endl;
    cout << "a * b = " << y << endl;
    cout << "a / b = " << fixed << setprecision(2) << zjy << endl;
    cout << "a % b = " << ZJY << endl;

    system("pause");

    return 0;
}