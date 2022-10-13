#include <iostream>
using namespace std;

int main(){
	int nilai;
	cin>>nilai;
	if(nilai==100){
		cout<<"nilai sempurna\n";
	}else
	if(nilai>80&&nilai<100){
		cout<<"nilai diatas KKM\n";
	}else
	if(nilai<=80&&nilai>0){
		cout<<"nilai dibawah KKM\n";
	}
	return 0;
}
