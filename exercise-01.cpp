/*
	Nama 	  : Muhamad Fahrul Azimi
	NPM		  : 140810180027
	Deskripsi : Program ini dibuat reverse stack menggunakan array
	Tanggal	  : 7 Mei 2019
*/

// nama file : exercise-01.cpp
#include <iostream>
using namespace std;

const int maxElemen = 255;
struct Stack{
	char isi[maxElemen];
	int TOP;
};
Stack S;

void createStack (Stack& S){
	S.TOP = -1;
}

void push (Stack& S, char elemenBaru){
	if (S.TOP == maxElemen-1){
		cout << "Tumpukan sudah penuh" <<endl;
	}
	else{
		S.TOP = S.TOP + 1;
		S.isi[S.TOP] = elemenBaru;
	}
}

void pop (Stack& S, char& elemenhsl){
	if (S.TOP < 0){
		cout << "Tumpukan sudah kosong" <<endl;
	}
	else{
		elemenhsl = S.isi[S.TOP];
		S.TOP = S.TOP - 1;
	}
}

void traversal (Stack S){
	for (int i=S.TOP; i>=0; i--){
		cout << S.isi[i] << " ";
	}
}

int main(){
	char a,elemenHasil;
	int n;
	createStack(S);
	cout << "Banyak char : "; cin >> n;
	for (int i=0; i<n; i++){
		cout << "Input huruf : "; cin >> a;
		push (S,a);
	}
	cout << "---Menggunakan Traversal Biasa---" <<endl;
	traversal(S);
	cout << "\n---Menggunakan Pop---" <<endl;
	for (int i=0; i<n; i++){
		pop(S,elemenHasil);
		cout << elemenHasil << " ";
	}
}
	

