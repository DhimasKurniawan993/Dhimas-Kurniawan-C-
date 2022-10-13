#include <iostream>
using namespace std;

int main(){
	
//	int nama_array[5] = {12,3,1,4,9};

//	for(int a=0; a<5; a++){
//		cin>>nama_array[a];
//	}
//	
//	for(int b=0; b<5; b++){
//		cout<<nama_array[b]<<"\n";
//	}
	
//	int y[99];
//	int i, k;
//	for(i=0; i<10; i++){
//		k=i+1;
//		y[i]=k*k;
//		cout<<"pangkat 2 dari "<<k<<" adalah "<<y[i]<<"\n";
//	}


int array[]={0, 1, 3, 4, 5, 6, 7, 8, 9};

int size = sizeof (array);
int length = sizeof(array) / sizeof (*array);
cout<<length;

	return 0;	
}
