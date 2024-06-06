/*
//Problema 1
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int matriz[3][3];
	int sumaF[3]={0,0,0},sumaC[3]={0,0,0};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Ingrese el valor de la matriz ["<<i<<"]["<<j<<"]: ";cin>>matriz[i][j];
		}
	}
		
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			sumaF[i]+=matriz[i][j];
			sumaC[i]+=matriz[j][i];
		}
	}
	
	cout<<"\nLa matriz es la siguiente: \n"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=0;i<3;i++){
		cout<<"La suma de la fila "<<i<<" es "<<sumaF[i]<<endl;
	}
	
	cout<<endl;
	
	for(int i=0;i<3;i++){
		cout<<"La suma de la columna "<<i<<" es "<<sumaC[i]<<endl;
	}
	
	getch();
	return 0;
}
*/
