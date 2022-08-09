#include <iostream>
#include <stdlib.h>

using namespace std;

void codCopy(int lim);
int fibonacci(int x,int y);


int main(int argc, char** argv) {
	int bandera=0;
	int lim=0;
	do{
		//codCopy();
		system("cls");
		cout << "\n Ingrese un numero para la sucesion de fibonacci: ";
  		cin >> lim;
  		fibonacci(lim,0);
  		system("pause");
  		//codCopy(lim);
		//cout << "Repetir " ;
		
	}while(lim);
	cout << "salio";
	return 0;
}

void codCopy(int lim){
	int aux = 1, fib = 0, init;

  if(lim > 0) {
    for(init = 1; init <= lim; init++) {
      cout << "[" << fib << "] ";
      aux += fib; /* lo mismo que aux = aux + fib; */
      fib = aux - fib;
    }
  } else {
    cout << "El numero debe ser mayor a cero!!" << endl;
  }
  cout << "\n";

}

int fibonacci(int x,int y){
	
		if(x > 0){
			
			y = fibonacci(x-1,y) + fibonacci(x-2,y);
			cout << " [" <<  y << "] ";
			return x;
		}
		else 
		return 0;	
			
	
}
