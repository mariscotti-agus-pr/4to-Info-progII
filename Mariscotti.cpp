#include <iostream>
using namespace std;
int main () {
  int N;
  do { 
    cout << "ingrese un numero para las filas de la mat" << endl;
    cin >> N;
  } while (N<2);
  //Carga el valor de N
  int mat[N][2]; // N= las filas de la matriz
  int vector;
  int cuadrante [2];
  for (int i=0;i<N; i++){
    for (int j=0; j<2; j++){
      cout <<"ingrese num"<<endl;
      cin>>mat [i][j];
    }
  } //carga los numeros de la matriz
  for (int i=0; i<N; i++){
    vector=0;
    for (int j=0; j<2; j++){
      vector= vector+mat[i][j];
      if (N==2){
        cuadrante[i]=vector;  // suma las filas de la matriz (crea los vectores)
      }
      
    }
    cout<< vector << endl;
  }
  if (N==2){
   cout << "N=2 xd" << endl;
  } //para mostrar a que cuadrante pertenecen ambos vectores (solo si N=2)
  
  return 0;
}
