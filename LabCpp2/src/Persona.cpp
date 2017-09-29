/*
 * Persona.cpp
 *
 *  Created on: 28/09/2017
 *      Author: La Fuente
 */

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private: //Atributos de tipo privado
		int edad;
		string nombre;

	public:
		Persona(int, string);//CConstructor
		void correr();
		void leer();

};
Persona::Persona(int edad, string nombre){//Inicializar Constructor, inicializando atributos
	this->edad = edad;
	this->nombre = nombre;
}

void Persona::leer(){
	cout<<"Soy "<<nombre<< " y estoy leyendo un libro"<<endl;
}
void Persona::correr(){
	cout<<"Soy "<<nombre<< " y estoy corriendo y tengo "<<edad<<" Años"<<endl;
}
// La clase main donde se instancia las clases
//Clase principal

int main(){
	Persona p1 =  Persona(16, "Rafael");
	Persona p2(20,"Alejandra");
	Persona p3(50, "Panchito");

	p1.leer();
	p1.correr();
	p3.leer();
	p3.correr();


}
