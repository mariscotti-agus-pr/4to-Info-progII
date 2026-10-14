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
    if (cuadrante[0]<=0 & cuadrante[1]<=0){
      cout << "CIII" << endl;
    } else {
      if (cuadrante[0]>0 & cuadrante[1]>0){
        cout << "CI" << endl;
      } else {
        if (cuadrante[0]>0 & cuadrante[1]<=0){
          cout << "CIV" << endl;
        } else {
          if (cuadrante[0]<=0 & cuadrante[1]>0){
            cout << "CII" << endl;
          }
        }
      }
    }
  }
  
  return 0;
}
