#include"Matran.cpp"
#include"Bai424.cpp"
#include"Bai425.cpp"
#include"Bai426.cpp"
#include"Morong.cpp"

int main(){
	int bt;
	cout << "\t===============Menu==============" << endl;
	cout << "\t=  Nhap 424 de lam bai 424      =" << endl;
	cout << "\t=  Nhap 425 de lam bai 425      =" << endl;
	cout << "\t=  Nhap 426 de lam bai 426      =" << endl;
	cout << "\t=  Mac dinh lam bai mo rong     =" << endl;
	cout << "\t=================================" << endl;
	cin >> bt;
	system("cls");
	switch(bt)
	{
		case 424 :{
			Matran<int> *Test1;
			Bai424 bt424;
			Test1 = &bt424;
			Test1->nhap();
			Test1->xuat();
			break;
		}
		case 425 :{
			Matran<double> *Test2;
			Bai425 bt425;
			Test2 = &bt425;
			Test2->nhap();
			Test2->xuat();
			break;
		}
		case 426 :{
			Matran<int> *Test3;
			Bai426 bt426;
			Test3 = &bt426;
			Test3->nhap();
			Test3->xuat();
			break;
		}
			
		default:{
			Matran<double>* Test4;
			Morong mr;
			Test4 = &mr;
			Test4->xuat();
			break;
		}
	}
    return 0;
}
