#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std ;
int main (){

int a,op1,op2,op3,op4,prom1,prom2,prom3,op5;
do{

system ("cls");
cout<<" ______________ "<<endl;
cout<<"|   CATEGORIA  |"<<endl;
cout<<"|1.-comercial  |"<<endl;
cout<<"|2.-Residencial|"<<endl;
cout<<"----------------"<<endl;
cout<<"3.-Reporte"<<endl;
cout<<"4.-Salir"<<endl;
cin>>op1;
switch (op1){
	case 1:
		cout<<"ZONA: "<<endl;
		cout<<"1.-A "<<endl;
		cout<<"2.-B "<<endl;
		cin>>op2;
		switch (op2){
			case 1:
				cout<<"TIPO: "<<endl;
				cout<<"1.-Terreno"<<endl;
				cout<<"2.-Casa   "<<endl;
				cout<<"3.-Departamento "<<endl;
				cin>>op3;
					 switch (op3){
				 	case 1:
				 	cout<<"precio x mtr cuadrado: $2200 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom1=a*2200;
				 	cout<<"el total es : $"<<prom1;
				 	break;
				 	case 2:
				 	cout<<"precio x mtr cuadrado: $2500 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom2=a*2500;
				    cout<<"el total es : $"<<prom2;
				    break;
				    case 3:
				    cout<<"precio x mtr cuadrado: $2100 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom3=a*2100;
				    cout<<"el total es : $"<<prom3;
				}
				break;
				case 2:
				cout<<"TIPO: "<<endl;
				cout<<"1.-Terreno"<<endl;
				cout<<"2.-Casa   "<<endl;
				cout<<"3.-Departamento "<<endl;
				cin>>op4;	
				 
			
				    switch (op4){
				    	case 1:
				 	cout<<"precio x mtr cuadrado: $1300 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom1=a*1300;
				 	cout<<"el total es : $"<<prom1;
				 	break;
				 	case 2:
				 	cout<<"precio x mtr cuadrado: $1500 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom2=a*1500;
				    cout<<"el total es : $"<<prom2;
				    break;
				    case 3:
				    cout<<"precio x mtr cuadrado: $1200 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom3=a*1200;
				    cout<<"el total es : $"<<prom3;	
				    		
				    }	
				    
				 
				 
		}
break;
case 2:
cout<<"ZONA: "<<endl;
		cout<<"1.-A "<<endl;
		cout<<"2.-B "<<endl;
		cout<<"3.-c "<<endl;
		cin>>op2;
		switch (op2){
			case 1:
				cout<<"TIPO: "<<endl;
				cout<<"1.-Terreno"<<endl;
				cout<<"2.-Casa   "<<endl;
				cout<<"3.-Departamento "<<endl;
				cin>>op3;
					 switch (op3){
				 	case 1:
				 	cout<<"precio x mtr cuadrado: $2100 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom1=a*2100;
				 	cout<<"el total es : $"<<prom1;
				 	break;
				 	case 2:
				 	cout<<"precio x mtr cuadrado: $2500 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom2=a*2500;
				    cout<<"el total es : $"<<prom2;
				    break;
				    case 3:
				    cout<<"precio x mtr cuadrado: $2100 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom3=a*2100;
				    cout<<"el total es : $"<<prom3;
				}
				break;
				case 2:
				cout<<"TIPO: "<<endl;
				cout<<"1.-Terreno"<<endl;
				cout<<"2.-Casa   "<<endl;
				cout<<"3.-Departamento "<<endl;
				cin>>op4;	
				
				    switch (op4){
				    	case 1:
				 	cout<<"precio x mtr cuadrado: $1500 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom1=a*1500;
				 	cout<<"el total es : $"<<prom1;
				 	break;
				 	case 2:
				 	cout<<"precio x mtr cuadrado: $1600 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom2=a*1600;
				    cout<<"el total es : $"<<prom2;
				    break;
				    case 3:
				    cout<<"precio x mtr cuadrado: $1300 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom3=a*1300;
				    cout<<"el total es : $"<<prom3;	
				    		
				    }	
				    
				break ;
				case 3:
					cout<<"TIPO: "<<endl;
				cout<<"1.-Terreno"<<endl;
				cout<<"2.-Casa   "<<endl;
				cout<<"3.-Departamento "<<endl;
				cin>>op5;		
					    switch (op5){
				    	case 1:
				 	cout<<"precio x mtr cuadrado: $1100 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom1=a*1100;
				 	cout<<"el total es : $"<<prom1;
				 	break;
				 	case 2:
				 	cout<<"precio x mtr cuadrado: $1300 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom2=a*1300;
				    cout<<"el total es : $"<<prom2;
				    break;
				    case 3:
				    cout<<"precio x mtr cuadrado: $1000 "<<endl;
				 	cout<<"MTS cuadrados? "<<endl;
				 	cin>>a;
				 	prom3=a*1000;
		
			           cout<<"el total es : $"<<prom3;	
			}
		}	
	break;
	case 3:
		system ("cls");
		cout<<" <--------------REPORTE--------------->"<<endl;
		cout<<"categoria \t"<<"zona \t"<<"tipo \t"<<endl;
		cout<<"comercial \t"<<"A    \t"<<"Terreno \t"<<a*1300<<endl;
		cout<<"Residencial \t"<<"A   \t"<<"Terreno \t"<<a*2200<<endl;
		
		
}
getch ();
}while  (op1!=4);

}