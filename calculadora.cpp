//Programa que presenta las operaciones básicas
//Creado por: Helen Ballesteros 
//Fecha: 24-09-2022
#include<iostream>
using namespace std;
int main()
{
	float HABC_x,HABC_y,HABC_s,HABC_m,HABC_d,HABC_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de HABC_x=:";
	cin>>HABC_x;
	cout<<"Ingrese en valor de HABC_y=:";
	//Operaciones 
	cin>>HABC_y;
	HABC_s=HABC_x+HABC_y;
	HABC_m=HABC_x*HABC_y;
	HABC_d=HABC_x/HABC_y;
	HABC_r=HABC_x-HABC_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<HABC_x<<" + "<<HABC_y<<" = "<<HABC_s<<endl;
	cout<<"Las multiplicacion de "<<HABC_x<<" * "<<HABC_y<<" = "<<HABC_m<<endl;
	cout<<"Las division de "<<HABC_x<<" / "<<HABC_y<<" = "<<HABC_d<<endl;
	cout<<"Las resta de "<<HABC_x<<" - "<<HABC_y<<" = "<<HABC_r<<endl;
	return 0;
}
