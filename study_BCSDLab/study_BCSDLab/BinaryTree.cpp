#include <iostream>
using namespace std;

int number = 15;

typedef struct node *treePointer;
typedef struct node {
	int data;
	treePointer leftChild, rightChild;
}node;

void preorder(treePointer ptr) { //������ȸ
	if (ptr) {
		cout << ptr->data << ' ';
		preorder(ptr->leftChild);
		preorder(ptr->rightChild);
	}
}

void inorder(treePointer ptr) { //������ȸ
	if (ptr) {
		inorder(ptr->leftChild);
		cout << ptr->data << ' ';		
		inorder(ptr->rightChild);
	}
}

void postorder(treePointer ptr) { //������ȸ
	if (ptr) {
		postorder(ptr->leftChild);
		postorder(ptr->rightChild);
		cout << ptr->data << ' ';
	}
}

int main() {
	node nodes[16];
	// ��Ʈ ����
	for (int i = 1; i <= number; i++) {
		nodes[i].data = i;
		nodes[i].leftChild = NULL;
		nodes[i].rightChild = NULL;
	}

	//�ڽĳ�� ����
	for (int i = 1; i <= number; i++) {
		if (i % 2 == 0)
			nodes[i / 2].leftChild = &nodes[i];
		else
			nodes[i / 2].rightChild = &nodes[i];
	}
	printf("������ȸ: ");
	preorder(&nodes[1]);
	printf("\n");
	printf("������ȸ: ");
	inorder(&nodes[1]);
	printf("\n");
	printf("������ȸ: ");
	postorder(&nodes[1]);
	printf("\n");
	return 0;
}