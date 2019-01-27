#include <iostream>
using namespace std;

int stack[1000], front = 500, rear = 500;

void enque_front(int a) {
	if (front >= rear)
		stack[++front%1000] = a;
	else
		printf("큐가 비었습니다\n");
}

void deque_front() {
	if (front<=rear)
		printf("큐가 비었습니다\n");
	else
		cout << stack[front--%1000] << endl;
}

void enque_rear(int a) {
	if (rear<=front)
		stack[--rear%1000] = a;
	else
		printf("큐가 가득 찼습니다\n");
}

void deque_rear() {
	if (rear<front)
		cout << stack[rear++%1000] << endl;
	else
		printf("큐가 비었습니다\n");
}

void empty() {
	front = 500;
	rear = 500;
	printf("큐가 비어졌습니다.\n");
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
		printf(" 1: 인큐 2: 디큐 3: 피크 4: 비우기 5:사이즈\n ");
		int idx;
		cin >> idx;
		if (idx == 1) {
			int k;
			printf("1. Front  2.Rear\n");
			cin >> k;

			if (k == 1) {
				printf("입력할 값은? ");
				int num;
				cin >> num;
				enque_front(num);
			}
			else if (k == 2) {
				printf("입력할 값은? ");
				int num;
				cin >> num;
				enque_rear(num);
			}
			else {
				printf("입력을 잘못하였습니다.\n");
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
				printf("입력을 잘못하였습니다.\n");
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
				printf("입력을 잘못하였습니다.\n");
			}
		}
		else if (idx == 4) {
			empty();
		}
		else if (idx == 5) {
			printf("현재 큐의 사이즈는 : ");
			size();
			cout << endl;
		}
		else
			printf("잘못된 입력입니다\n");
	}
	return 0;
}
