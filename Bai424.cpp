#include "Matran.cpp"

class Bai424 : public Matran<int>{
public:
	Bai424(){
		m = 0;
		n = 0;
	}
	
    void sapXep(){
		//gan gia tri
		int b[m * n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				b[m * i + j] = a[i][j];
			}
		}
		
		//sap xep
		for(int i = 0; i < m * n; i++){
			for(int j = i; j < m * n; j++){
				if(b[i] > b[j]){
					int tam = b[i];
					b[i] = b[j];
					b[j] = tam;
				}
			}
		}
		
		//sap xep zic zac
		int dem = 0;
		for(int i = 0; i < n; i++){
			
			if(i % 2 == 0){
				for(int j = 0; j < m; j++){
					a[i][j] = b[dem];
					dem++;
				}
			}
			
			else{
				for(int j = m - 1; j >= 0; j--){
					a[i][j] = b[dem];
					dem++;
				}
			}
		}
	}
	
	void xuat(){
		cout << "Ma tran sau khi sap xep: " << endl;
		sapXep();
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << a[i][j] << "\t";
			}
			cout << endl;
		}
	}
};
