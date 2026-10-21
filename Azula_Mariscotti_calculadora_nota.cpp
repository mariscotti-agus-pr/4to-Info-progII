#include<iostream>
using namespace std;
float calcular_nota(float, float, int, int, int); //prototipo de la función
int ingresar_valor (int, int); //prototipo de la función pedida del ejercicio.
int main(){
    const float NOTA_MAX = 10.0; //valor constante
    const float CANT_PREGUNTAS = 22.0; //valor constante
    int cant_bien, cant_mal, cant_sr;
    float valor_pregunta_bien = NOTA_MAX/CANT_PREGUNTAS;
    const float valor_pregunta_mal = (-0,25) * valor_pregunta_bien;  //valor constante
        cout << "Cantidad de preguntas: " << CANT_PREGUNTAS << "\nNota máxima: " 
        << NOTA_MAX << "\nValores que están bien: " << valor_pregunta_bien << "\nValores que están mal: " << valor_pregunta_mal <<endl;
        do {
            cout << "Ingrese la cantidad de preguntas que respondió correctamente: "<<endl;
            cin >> cant_bien;
        } while (cant_bien<0 || cant_bien>22); //ahora el valor de cant_bien se gurdará siempre que el usuario ingrese numeros enteros entre 0 y 22.
        do {
            cout << "Ingrese la cantidad de preguntas que respondió de manera errónea: "<<endl;
            cin >> cant_mal;
        } while (cant_mal>CANT_PREGUNTAS-cant_bien || cant_mal<0); //ahora el valor de cant_mal se guardará siempre que el usuario ingrese un numero entero =22 dividido la cantidad re respuestas correctas.
        do {
            cout << "Ingrese la cantidad de preguntas que no respondió: "<<endl;
            cin >> cant_sr;
        } while (cant_sr!=CANT_PREGUNTAS-cant_bien-cant_mal); //ahora el valor de cant_sr se guardará siempre que el usuario ingrese un numero entero =22 restado la cantidad de respuestas bien restado la cantidad de respuestas mal.
            cout << "Nota final: " << calcular_nota(valor_pregunta_bien, valor_pregunta_mal, cant_bien, cant_mal, cant_sr);
    return 0;
}
float calcular_nota(float valor_bien, float valor_mal, int cant_bien, int cant_mal, int cant_sr){
    float nota_bien = valor_bien*cant_bien;
    cout<<"Puntaje que consiguió por contestar bien: "<<nota_bien <<endl;
    float nota_mal = valor_mal*cant_mal;
    cout<<"Puntaje que consiguió por contestar erróneamente: "<<nota_mal<<endl;
    float nota_potencial = cant_sr*valor_bien;
    cout<<"Puntaje que podría haber obtenido si contestaba correctamente las preguntas que dejó incompletas: "<<nota_potencial<<endl;
    return nota_bien+nota_mal;
    float nota_final;
}
int ingresar_valor(int minimo, int maximo) {
    int valor;
    do {
        cout << "Ingrese un valor entre " << minimo << " y " << maximo << endl;
        cin >> valor;
    } while (valor < minimo || valor > maximo);
    return valor;
} //función pedida en ejercicios
