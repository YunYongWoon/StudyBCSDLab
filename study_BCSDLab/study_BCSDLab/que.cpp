//ť ����
#include <iostream>
using namespace std;

int stack[10001], ptr = -1, ptr2 = -1;

void enque(int a) {
	if (ptr<1000 || ptr>-2)
		stack[++ptr] = a;
	else
		printf("ť�� ���� á���ϴ�");
}

void deque() {
	if (ptr<1000 || ptr>-2)
		cout << stack[++ptr2] << endl;
	else
		printf("ť�� ������ϴ�");
}

void empty() {
	for (int i = ptr; i < 0; i--) {
		ptr = -1;
		ptr2 = -1;
		printf("ť�� ��������ϴ�.\n");
	}
}

void size() {
	cout << ptr - ptr2 + 1 << endl;
}

void peek() {
	cout << stack[ptr2] << endl;
}

int main() {
	while (1) {
		printf(" 1: ��ť 2: ��ť 3: ��ũ 4: ���� 5:������ ");
		int idx;
		cin >> idx;
		if (idx == 1) {
			printf("ť�� ���� ���� : ");

			int num;
			cin >> num;

			enque(num);
			cout << endl;
		}
		else if (idx == 2) {
			deque();
		}
		else if (idx == 3) {
			peek();
		}
		else if (idx == 4) {
			empty();
		}
		else if (idx == 5) {
			printf("���� ť�� ������� : ");
			size();
			cout << endl;
		}
		else
			printf("�߸��� �Է��Դϴ�\n");
	}
	return 0;
}
