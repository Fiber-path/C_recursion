#include "stdio.h"
#include "malloc.h"
#include "bilink1.h"

/*����ǰ���������һ�Ÿ����Ķ�����*/
bintree createbintree() {
	char ch;
	bintree t;
	if ((ch = getchar()) == '#') {
		t = NULL;
	}
	else {
		t = (bintnode*)malloc(sizeof(bintnode));
		if (t) {
			t->data = ch;
			t->lchild = createbintree();
			t->rchild = createbintree();
		}
	}
	return t;
}

void preorder(bintree t) {   /*ǰ������������ݹ��㷨��ʵ��*/
	if (t) {
		printf("%c", t->data);    /*�����ǰ�ڵ��ֵ*/
		preorder(t->lchild);       /*������ڵ�*/
		preorder(t->rchild);      /*�����ҽڵ�*/
	}
}

void inorder(bintree t) {  /*��������������ݹ��㷨��ʵ��*/
	if (t) {
		inorder(t->lchild);
		printf("%c", t->data);
		inorder(t->rchild);
	}
}

void postorder(bintree t) {  /*��������������ݹ��㷨��ʵ��*/
	if (t) {
		postorder(t->lchild);
		postorder(t->rchild);
		printf("%c", t->data);
	}
}



int main() {
	bintree t;
	t = createbintree();
	printf("ǰ����������������\n");
	preorder(t);
	printf("\n");
	printf("������������������\n");
	inorder(t);
	printf("\n");
	printf("������������������\n");
	postorder(t);
}