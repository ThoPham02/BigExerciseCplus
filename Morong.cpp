#include "Matran.cpp"

class Morong : public Matran<double>{
	//cong 2 ma tran.in ra tong 2 ma tran. sau do tim cac gia tri am cua ma tran ket qua.
public:
	Morong operator+(const Morong &b){
		Morong kq;
		kq.m = b.m;
		kq.n = b.n;
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				kq.a[i][j] = this->a[i][j] + b.a[i][j];
			}
		}
		
		return kq;
	}
	
	void xuat(){
		Morong mr, mr1, mr2;
		cout << "Nhap ma tran a: " << endl; mr1.nhap();
		cout << "Nhap ma tran b: " << endl; mr2.m = mr1.m; mr2.n = mr1.n; mr2.nhap();
		mr = mr1 + mr2;
		
		for(int i = 0; i < mr.n; i++){
			for(int j = 0; j < mr.m; j++){
				cout << mr.a[i][j] << "   ";
			}
			cout << endl;
		}
		
		cout << "Cac gia tri am cua tong 2 ma tran: ";
		for(int i = 0; i < mr.n; i++){
			for(int j = 0; j < mr.m; j++){
				if(mr.a[i][i] < 0){
					cout << mr.a[i][j] << " ";
				}
			}
		}
	}
};
