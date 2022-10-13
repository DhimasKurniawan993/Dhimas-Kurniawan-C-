#include <iostream>
using namespace std;
int main(){
	
	int a , b , c;
	cout<<"masukan panjang, lebar, dan tinggi balok""\n";
	cin>> a ;
	cin>> b ;
	cin>> c ;
	cout<<"luas Permukaan: ";
	cout<< a * b * 2 + b * c * 2 + a * c * 2 <<"\n";
	cout<<"volume: ";
	cout<< a * b * c <<"\n";
	
	return 0;
}
