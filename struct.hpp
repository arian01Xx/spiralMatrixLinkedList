#ifndef STRUCT_HPP
#define STRUCT_HPP

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode(): val(0), next(nullptr) {}
	ListNode(int x): val(x), next(nullptr) {}
	ListNode(int x, ListNode* next): val(x), next(next) {}
};

#endif