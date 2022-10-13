#include <iostream>
using namespace std;

int main (){
float tb , bb , bmi ;


cout<<"masukan tinggi badan""\n";
cin>>tb;

cout<<"masukan berat badan""\n";
cin>>bb;

bmi = bb/(tb*tb);

if(bmi<=17){
	cout<<"kurus, kekurangan berat badan";
}else
if(bmi>=17&&bmi<=18.4){
	cout<<"kurus, kekurangan berat badan tingkat ringan";
}else
if(bmi>=18.5&&bmi<=25){
	cout<<"normal";
}else
if(bmi>=25.1&&bmi<=27){
	cout<<"gemuk kelebihan tingkat ringan";
}
else
if(bmi<=27){
	cout<<"gemuk,kelebihan tingkat berat";
}

return 0;

}
