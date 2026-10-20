//...cree un arreglo con 5 espacios y almacene en el mismo 5 números reales ingresados por el
usuario. Muestre el contenido del arreglo por pantalla. 

#include <iostream>
using namespace std;
int main() {
    int arr[5];
    for (int i=0; i<5; i++){
        cin>> arr[i];
    }
    for (int i=0; i<5; i++){
        cout<< arr[i] << endl;
    }
    return 0;
}