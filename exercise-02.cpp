/*
	Nama 	  : Muhamad Fahrul Azimi
	NPM		  : 140810180027
	Deskripsi : Program ini dibuat reverse stack menggunakan linkedlist
	Tanggal	  : 7 Mei 2019
*/

// nama file : exercise-02.cpp
#include <iostream>
using namespace std;

struct List{
	char isi;
	List* next;
};
typedef List* pointer;
typedef pointer Stack;
Stack S;

void createList(Stack& TOP){
	TOP = NULL;
}

void createElement (pointer& pBaru){
	pBaru = new List;
	cout << "Isi char : "; cin >> pBaru->isi;
	pBaru->next = NULL;
}

void push (Stack& TOP, pointer pBaru){
	if (TOP==NULL){
		TOP=pBaru;
	}
	else{
		pBaru->next=TOP;
		TOP=pBaru;
	}
}

void pop (Stack& TOP, pointer& pHapus){
	if (TOP==NULL){
		cout << "Stack Kosong" <<endl;
		pHapus=NULL;
	}
	else if (TOP->next==NULL){
		pHapus=TOP;
		TOP=NULL;
	}
	else{
		pHapus=TOP;
		TOP=TOP->next;
		pHapus->next=NULL;
	}
}

void traversal (Stack TOP){
	pointer pBantu;
	pBantu=TOP;
	if (TOP==NULL)
		cout << "List Kosong\n";
	else
	pBantu=TOP;
	while(pBantu != NULL){
		cout << pBantu->isi;
		pBantu = pBantu->next;
		cout << " ";
	}
}

int main(){
	pointer p,pHapus;
	int n;
	createList(S);
	cout << "Banyak char : "; cin >> n;
	for (int i=0; i<n; i++){
		createElement(p);
		push(S,p);
	}
	cout << "---Menggunakan Traversal Biasa---" <<endl;
	traversal(S);
	cout << "\n---Menggunakan Pop---" <<endl;
	for (int i=0; i<n; i++){
		pop(S,pHapus);
		cout << pHapus->isi << " ";
	}
}
