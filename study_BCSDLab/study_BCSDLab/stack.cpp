#include <iostream>
using namespace std;

int stack[10001], ptr = -1;

void push(int a) {
	if (ptr<1000 || ptr>-2)
		stack[++ptr] = a;
	else
		printf("������ ���� á���ϴ�");
}

void pop() {
	if (ptr<1000 || ptr>-2)
		cout << stack[ptr--] << endl;
	else
		printf("������ ������ϴ�");
}

void empty() {
	for (int i = ptr; i < 0; i--) {
		ptr = -1;
		printf("������ ��������ϴ�.\n");
	}
}

void size() {
	cout << ptr + 1 << endl;
}

void top() {
	cout << stack[ptr] << endl;
}

int main() {
	while (1) {
		printf(" 1: Ǫ�� 2: �� 3: ž 4: ���� 5:������ ");
		int idx;
		cin >> idx;
		if (idx == 1) {
			printf("���ÿ� ���� ���� : ");

			int num;
			cin >> num;

			push(num);
			cout << endl;
		}
		else if (idx == 2) {
			pop();
		}
		else if (idx == 3) {
			top();
		}
		else if (idx == 4) {
			empty();
		}
		else if (idx == 5) {
			printf("���� ������ ������� : ");
			size();
			cout << endl;
		}
		else
			printf("�߸��� �Է��Դϴ�\n");
	}
	return 0;
}
