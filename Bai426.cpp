#include"Matran.cpp"
#include<math.h>

class Bai426 : public Matran<int>{
private:
    int b[100][100];

public:
    void xuat(){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				b[i][j] = abs(a[i][j]);
			}
		}
		
		cout << "Xuat ma tran B: " << endl;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << b[i][j] << "\t";
			}
			cout << endl;
		}
	}
};
