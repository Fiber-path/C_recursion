#pragma once
/*
二叉树顺序存储的头文件，文件名：seqbitr1.h
*/

constexpr auto MAXSIZE = 20;

typedef char datetype;   /*二叉树节点类型*/

datetype tree[MAXSIZE];  
int n;   /*树中所含节点的个数*/