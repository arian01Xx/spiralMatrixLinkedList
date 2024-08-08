#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

ListNode* createdLinkedList(vector<int> nodes){
	ListNode* head=new ListNode(0);
	ListNode* temp=head;
	for(int node: nodes){
		temp->next=new ListNode(node);
		temp=temp->next;
	}
	return head->next;
}

#endif