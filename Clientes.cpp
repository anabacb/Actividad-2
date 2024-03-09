#include "Actividad 2-Persona.cpp"
#include<iostream>
using namespace std;

class Cliente : Persona {
	
	//Atributos
	private : string nit;
	
	//Constructor
	public : 
	Cliente (){
	}
	Cliente (string nom, string ape, string dir, int tel, string n) : Persona(nom, ape, dir, tel){
		nit = n;
	}
	
	//Metodos
	//set (modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion =dir;}
	void setTelefono(int tel){telefono = tel;}
	
	//Get (Mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelfono(){return telefono;}
	
	void mostrar (){
		cout<<"_________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}
};


