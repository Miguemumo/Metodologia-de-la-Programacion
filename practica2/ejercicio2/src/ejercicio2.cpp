/**
BLANCA ABRIL GONZÁLEZ GRUPO E3
Ejercicio 2:

Programe una función llamada combinarSuma que reciba como argumento dos
vectores C de tipo Valor y produce como resultado otro vector del mismo tipo.

Es decir, cada objeto de la clase Valor se usa para indicar una posición de una
matriz, caracterizada por la fila y columna en que se encuentra y el valor almacenado
en dicha posición. El resultado obtenido debe cumplir las siguientes caracterı́sticas:

• si un objeto de la clase Valor aparece en un único vector de entrada, entonces se
almacena directamente en el vector de salida, en la posición que le corresponda
• si en ambos vectores hay dos objetos de clase Valor que se refieren a una misma
posición (tienen el mismo valor para fila y columna), entonces el objeto a alma-
cenar en el vector de salida tendrá el mismo valor para estos dos datos miembro,
pero el valor para el dato miembro valor se obtendrá de la suma de este dato en
ambos objetos
• pueden usarse funciones auxiliares si se considera oportuno

**/

#include <iostream>
#include <cmath>
#include "valor.h"
#include "utilidades.h"
using namespace std;

int main(){
    int tam1,tam2,fila,columna;
    double valor;

    cout << "Nueva coleccion" << endl;
    cout << "¿Cuantos elementos vas a introducir? ";
    cin >> tam1;
    Valor array1[tam1];
    pedirValores(array1,tam1);

    cout << "Nueva coleccion" << endl;
    cout << "¿Cuantos elementos vas a introducir? ";
    cin >> tam2;
    Valor array2[tam2];
    pedirValores(array2,tam2);

    cout << "--------------- CASO PRUEBA ---------------" << endl;
    for(int j=0;j<tam1;j++){
      array1[j].mostrar();
      if(j<tam1-1){
        cout << " -- ";
      }
    }
    cout << endl;
    for(int k=0;k<tam2;k++){
      array2[k].mostrar();
      if(k<tam2-1){
        cout << " -- ";
      }
    }
    cout << endl;
    cout << "---------------------------------------------" << endl;
    Valor arraysuma[tam1+tam2];
    combinarSuma(array1,tam1,array2,tam2,arraysuma);
    for(int k=0;k<tam1;k++){
      arraysuma[k].mostrar();
    }
    cout << endl;
}