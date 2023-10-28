//Programa Calculo Estudiantil


	#include <iostream>
using namespace std;

int main(){
    int estud = 1;
    int estud_t = 0;
    float eval;
    float prom_secc = 0;
    int nota_perfect, nota_int = 0;


    
    while (estud <= 35){
        cout << "Procesando Estudiante #" << estud_t + 1 << endl;
           eval= -1;
           while (eval < 0 || eval > 100){
           	cout << "Ingrese la nota (0-100 pts):  " << endl;
           	cin >> eval;
		   }
        
        estud_t++;

        if (eval == 100){
            nota_perfect++;
        }

        if (eval < 60){
            nota_int++;
        }

        prom_secc += eval;
        estud++;
    }

    prom_secc = prom_secc / estud_t;

    printf("Promedio de notas de la sección: %2.f\n", prom_secc);
    cout << "Número de estudiantes con calificación perfecta: " << nota_perfect << endl;
    cout << "Número de estudiantes con nota por debajo de 60ptos: " << nota_int << endl;

    cin.get();
    cin.get();

    return 0;
}
