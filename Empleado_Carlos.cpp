#include <iostream>
using namespace std;

class Empleado : Persona {
	private : string cod_empleado, puesto;
	
	Empleado (){
	}
	Empleado (string nom, string ape, string dir, int tel, string cod_emp, string puesto)
	: Persona (nom,ape,dir,tel){
		cod_empleado= cod_emp;
		puesto= puesto;
	}
	
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion =dir;}
	void setTelefono(int tel){telefono = tel;}
	void setCod_empleado(string cod_emp){cod_empleado = cod_emp;}
	void setPuesto(string puesto){puesto=puesto;}
	
	string getCod_empleado(){return Cod_empleado;}
	string getPuesto(){return Puesto;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelfono(){return telefono;}
	
	void mostrar (){
		cout<<"_________"<<endl;
		cout<<cod_empleado<<","<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}
};
};

