#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

//funciones
double ej1(int x);
int ej2(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4);
double fac(int i);
double distancia(int x1,int x2,int y1,int y2);
double semiperimetro(double a,double b,double c);

//main
int main(int argc,char* argv[]){

int opc=0;

cout << "Menu: " << endl << "1...Ej 1" << endl << "2...Ej 2" << endl;
cout << endl << "Ingrese el numero del que quiere entrar: " << endl;
cin >> opc;
cout << endl;

if(opc==1){

int x=0;

cout << "Ingrese x: " << endl;
cin >> x;
cout << endl;

double answer=ej1(x);

cout << "Respuesta: " << answer << endl;

}else if(opc==2){

double x1,x2,x3,x4,y1,y2,y3,y4;

cout << "Primer punto" << endl;
cout << "x: ";
cin >> x1;
cout << endl;
cout << "y: ";
cin >> y1;
cout << endl;
cout << endl;

cout << "Segundo punto" << endl;
cout << "x: ";
cin >> x2;
cout << endl;
cout << "y: ";
cin >> y2;
cout << endl;
cout << endl;

cout << "Primer punto" << endl;
cout << "x: ";
cin >> x3;
cout << endl;
cout << "y: ";
cin >> y3;
cout << endl;
cout << endl;

cout << "Primer punto" << endl;
cout << "x: ";
cin >> x4;
cout << endl;
cout << "y: ";
cin >> y4;
cout << endl;
cout << endl;

}else{
 cout << "Opcion no valida" << endl;
}

return 0;
}


//funcion primer ejer.
double ej1(int x){

 double n=2,resp=1,temp;;


 for(int i=1;i<=n;i++){

if(i==1){
 temp=( pow(x,i) / 1.0  );
}else{
 temp=( pow(x,i) / fac(i)  );
}

 resp += temp;

 }

 return resp;
}

//funcion segundo ejer.
int ej2(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4){

double temp;

cout << "Los lados del trapeziode miden: " << endl;
temp = distancia(x1,x2,y1,y2);
cout << "Lado 1: " << temp << endl << endl;
temp = distancia(x2,x3,y2,y3);
cout << "Lado 2: " << temp << endl << endl;
temp = distancia(x3,x4,y3,y4);
cout << "Lado 3: " << temp << endl << endl;
temp = distancia(x4,x1,y4,y1);
cout << "Lado 4: " << temp << endl << endl;

cout << "Los lados del triengulo 1 (trinagulo de arriba) miden: " << endl;
temp = distancia(x1,x2,y1,y2);
cout << "Lado 1: " << temp << endl << endl;
temp = distancia(x2,x3,y2,y3);
cout << "Lado 2: " << temp << endl << endl;
temp = distancia(x3,x1,y3,y1);
cout << "Lado 3: " << temp << endl << endl;

cout << "Los lados del triengulo 2 (trinagulo de abajo) miden: " << endl;
temp = distancia(x1,x4,y1,y4);
cout << "Lado 1: " << temp << endl << endl;
temp = distancia(x4,x3,y4,y3);
cout << "Lado 2: " << temp << endl << endl;
temp = distancia(x3,x1,y3,y1);
cout << "Lado 3: " << temp << endl << endl;

double a,b,c;
a=distancia(x1,x2,y1,y2);
b=distancia(x2,x3,y2,y3);
c=distancia(x3,x1,y3,y1);
temp = semiperimetro(a,b,c);
cout << "Semiperimetro triangulo 1: " << temp << endl;
a=distancia(x1,x4,y1,y4);
b=distancia(x4,x3,y4,y3);
c=distancia(x3,x1,y3,y1);
temp = semiperimetro(a,b,c);
cout << "Semiperimetro triangulo 2: " << temp << endl;
a=distancia(x1,x2,y1,y2);
b=distancia(x2,x3,y2,y3);
c=distancia(x3,x1,y3,y1);
cout << "Perimetro triangulo 1: " << a+b+c  << endl;
a=distancia(x1,x4,y1,y4);
b=distancia(x4,x3,y4,y3);
c=distancia(x3,x1,y3,y1);
cout << "Perimetro triangulo 2: " << a+b+c  << endl << endl;



return 0;
}

//semiperimetro
double semiperimetro(double a,double b,double c){

double s;

s = (a+b+c)/2.0;

return s;
}

//distancia
double distancia(int x1,int x2,int y1,int y2){

double resp;

resp = sqrt( pow( (x2-x1) , 2 ) + pow( (y2-y1) , 2 )  );

return resp;
}

//funcion fact.
double fac(int i){

int acum=i;

 for(int j=(i-1);j>0;j--){
 acum = acum*j;
 }

return acum;
}
