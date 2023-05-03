#pragma once
/*
带双亲指示的二叉树顺序存储的头文件
*/

constexpr auto MAXSIZE = 20;

typedef char datatype;

typedef struct {
	datatype data;
	int lchild, rchild;  /*存放左、右子女下标*/
	int parent;   /*存放双亲结点下标*/
} node;

node tree[MAXSIZE];
int n;   /*树中实际所含结点的个数*/
int root;   /*存放根节点的下标*/