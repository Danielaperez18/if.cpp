#include <iostream>
using namespace std;
main (){
	/*
	//numero es positivo>0 o negativo<0
	int num=0;
	cout<<"Ingrese el Numero: ";
	cin>>num;
	if(num>0){// >0
		//entra a aca cuando la condicion es verdadera
		cout<<"Positivo"<<endl;
	}else{ //<=0
		if(num==0){ // 0
			cout<<"Neutro"<<endl;		
			}else{// <0
				cout<<"Negativo"<<endl;
			}		
		}
	*/
	
	
	
	
	/*
	string pais="";
	cout<<"Ingrese el pais: ";
	cin>>pais;
	if(pais=="guatemala"){
		cout<<"yo soy de "<<pais<<" mi pais"<<endl;
	}else{
		cout<<pais<<endl;
	}
	*/
	
	
	
	
	/*
	//determinar si es numero es par o impar
	int num=0;
	cout<<"ingrese Numero: ";
	cin>>num;
	//dividir un numero entre dos su residuo es cero entonces es par caso contrario es impar
	
	if ((num%2)==0){
		cout<<"Par"<<endl;
	}else{
		cout<<"Impar"<<endl;
	}
	*/
	
	



/*	
	//and (y) && (ambas valores tiene que ser verdaderos para que el resultado sea verdadero)
	// or (o) || (por lo menos uno tiene que ser verdadero para que  los demas valores sean verdaderos)
	


	char lapiz,lapicero,cuaderno;
	cout<<"trae lapiz(s/n) ";
	cin>>lapiz;
	cout<<"trae lapicero(s/n) ";
	cin>>lapicero;
	cout<<"trae cuaderno(s/n) ";
	cin>>cuaderno;
	//puede entrar 	a mi clase si usted trae un lapiz y un lapicero
	//and (y) = el valor es verdadero si ambas son verdaderas
	//puede entrar 	a mi clase si usted trae un lapiz o un lapicero
	//or (o) = el valor es verdadero si por lo menos una es verdadera
	
	//puede entrar a mi clase si usted trae un lapiz o un lapipero y un cuaderno
	if((lapiz=='s' || lapicero=='s')&& cuaderno =='s'){
		cout<<"Ingresa"<<endl;
		
	}else{
		cout<<"Lo siento no puede Ingresar"<<endl;
	}
	*/
	
	
	
	int codigo=0;
	cout<<"Ingrese codigo de area: ";
	cin>>codigo;
	switch(codigo){
		case 501 :cout<<"Belice"<<endl;
			break;
		case 502 :cout<<"Guatemala"<<endl;
			break;
		case 503 :cout<<"El Salvador"<<endl;
			break;
		case 504 :cout<<"Honduras"<<endl;
			break;
		case 505 :cout<<"Nicaragua"<<endl;
			break;
		case 506 :cout<<"Costa Rica"<<endl;
			break;
		case 507 :cout<<"Panama"<<endl;
			break;
		default :
			cout<<"Este codigo no es de centroamerica"<<endl;
			
			
				
	}
	system("pause");
}
