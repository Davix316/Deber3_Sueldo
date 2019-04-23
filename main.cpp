#include <iostream>
using namespace std;


int main() {
	
	int categoria;
	double sueldo, nsueldo=0;
	
	cout<<"Ingrese el valor del sueldo"<<endl;
	cin>>sueldo;
	cout<<"Ingrese en que categoria se encuentra (1,2,3,4)"<<endl;
	cin>>categoria;
	
	if(categoria==1){
		nsueldo=sueldo+(sueldo*0.15);
	} if (categoria==2){
		nsueldo=sueldo+(sueldo*0.10);
	} if (categoria==3){
		nsueldo=sueldo+(sueldo*0.08);
	} if (categoria==4){
		nsueldo=sueldo+(sueldo*0.07);
	}
	
	cout<<"Sueldo anterior era: $"<<sueldo<<"\nSe encuentra en la categoria: "<<categoria<<"\nEl sueldo nuevo es: $"<<nsueldo<<endl;
	return 0;
}
