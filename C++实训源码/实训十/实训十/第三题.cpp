#include <iostream>
using namespace std;

int main() {
    int nums[6]; // ��������
    cout << "������" << 6 << "������Ԫ�أ�" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> nums[i];
    }

    int target; // Ҫ���ҵ���
    cout << "������Ҫ���ҵ�����";
    cin >> target;

    // ˳�����
    bool found = false;
    int position = -1;
    for (int i = 0; i < 6; i++) {
        if (nums[i] == target) {
            found = true;
            position = i + 1;
            break;
        }
    }

    // ������ҽ��
    if (found) {
        cout << target << " �������е�λ��Ϊ��" << position <<"λ��" << endl;
    }
    else {
        cout << "�����������С�" << endl;
    }

    system("pause");

    return 0;
}