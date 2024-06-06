//problema 2
#include <iostream>
#include <conio.h>
using namespace std;
struct datos {
    char nombres[20];
    int notas[10];
    int faltas;
} datos[9];
int main() {
    int numero, total_faltas = 0;
    float porcentaje_faltas, promedio_general = 0;
    float promedio_asignatura[8] ={0}; 
    float promedio_a[9] = {0};  
    cout << "Ingrese el n" << char(163) << "mero de alumnos: ";
    cin >> numero;
    while (numero <= 0) {
        cout << "El n" << char(163) << "mero de alumnos no es v" << char(160) << "lido." << endl;
        cout << "Ingrese el n" << char(163) << "mero de alumnos: ";
        cin >> numero;
    }
    for (int i = 0; i < numero; i++) {
        fflush(stdin);
        cout << "Ingrese el nombre del alumno n" << i + 1 << ": ";
        cin.ignore();
        cin.getline(datos[i].nombres, 20);
        int suma_notas = 0, total_faltas_alumno = 0;
        for (int j = 0; j < 8; j++) {
            cout << "Ingrese la nota del curso n" << j + 1 << ": ";
            cin >> datos[i].notas[j];
            while (datos[i].notas[j] < 0 || datos[i].notas[j] > 20) {
                cout << "La nota ingresada no es v" << char(160) << "lida." << endl;
                cout << "Ingrese la nota del curso n" << j + 1 << ": ";
                cin >> datos[i].notas[j];
            }
            if (datos[i].notas[j] == 0) {
                total_faltas_alumno++;
            }
            suma_notas += datos[i].notas[j];
            promedio_asignatura[j] += datos[i].notas[j];
        }
        datos[i].faltas = total_faltas_alumno;
        promedio_a[i] = suma_notas / 8;
        promedio_general += promedio_a[i];
        total_faltas += total_faltas_alumno;
    }
    promedio_general /= numero;
    for (int i = 0; i < 8; i++) {
        promedio_asignatura[i] /= numero;
    }
    cout << "Promedio general de la clase: " << promedio_general << endl;
    for (int i = 0; i<8; i++) {
        cout << "Promedio de la asignatura " << i + 1 << ": " << promedio_asignatura[i] << endl;
    }
    for (int i = 0; i<numero; i++) {
        porcentaje_faltas = (float(datos[i].faltas) * 100) / 8;
        cout << "El porcentaje de faltas del alumno n" <<i+1<< " es: " << porcentaje_faltas << "%" << endl;
        cout << "El promedio de notas del alumno " <<i+1<< " es: " << promedio_a[i] << endl;
    }
    getch();
    return 0;
}


