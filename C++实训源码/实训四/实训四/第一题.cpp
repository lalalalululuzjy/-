#include<iostream>
using namespace std;

int main1()
{
	while (1) {
		int n;
		cout << "����ѧ���ĳɼ�:\n";
		cin >> n;
		if (n < 0 || n>100) {
			cout << "��������ݷǷ�!\n";
		}
		else {
			if (n > 90) {
				cout << "��ͬѧ�ĵȼ�Ϊ:A";
			}
			if (n >= 80 && n <= 90) {
				cout << "��ͬѧ�ĵȼ�Ϊ:B";
			}
			if (n >= 70 && n <= 79) {
				cout << "��ͬѧ�ĵȼ�Ϊ:C";
			}
			if (n >= 60 && n <= 69) {
				cout << "��ͬѧ�ĵȼ�Ϊ:D";
			}
			if (n >= 0 && n <= 59) {
				cout << "��ͬѧ�ĵȼ�Ϊ:E";
			}
		}
		cout << endl;
	}
	system("pause");

	return 0;
}