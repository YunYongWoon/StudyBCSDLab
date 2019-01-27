//큐 구현
#include <iostream>
using namespace std;

int stack[10], ptr = -1, ptr2 = -1;

void enque(int a) {
	if (ptr==9)
		printf("큐가 가득 찼습니다\n");
	else
		stack[++ptr] = a;
}

void deque() {
	if (ptr==ptr2)
		printf("큐가 비었습니다\n");
	else
		cout << stack[++ptr2] << endl;
}

void empty() {
		ptr = -1;
		ptr2 = -1;
		printf("큐가 비어졌습니다.\n");
}

void size() {
	cout << ptr - ptr2 + 1 << endl;
}

void peek() {
	cout << stack[ptr2] << endl;
}

int main() {
	while (1) {
		printf(" 1: 인큐 2: 디큐 3: 피크 4: 비우기 5:사이즈 ");
		int idx;
		cin >> idx;
		if (idx == 1) {
			printf("큐에 넣을 값은 : ");

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
			printf("현재 큐의 사이즈는 : ");
			size();
			cout << endl;
		}
		else
			printf("잘못된 입력입니다\n");
	}
	return 0;
}
