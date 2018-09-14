#include <iostream>
#define MAXE 4 //Edificios
#define MAXPL 2 //Plantas
#define MAXPI 3 //Pisos

using namespace std;

// definición de la estructura de un piso
struct Tpiso {
	int m2; /* metros cuadrados del piso */
	int num_h; /* numero de habitaciones */
	float precio; /* precio en euros */
} ;
// una planta es un vector de pisos
struct Tplanta {
	int num_pisos; /* numero de pisos de la planta */
	Tpiso piso [MAXPI];
};
// un edificio es un vector de plantas
struct Tedificio {
	int num_plantas; /* numero de plantas del edificio */
	Tplanta planta [MAXPL];
};
// una calle es un vector de edificios
struct Tcalle {
	int num_edificios; /* numero de edificios de la calle */
	Tedificio edificio [MAXE];
};

int main () {
	Tcalle mi_calle;
	Tpiso p;
	int suma = 0, caro = 0;
	
	cin>>mi_calle.edificio[4].planta[1].piso[2].precio;
	//Mostrar precio piso 2 planta 1 del edificio 4
	cout<<endl<<"Piso 2, Planta 1, Edificio 4... Precio: "<<mi_calle.edificio[4].planta[1].piso[2].precio<<endl;
	
	cin>>mi_calle.edificio[2].planta[0].piso[1].m2;
	cin>>mi_calle.edificio[2].planta[0].piso[1].num_h;
	cin>>mi_calle.edificio[2].planta[0].piso[1].precio;
	//Copie en la variable p los datos del piso 1 de la planta 0 del edificio 2
	mi_calle.edificio[2].planta[0].piso[1].m2 = p.m2;
	mi_calle.edificio[2].planta[0].piso[1].num_h = p.num_h;	
	mi_calle.edificio[2].planta[0].piso[1].precio = p.precio;
	
	//Mostrar metros cuadrados totales del edifico 3
	for(int i = 0; i < MAXPI; i++){
		for(int j = 0; j < MAXPI; j++){
			suma += mi_calle.edificio[3].planta[i].piso[j].m2;
		}
	}
	cout<<endl<<"Metros: "<<suma<<endl;

	//Mostrar precio del piso mas caro de la calle
	for(int i = 0; i < MAXE; i++){
		for(int j = 0; j < MAXPL; j++){
			for(int k = 0; k < MAXPI; k++){
				if(mi_calle.edificio[i].planta[j].piso[k].precio > caro){
					caro = mi_calle.edificio[i].planta[j].piso[k].precio;
				}
			}
		}
	}
	cout<<endl<<"Precio: "<<caro<<endl;
	
	return 0;
}
