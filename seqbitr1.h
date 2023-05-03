#pragma once
/*
完全二叉树的顺序存储的头文件
*/
#define MAXSIZE 20

typedef char datetype;

typedef struct {
	datetype data;
	int lchild, rchild;
}node;

node tree[MAXSIZE];
int n;   /*树中实际所含节点的个数*/
int root;  /*存放根节点的下标*/