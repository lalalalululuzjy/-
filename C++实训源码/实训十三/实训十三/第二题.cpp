#include<iostream>
using namespace std;
#include<ctime>

int main2() {

	//�����������ӣ��������õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1; //rand()%100 + 1 ������0 + 1 ` 99 + 1�������

	string username;
	cout << "�����������û���: ";
	cin >> username;

	int attempts = 0;
	int guess;

	cout << "��Ϸ��ʼ������10�β²�Ļ��ᡣ" << endl;

	while (attempts < 10) {
		cout << "���������Ĳ²� (1-100)��";
		cin >> guess;
		attempts++;

		if (guess < num) {
			cout << "��С�ˣ�" << endl;
		}
		else if (guess > num) {
			cout << "�´��ˣ�" << endl;
		}
		else {
			cout << "��ϲ�����¶��ˣ�" << endl;
			break;
		}

		if (attempts == 10) {
			cout << "���ź������þ������л��ᡣ��ȷ���� " << num << "��" << endl;
		}
	}

	cout << "��Ϸ��������л���룬" << username << "��" << endl;

	system("pause");

	return 0;
}
