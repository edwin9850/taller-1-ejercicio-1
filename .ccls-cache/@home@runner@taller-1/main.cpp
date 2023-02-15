/*
autor: edwin sebastian pardo salamanca

1.- Crear un array con 10 elementos
2.- Crear una función para generar números aleatorios entre 0 y 25
3.- Llenar el array con 10 números aleatorios
4.- Crear un puntero
5.- Imprimir el contenido del array usando el puntero
6.- Imprimir las direcciones del contenido del array usando el puntero.
*/
  
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void numeros_aleatorios(int array[]);
void apuntador(int array[]);

int main() {
  int array[10], opcion;

  do {
    cout << "escoga una opcion" << endl;
    cout << "1. numeros aleatorios y llenar el vector" << endl;
    cout << "2. mostrar numeros" << endl;
    cout << "3. salir " << endl << endl;
    cin >> opcion;

    switch (opcion) {
    case 1:
    
      numeros_aleatorios(array);
      cout << endl << endl;
      break;
    case 2:
       apuntador( array);
       cout << endl << endl;
      break;

    case 3:
      return 0;

      break;

    }
  } while (opcion != 3);
}

void numeros_aleatorios(int array[]) {

  /*  cout << "cuantos numeros quiere: ";
    cin >> n; */
  srand(time(NULL));
  for (int i = 0; i < 10; i++) {
    array[i] = rand() % 26;
  }
  for (int j = 0; j < 10; j++) {
    cout << "su numero [" << j + 1 << "] es " << array[j] << endl;
  }
}

void apuntador(int array[]){

  int *puntero;
for(int i=0;i<10;i++){
  puntero = &array[i];
cout<<"el numero es ["<<i+1<<"] "<<array[i]<<endl;
  cout<<"el puntero es ["<<i+1<<"] "<<puntero<<endl;
  cout<<"la dirrecion es ["<<i+1<<"] "<<*puntero<<endl<<endl;
}
  
}


