#include <iostream>
using namespace std;

int stack[1000], front = 500, rear = 500;

void enque_front(int a) {
	if (front >= rear)
		stack[++front%1000] = a;
	else
		printf("ť�� ������ϴ�\n");
}

void deque_front() {
	if (front<=rear)
		printf("ť�� ������ϴ�\n");
	else
		cout << stack[front--%1000] << endl;
}

void enque_rear(int a) {
	if (rear<=front)
		stack[--rear%1000] = a;
	else
		printf("ť�� ���� á���ϴ�\n");
}

void deque_rear() {
	if (rear<front)
		cout << stack[rear++%1000] << endl;
	else
		printf("ť�� ������ϴ�\n");
}

void empty() {
	front = 500;
	rear = 500;
	printf("ť�� ��������ϴ�.\n");
}

void size() {
	cout << abs(front - rear)%1000 << endl;
}

void peek_front() {
		cout << stack[front%1000] << endl;
}

void peek_rear() {
		cout << stack[rear%1000] << endl;
}

int main() {
	while (1) {
		printf(" 1: ��ť 2: ��ť 3: ��ũ 4: ���� 5:������\n ");
		int idx;
		cin >> idx;
		if (idx == 1) {
			int k;
			printf("1. Front  2.Rear\n");
			cin >> k;

			if (k == 1) {
				printf("�Է��� ����? ");
				int num;
				cin >> num;
				enque_front(num);
			}
			else if (k == 2) {
				printf("�Է��� ����? ");
				int num;
				cin >> num;
				enque_rear(num);
			}
			else {
				printf("�Է��� �߸��Ͽ����ϴ�.\n");
			}
		}
		else if (idx == 2) {
			int k;
			printf("1. Front  2.Rear\n");
			cin >> k;
			if (k == 1) {
				deque_front();
			}
			else if (k == 2) {
				deque_rear();
			}
			else {
				printf("�Է��� �߸��Ͽ����ϴ�.\n");
			}
		}
		else if (idx == 3) {
			int k;
			printf("1. Front  2.Rear\n");
			cin >> k;
			if (k == 1) {
				peek_front();
			}
			else if (k == 2) {
				peek_rear();
			}
			else {
				printf("�Է��� �߸��Ͽ����ϴ�.\n");
			}
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
