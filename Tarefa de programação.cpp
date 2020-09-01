/*
 * 	TAREFA DE PROGRAMAÇÃO
 *
 * 	AUTOR: Carlos Eduardo de Sousa
 *  Disciplina: PAA
 *
 *	Utilizando o algoritmo de ornenação quicksort para ordenar o vetor:
 *
 *	A = [9 , 10 , -1, 3, 6, 2, 1, -3, 1, 0, -2, 15, 8, -7, 0]
 *
 */

#include <iostream>

using namespace std;

int partition(int A[], int p, int r){
	int x = A[r];
	int i = p-1;
	for(int j=p; j<=r-1; j++){
	   if(A[j]<=x){
	     i = i+1;
	     swap(A[i], A[j]);

	   }
	}
	swap(A[i+1], A[r]);
	return i+1;
}

void quicksort(int A[], int p, int r){
	int q=0;
	if(p<r){
	  q = partition(A, p, r);
	  quicksort(A, p, q-1);
	  quicksort(A, q+1, r);
	}
}

int main(){

	int A[15] = {9 , 10 , -1, 3, 6, 2, 1, -3, 1, 0, -2, 15, 8, -7, 0};
	int p=0;
	int r=14;

	cout << "=================== Vetor desordenado ================" << endl;
    	cout<<" "<<endl;
    	cout << "A =[";
    	for(int i=0;i<15;i++){
           if (i == 14){
              cout <<  A[i];
           }
           else{
              cout <<  A[i] <<", ";
           }
	}
	cout <<"]"<<endl;

	quicksort(A, p, r);

        cout<<" "<<endl;
	cout << "=================== Vetor ordenado ===================" << endl;
        cout<<" "<<endl;

        cout << "A =[";
	for(int i=0;i<15;i++){
           if (i == 14){
              cout <<  A[i];
           }
           else{
              cout <<  A[i] <<", ";
           }
	}
	cout <<"]"<<endl;

	return 0;
}
