#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <windows.h>
#include <conio.h>
using namespace std;
int main () {
fstream archivo ("hoja5.txt");	
int a,b,a1,a2,a3,prom1,prom2,prom3,prom4;
do{
system ("cls");
cout<<"1.-VIP "<<endl;
cout<<"2.-platea"<<endl;
cout<<"3.-popular"<<endl;
cout<<"4.- monto"<<endl;
cout<<"5.-salir del programa"<<endl;
cin>>a;
	cin.ignore();
	
	if ((a>=1)&&(a<=5))
		
		{
	if(!archivo.is_open())
			{
			archivo.open ("hoja5.txt",ios::out | ios::app);
			
		}






switch (a){
case 1:
			cout<<"<------VIP------>"<<endl;
	cout<<"cuantas entradas"<<endl;
 
	cin>>b;
	    archivo<<"<------VIP------>"<<endl;
	  archivo<<"cuantas entradas: "<<b<<endl;
	prom1=b*350;
	cout<<"1.- es socio"<<endl;
	cout<<"2.- no es socio"<<endl;
	cin>>a1;
    switch (a1){
    	case 1:
    
    	
    		prom2=prom1-(prom1*0.08);
    	cout<<"descuento de 8% por ser socio el  total es "<<prom2<<endl;
    	prom2=prom1-(prom1*0.08);
    	archivo<<"descuento de 8% por ser socio el  total es "<<prom2<<endl;
    	if ((b>=3)&&(b<=6)){
    		
    		cout<<"descuento del 5%: total a pagar de las entradas"<<prom2-(prom2*0.05)<<endl;
    		
    	}
    		if ((b>=3)&&(b<=6)){
    		
    		archivo<<"descuento del 5%: total a pagar de las entradas"<<(prom2)-(prom2*0.05)<<endl;
    		
    	}
    	if ((b>=7)&&(b<=9)){
    		cout<<"descuento del 7.5%: total a pagar de las entradas"<<prom2-(prom2*0.075)<<endl;
    		
    	}
    		if ((b>=7)&&(b<=9)){
    		archivo<<"descuento del 7.5%: total a pagar de las entradas"<<prom2-(prom2*0.075)<<endl;
    		
    	}
    	if (b>9){
    		cout<<"descuento del 10%:total a pagar de las entradas "<<(prom2)-(prom2*0.1)<<endl;
    	}
    		if (b>9){
    		archivo<<"descuento del 10%:total a pagar de las entradas "<<prom2-(prom2*0.1)<<endl;
    	}
    	if ((b>=1)&&(b<=2))
    	cout<<"el total a pagar por las entradas es"<<prom2<<endl;
    	if ((b>=1)&&(b<=2))
    	archivo<<"el total a pagar por las entradas es"<<prom2<<endl;
    	
    
    break;
    case 2:
    
    	cout<<"descuento de 0% por no ser socio el  total es "<<prom1<<endl;
    	if ((b>=3)&&(b<=6)){
    		
    		cout<<"descuento del 5%: total a pagar de las entradas"<<prom2-(prom2*0.05)<<endl;
    		
    	}
    	if ((b>=7)&&(b<=9)){
    		cout<<"descuento del 7.5%: total a pagar de las entradas"<<prom2-(prom2*0.075)<<endl;
    		
    	}
    	if (b>9){
    		cout<<"descuento del 10%:total a pagar de las entradas "<<prom2-(prom2*0.1)<<endl;
    	}
    	if ((b>=1)&&(b<=2)){
    	
    	cout<<"el total a pagar por las entradas es"<<prom1<<endl;
    		
	
}
	archivo<<"descuento de 0% por no ser socio el  total es "<<prom1<<endl;
    	if ((b>=3)&&(b<=6)){
    		
    		archivo<<"descuento del 5%: total a pagar de las entradas"<<prom2-(prom2*0.05)<<endl;
    		
    	}
    	if ((b>=7)&&(b<=9)){
    		archivo<<"descuento del 7.5%: total a pagar de las entradas"<<prom2-(prom2*0.075)<<endl;
    		
    	}
    	if (b>9){
    		archivo<<"descuento del 10%:total a pagar de las entradas "<<prom2-(prom2*0.1)<<endl;
    	}
    	if ((b>=1)&&(b<=2)){
    	
    	archivo<<"el total a pagar por las entradas es"<<prom1<<endl;
    		
	
}
}
break ;
case 2:
	cout<<"<------platea------>"<<endl;
 	archivo<<"<------platea------>"<<endl;	
		cout<<"cuantas entradas"<<endl;
	cin>>b;
		archivo<<"cuantas entradas: "<<b<<endl;
	prom3=b*130;
	cout<<"1.- es socio"<<endl;
	cout<<"2.- no es socio"<<endl;
	cin>>a2;
    switch (a2){
    	case 1:
    		prom2=prom3-(prom3*0.08);
    	cout<<"descuento de 8% por ser socio el  total es "<<prom2<<endl;
    		prom2=prom3-(prom3*0.08);
    	archivo<<"descuento de 8% por ser socio el  total es "<<prom2<<endl;
    	if ((b>=3)&&(b<=6)){
    		
    		cout<<"descuento del 5%: total a pagar de las entradas"<<prom2-(prom2*0.05)<<endl;
    		
    	}
    		if ((b>=3)&&(b<=6)){
    		
    		archivo<<"descuento del 5%: total a pagar de las entradas"<<prom2-(prom2*0.05)<<endl;
    		
    	}
    	if ((b>=7)&&(b<=9)){
    		cout<<"descuento del 7.5%: total a pagar de las entradas"<<prom2-(prom2*0.075)<<endl;
    		
    	}
    	if ((b>=7)&&(b<=9)){
    		archivo<<"descuento del 7.5%: total a pagar de las entradas"<<prom2-(prom2*0.075)<<endl;
    		
    	}
    	if (b>9){
    		cout<<"descuento del 10%:total a pagar de las entradas "<<prom2-(prom2*0.1)<<endl;
    	}

	if (b>9){
    		archivo<<"descuento del 10%:total a pagar de las entradas "<<prom2-(prom2*0.1)<<endl;
    	}

    	if ((b>=1)&&(b<=2))
    	cout<<"el total a pagar por las entradas es"<<prom2<<endl;
    	
    		if ((b>=1)&&(b<=2))
    	archivo<<"el total a pagar por las entradas es"<<prom2<<endl;
    	
    
    break;
    case 2:
    
    	cout<<"descuento de 0% por no ser socio el  total es "<<prom1<<endl;
    	if ((b>=3)&&(b<=6)){
    		
    		cout<<"descuento del 5%: total a pagar de las entradas"<<prom2-(prom2*0.05)<<endl;
    		
    	}
    	if ((b>=7)&&(b<=9)){
    		cout<<"descuento del 7.5%: total a pagar de las entradas"<<prom2-(prom2*0.075)<<endl;
    		
    	}
    	if (b>9){
    		cout<<"descuento del 10%:total a pagar de las entradas "<<prom2-(prom2*0.1)<<endl;
    	}
    	if ((b>=1)&&(b<=2)){
    	
    	cout<<"el total a pagar por las entradas es"<<prom1<<endl;
    		
	
	
}
	archivo<<"descuento de 0% por no ser socio el  total es "<<prom1<<endl;
    	if ((b>=3)&&(b<=6)){
    		
    		archivo<<"descuento del 5%: total a pagar de las entradas"<<prom2-(prom2*0.05)<<endl;
    		
    	}
    	if ((b>=7)&&(b<=9)){
    		archivo<<"descuento del 7.5%: total a pagar de las entradas"<<prom2-(prom2*0.075)<<endl;
    		
    	}
    	if (b>9){
    		archivo<<"descuento del 10%:total a pagar de las entradas "<<prom2-(prom2*0.1)<<endl;
    	}
    	if ((b>=1)&&(b<=2))
    	
    	archivo<<"el total a pagar por las entradas es"<<prom1<<endl;
    		
	

	
}


break ;
case 3:
	
			cout<<"<------popular------>"<<endl;
		cout<<"cuantas entradas"<<endl;
	 
	cin>>b;
			archivo<<"<------popular------>"<<endl;
	 archivo<<"cuantas entradas: "<<b<<endl;
	prom4=b*50;
	cout<<"1.- es socio"<<endl;
	cout<<"2.- no es socio"<<endl;
	cin>>a3;
    switch (a3){
    	case 1:
    		prom2=prom4-(prom4*0.08);
    	cout<<"descuento de 8% por ser socio el  total es "<<prom2<<endl;
    	if ((b>=3)&&(b<=6)){
    		
    		cout<<"descuento del 5%: total a pagar de las entradas"<<prom2-(prom2*0.05)<<endl;
    		
    	}
    	if ((b>=7)&&(b<=9)){
    		cout<<"descuento del 7.5%: total a pagar de las entradas"<<prom2-(prom2*0.075)<<endl;
    		
    	}
    	if (b>9){
    		cout<<"descuento del 10%:total a pagar de las entradas "<<prom2-(prom2*0.1)<<endl;
    	}
    	if ((b>=1)&&(b<=2))
    	cout<<"el total a pagar por las entradas es"<<prom2<<endl;
    	
    	prom2=prom4-(prom4*0.08);
    	archivo<<"descuento de 8% por ser socio el  total es "<<prom2<<endl;
    	if ((b>=3)&&(b<=6)){
    		
    		archivo<<"descuento del 5%: total a pagar de las entradas"<<prom2-(prom2*0.05)<<endl;
    		
    	}
    	if ((b>=7)&&(b<=9)){
    		archivo<<"descuento del 7.5%: total a pagar de las entradas"<<prom2-(prom2*0.075)<<endl;
    		
    	}
    	if (b>9){
    		archivo<<"descuento del 10%:total a pagar de las entradas "<<prom2-(prom2*0.1)<<endl;
    	}
    	if ((b>=1)&&(b<=2))
    	archivo<<"el total a pagar por las entradas es"<<prom2<<endl;
    	

    break;
    case 2:
    
    	cout<<"descuento de 0% por no ser socio el  total es "<<prom1<<endl;
    	if ((b>=3)&&(b<=6)){
    		
    		cout<<"descuento del 5%: total a pagar de las entradas"<<prom2-(prom2*0.05)<<endl;
    		
    	}
    	if ((b>=7)&&(b<=9)){
    		cout<<"descuento del 7.5%: total a pagar de las entradas"<<prom2-(prom2*0.075)<<endl;
    		
    	}
    	if (b>9){
    		cout<<"descuento del 10%:total a pagar de las entradas "<<prom2-(prom2*0.1)<<endl;
    	}
    	if ((b>=1)&&(b<=2))
    	
    	cout<<"el total a pagar por las entradas es"<<prom1<<endl;
    		
	

archivo<<"descuento de 0% por no ser socio el  total es "<<prom1<<endl;
    	if ((b>=3)&&(b<=6)){
    		
    		archivo<<"descuento del 5%: total a pagar de las entradas"<<prom2-(prom2*0.05)<<endl;
    		
    	}
    	if ((b>=7)&&(b<=9)){
    		archivo<<"descuento del 7.5%: total a pagar de las entradas"<<prom2-(prom2*0.075)<<endl;
    		
    	}
    	if (b>9){
    		archivo<<"descuento del 10%:total a pagar de las entradas "<<prom2-(prom2*0.1)<<endl;
    	}
    	if ((b>=1)&&(b<=2))
    	
    	archivo<<"el total a pagar por las entradas es"<<prom1<<endl;



}
}



}
archivo.close ();
getch ();


}while (a!=5);

}