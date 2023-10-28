//Programa Libreria

#include <iostream>
using namespace std;

int main() {
    int isbn, num_pag, cant_lib = 0;
    float precio, prec_tot = 0;
    char continuar = 's';

    while (continuar != 'n') {
        cout << "Procesando Libro #" << cant_lib << endl;

        cout << "Ingrese el ISBN del libro: \n";
        cin >> isbn;

        cout << "Ingrese el número de páginas del libro: \n";
        cin >> num_pag;

        if (num_pag >= 300 && num_pag <= 500) {
            precio = 1500 + (num_pag * 5) + 150;
        } else if (num_pag > 500 && num_pag <= 550) {
            precio = 1500 + (num_pag * 5) + 250;
        } else if (num_pag > 550) {
            precio = 1500 + (num_pag * 5) + 500;
        } else {
            precio = 1500 + (num_pag * 5);
        }

        cout << "El precio del libro con ISBN " << isbn << " es de " << precio << "bs.\n" << endl;

        cant_lib++;
        prec_tot +=precio;

        cout << "Desea agregar otro libro? (S/N): \n";
        cin >> continuar;
    } // fin del ciclo

    cout << "\n";
    cout << "Procesamiento completo\n" << endl;
    cout << "Total de libros procesados:  " << cant_lib << endl;
    cout << "Precio total de libros procesados:  " << prec_tot << "bs." << endl;

    cin.get();
    cin.get();
    
}
