#include<iostream>
using namespace std;

int main1() {
	int arr[10];

	cout << "������ 10 ��������" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "�� " << i + 1 << " ������";
		cin >> arr[i];
	}

	cout << "����ǰ��" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//��ʼð������
	//�ܹ���������Ϊ��Ԫ�ظ�����1
	int a = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
	for (int i = 0; i < a - 1; i++)
	{
		//�ڲ�ѭ���Ա� ���� = Ԫ�ظ��� - ��ǰ������ - 1
		for (int j = 0; j < a - i - 1; j++)
		{
			//�����һ�����ֱȵڶ������ִ󣬽�����������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//�������
	cout << "�����:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");

	return 0;
}