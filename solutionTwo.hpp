#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include "struct.hpp"

using namespace std;

class solutionTwo{
public:
	vector<vector<int>> spiralMatrix(int m, int n, ListNode* head){
		vector<vector<int>> arr(m, vector<int>(n,-1));
		int minr=0; int maxr=m-1;
		int minc=0; int maxc=n-1;
		int count=1;
		ListNode* temp=head;
		while(minr<maxr && minc<maxc){
			for(int j=minc; j<=maxc; j++){
				if(temp==NULL) return arr;
				arr[minr][j]=temp->val; //fila fija, columna avanza
				temp=temp->next;
			}
			minr++; //fila avanza
			if(minr>maxr && minc>maxc) break;
			for(int i=minr; i<=maxr; i++){
				if(temp==NULL) return arr;
				arr[i][maxc]=temp->val; //fila avanza, columna fija
				temp=temp->next;
			}
			maxc--;//columna retrocede
			if(minr>maxr || minc>maxc) break;
			for(int j=maxc; j>=minc; j--){
				if(temp==NULL) return arr;
				arr[maxr][j]=temp->val; //fila fija, columnas retroceden
				temp=temp->next;
			}
			maxr--; //fila retrocede, sube un escalon mas
			if(minr>maxr || minc>maxc) break;
			for(int i=maxr; i>=minr; i--){
				if(temp==NULL) return arr;
				arr[i][minc]=temp->val; //filas suban, columna fija
				temp=temp->next;
			}
			minc++;
			if(minr>maxr || minc>maxc) break;
		}
		return arr;
	}
};

#endif