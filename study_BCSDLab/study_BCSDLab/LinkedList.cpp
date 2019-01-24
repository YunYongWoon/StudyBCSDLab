#include <iostream>
using namespace std;


struct NODE {
	int data;
	struct NODE *link;
};

void addFirst(struct NODE* target, int data) {
	struct NODE *newNode = new struct NODE;
	newNode->link = target->link;
	newNode->data = data;

	target->link = newNode;
}

void removeFirst(struct NODE *target) {
	struct NODE *removeNode = target->link;
	target->link = removeNode->link;

	delete removeNode;
}

int main() {

	struct NODE *head = new struct NODE;

	head->link = NULL;

	while (1) {
		int idx;
		printf("1. 추가  2. 삭제  3.출력 :  ");
		cin >> idx;
		switch (idx) {
		case 1:
			int num;
			printf("추가 할 값은: ");
			cin >> num;
			addFirst(head, num);
			break;

		case 2:
			removeFirst(head);
			printf("삭제 완료\n");
			break;

		case 3:
			struct NODE *curr = head->link;
			while (curr != NULL) {
				printf("%d  ", curr->data);
				curr = curr->link;
			}
			cout << endl;
			break;
		}
	}

	delete head;
	return 0;
}
