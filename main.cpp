#include "struct.hpp"
#include "solutionTwo.hpp"
#include "list.hpp"

using namespace std;

int main(){
	vector<int> nodes={3,0,2,6,8,1,7,9,4,2,5,5,0};
	solutionTwo solution2;
	ListNode* list=createdLinkedList(nodes);
	int m=3; int n=5;
	vector<vector<int>> matrix=solution2.spiralMatrix(m,n,list);
	cout<<"Original LinkedList= "<<endl;
	while(list!=NULL){
		cout<<list->val<<"->";
		list=list->next;
	}
	cout<<endl;
	cout<<endl;
	cout<<"Matrix answer= "<<endl;
	for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[i].size(); j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}