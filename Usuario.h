//Hortencia Alejandra Ramírez Vázquez A01750150
//Sabrina Nicole Rodríguez Salgado A01745197

//Clase Usuario \
24 de noviembre

#include <iostream>
using namespace std;

class Usuario{
  private:
    string nombre = "", correoElectronico = "", nombreUsuario = "", contrasena = "";
    int edad;

  public:
    Usuario() = default;
    Usuario(string nombre, string correoElectronico, string nombreUsuario, string contrasena, int edad){
    this -> nombre = nombre;
    this -> correoElectronico = correoElectronico;
    this -> nombreUsuario = nombreUsuario;
    this -> contrasena = contrasena;
    this -> edad = edad;
      
    }

    void setNombre(string nombre){
      this -> nombre = nombre;
    }

    void setCorreoElectronico(string correoElectronico){
      this -> correoElectronico = correoElectronico;
    }

    void setNombreUsuario(string nombreUsuario){
      this -> nombreUsuario = nombreUsuario;
    }

    void setContrasena(string contrasena){
      this -> contrasena = contrasena;
    }

    void setEdad(int edad){
      this -> edad = edad;
    }

    void ingresar(string nombreUsuario, string contrasena){
      if (this -> nombreUsuario == nombreUsuario && this -> contrasena == contrasena){
        cout<< "Acceso permitido\n" << endl;
      }
      else{
        cout<< "Acceso denegado\n" << endl;
      }
    }

    void modificarContrasena(string contrasena, string _contrasena){
      if (this ->contrasena == contrasena){
        this -> contrasena = _contrasena;
        cout<< "El cambio en la contrasena se realizo exitosamente\n" << endl; 
      }
      else{
          cout<< "El cambio de la contrasena no se pudo realizar\n" <<endl;
      }
    }

    void darAlta(Usuario usuario, string _nombre, string _correoEletronico, string _nombreUsuario, string _contrasena,int _edad){


      usuario.setNombre(_nombre);
      usuario.setCorreoElectronico(_correoEletronico);
      usuario.setNombreUsuario(_nombreUsuario);
      usuario.setContrasena(_contrasena);
      usuario.setEdad(_edad);

      cout<< "Usuario creado exitosamente\n" <<endl;

    }

    void imprimir(){
        cout<<"\nDatos del usuario\n" <<endl;
        cout<< "Nombre: " << nombre << endl;
        cout<< "Nombre Usuario: " << nombreUsuario << endl;
        cout<< "Correo Eletronico: " << correoElectronico <<endl;
        cout<< "Contrasena: " << contrasena << endl;
        cout<< "Edad: " << edad << endl;

    }

};