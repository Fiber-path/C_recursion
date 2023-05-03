#include "stdio.h"
#include "malloc.h"
#include "bilink1.h"

/*根据前序遍历创建一颗给定的二叉树*/
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

void preorder(bintree t) {   /*前序遍历二叉树递归算法的实现*/
	if (t) {
		printf("%c", t->data);    /*输出当前节点的值*/
		preorder(t->lchild);       /*遍历左节点*/
		preorder(t->rchild);      /*遍历右节点*/
	}
}

void inorder(bintree t) {  /*中序遍历二叉树递归算法的实现*/
	if (t) {
		inorder(t->lchild);
		printf("%c", t->data);
		inorder(t->rchild);
	}
}

void postorder(bintree t) {  /*后序遍历二叉树递归算法的实现*/
	if (t) {
		postorder(t->lchild);
		postorder(t->rchild);
		printf("%c", t->data);
	}
}



int main() {
	bintree t;
	t = createbintree();
	printf("前序遍历二叉树结果：\n");
	preorder(t);
	printf("\n");
	printf("中序遍历二叉树结果：\n");
	inorder(t);
	printf("\n");
	printf("后序遍历二叉树结果：\n");
	postorder(t);
}