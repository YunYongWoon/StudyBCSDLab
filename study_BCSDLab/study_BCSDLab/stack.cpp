#include <iostream>
using namespace std;

int stack[10001], ptr = -1;

void push(int a) {
	if (ptr<1000 || ptr>-2)
		stack[++ptr] = a;
	else
		printf("스택이 가득 찼습니다");
}

void pop() {
	if (ptr<1000 || ptr>-2)
		cout << stack[ptr--] << endl;
	else
		printf("스택이 비었습니다");
}

void empty() {
	for (int i = ptr; i < 0; i--) {
		ptr = -1;
		printf("스택이 비어졌습니다.\n");
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
		printf(" 1: 푸시 2: 팝 3: 탑 4: 비우기 5:사이즈 ");
		int idx;
		cin >> idx;
		if (idx == 1) {
			printf("스택에 넣을 값은 : ");

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
			printf("현재 스택의 사이즈는 : ");
			size();
			cout << endl;
		}
		else
			printf("잘못된 입력입니다\n");
	}
	return 0;
}
