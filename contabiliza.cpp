//Creado por: Helen Ballesteros
#include<iostream>
using namespace std;
int main()
{
	int HABC_i=0,HABC_l;
	float HABC_x,HABC_s=0;
	cout<<"ingrese el limite HABC_l="; cin>>HABC_l;
	do{

	cout<<"ingrese el numero HABC_x="; cin>>HABC_x;
	HABC_i=HABC_i+1;
	HABC_s=HABC_s+HABC_x;



	}while(HABC_i<HABC_l);
	cout<<"Se ingresaron "<<HABC_l<<" numeros "<< "que sumaron "<<HABC_s<<endl;
	return 0;
}
