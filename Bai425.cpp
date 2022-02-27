#include"Matran.cpp"

class Bai425 : public Matran<double>{
public:
    void xuat(){
		//gan cac gia tri cua ma tran vao day
		double b[m * n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				b[m * i + j] = a[i][j];
			}
		}
		
		//sap xep giam dan
		for(int i = 0; i < m*n; i++){
			for(int j = i; j < m * n; j++){
				if(b[i] < b[j]){
					int tam = b[i];
					b[i] = b[j];
					b[j] = tam;
				}
			}
		}
		
		//xuat gia tri
		cout << "Xuat gia tri am trong ma tran giam dan: ";
		for(int i = 0; i < m * n; i++){
			if(b[i] >= 0) continue;
			else{
				cout << b[i] << " ";
			}
		}
		
		cout << "\nXuat ma tran ban dau: " << endl;
		for(int i = 0; i < n; i++){
			for(int j =0; j < m; j++){
				cout << a[i][j] << "\t";
			}
			cout << endl;
		}
	}
};