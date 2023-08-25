#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Alumno
{
    char *nombreCompleto;
    int creditos;
    int semestreEquivalente;
} Alumno;

typedef struct Nodo
{
    Alumno alumno;
    struct Nodo *siguiente;
} Nodo;

Nodo crearNodo(Nodo *nuevoAlumno)
{
    nuevoAlumno = (Nodo *)malloc(sizeof(Nodo));

    if (nuevoAlumno == NULL)
    {
        printf("No se pudo asignar memoria");
    }
}

Alumno crearAlumno(Nodo *nuevoAlumno, char *nombre, int creditos, int semestresEquivalente)
{
    strcpy(nuevoAlumno->alumno.nombreCompleto, nombre);
    nuevoAlumno->alumno.creditos = creditos;
    nuevoAlumno->alumno.semestreEquivalente = semestresEquivalente;
}

void insertarNodoOrdenadoCreditos(Nodo nuevoAlumno, Nodo cabecera)
{
    Nodo actual;

    actual = cabecera;

    while (/* condition */)
    {
        /* code */
    }
}

int main()
{
    char *nombre;
    int creditos;
    int semestreEquivalente;

    Nodo *cabecera = (Nodo *)malloc(sizeof(Nodo));
    Nodo *nuevoAlumno;

    cabecera = NULL;

    crearNodo(nuevoAlumno);

    printf("Ingrese el nombre completo del alumno: ");
    scanf("%c", &nombre);
    printf("Ingrese los créditos totales del alumno: ");
    scanf("%d", &creditos);
    printf("Ingrese el número de semestre equivalente: ");
    scanf("%d", &semestreEquivalente);

    crearAlumno(nuevoAlumno, nombre, &creditos, &semestreEquivalente);
    insertarNodoOrdenadoCreditos(*nuevoAlumno, *cabecera);
    imprimrLista();

    return 0;
}
