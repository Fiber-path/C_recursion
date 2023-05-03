#pragma once
/*
二叉树链式存储的头文件
*/

typedef char datatype;

typedef struct node {          /*二叉树节点类型*/
	datatype data;
	struct node* lchild, * rchild;
} bintnode;

typedef bintnode* bintree;
bintree root;      /*指向二叉树根节点的指针*/