#include <iostream>
using namespace std;

// void myfunction(string fnama, int tahun){
//	cout<<fnama<<" kelas z "<<"angkatan "<<tahun<<"\n";
//}

// int main(){
//	int angka;
//	string nama;
//	getline(cin,nama);
//	cin>>angka;
//	myfunction(nama, angka);
	
		
//	return 0;
// }

int fungsitambah(int a, int b){
	return a + b;
	
}
int fungsikurang(int a, int b){
	return a - b;
	
}
int fungsikali(int a, int b){
	return a * b;
	
}
int fungsibagi(int a, int b){
	return a / b;
	
}

int main(){
	int x, y;
	cin>>x>>y;
	
	cout<< fungsitambah(x, y)<<"\n";
	cout<< fungsikurang(x, y)<<"\n";
	cout<< fungsikali(x, y)<<"\n";
	cout<< fungsibagi(x, y)<<"\n";
	
	return 0;
}
