//Problema 3

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
struct cliente{
	char nombre[25];
	int unidades;
	float precio;
	int estado;
	float fact;
	
}clientes[25]; 

int main(){
	
	int i=0,total_moroso=0,hacer;
	char resp;
	float fact_comp,prom;
	float total_fact=0;
		
	while(true){
		system("cls");
		fflush(stdin);
		cout<<"Ingrese el nombre del cliente: ";
		cin.getline(clientes[i].nombre,25,'\n');
		cout<<"Ingrese el numero de unidades solicitadas: ";cin>>clientes[i].unidades;
		cout<<"Ingrese el precio por unidad: ";cin>>clientes[i].precio;
		clientes[i].fact=clientes[i].unidades*clientes[i].precio;
		total_fact+=clientes[i].fact;		
		cout<<"\nIngrese el estado en el que se encuentra: "<<endl;
		cout<<"1. Moroso"<<endl;
		cout<<"2. Atrasado "<<endl;
		cout<<"3. Pagado \n"<<endl;
		cin>>clientes[i].estado;
		if(clientes[i].estado==1){
			total_moroso++;
		}
		i++;
		cout<<"\nDesea continuar?(S/N): ";cin>>resp;
		if(resp=='N'||resp=='n'){
			break;
		}
	}
	prom=total_fact/i;
	
		while(true){
		
		cout<<"\nQue desea hacer?: "<<endl;
		cout<<"1. Clientes en estado moroso."<<endl;
		cout<<"2. Clientes en estado pagado con factura mayor a una cierta cantidad."<<endl;
		cout<<"3. Obtener el promedio de facturas. "<<endl;
		cout<<"4.Salir "<<endl;
		cout<<endl;
		cin>>hacer;
	
		switch(hacer){
			case 1:{
				for(int j=0;j<i;j++){
					if(clientes[j].estado==1){
					cout<<clientes[j].nombre<<endl<<endl;
					}
				}
				break;
			}
			case 2:{
				cout<<"Digite la cantidad de facturación a comparar: \n";cin>>fact_comp;
				for(int j=0;j<i;j++){
					if(clientes[j].estado==3 && clientes[j].fact>fact_comp){
						cout<<clientes[j].nombre<<endl;
					}
				}
				break;
			}
			case 3:{
				cout<<"El promedio de facturas es: "<<prom<<endl;
				break;
			}
			case 4:{
				return false;
				break;
			}
			default: {
				cout<<"La opcion ingresada no es correcta. ";
				break;
			}
		}
		}
	
	getch();
	return 0;
}
