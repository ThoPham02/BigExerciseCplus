#include<iostream>
#pragma once
using namespace std;

template<class T>
class Matran{
public:
	int m, n;
	T a[10][10];
public:
	Matran(){
		this-> m = 0;
		this-> n = 0;
	}

	void nhap(){
		while(n <= 0){
			cout << "Nhap so hang: "; cin >> n;
		}

		while(m <= 0){
			cout << "Nhap so cot: "; cin >> m;
		}

		for(int i = 0; i < n; i++){
			for(int j  = 0; j < m; j++){
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
		}
	}

	virtual void xuat() = 0;
};
