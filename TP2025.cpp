#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Libro
{
	private:
	//excel
		string nombre;
		string area;
		string subArea;
		string autor;
		string editorial;
		int anio;
	//extra
		int estadoLibro; 		//[1]bien,[2]regular,[3]malo,[4]destruido
		bool disponibilidad;  	//[1]prestado,[2]disponible
		int estanteria; 		//[1]A-I, [2]J-Q, [3] R-Z.
		
	public:
		Libro(string,string,string,string,string,int,int,bool,int); //constructor
		void mostrarLibro(string,string,string,string,string,int,int,bool,int);
	
};

Libro::Libro(string _nombre, string _area, string _subArea, string _autor, string _editorial, int _anio, int _estadoLibro, bool _disponibilidad, int _estanteria)
{
	nombre = _nombre;
	area = _area;
	subArea = _subArea;
	autor = _autor;
	editorial = _editorial;
	anio = _anio;
	estadoLibro = _estadoLibro;
	disponibilidad = _disponibilidad;
	estanteria = _estanteria;
}

void mostrarLibro(string nombre,string area,string subArea,string autor,string editorial,int anio,int estado,bool disponibilidad,int estanteria)
{
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Area: "<<area<<endl;
	cout<<"SubArea: "<<subArea<<endl;
	cout<<"Autor: "<<autor<<endl;
	cout<<"Editorial: "<<editorial<<endl;
	cout<<"Anio: "<<anio<<endl;
	cout<<"Estado: "<<estado<<endl;
	cout<<"Prestado: "<<disponibilidad<<endl;
	cout<<"Estanteria: "<<estanteria<<endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Socio
{
	private:
	//excel
		string apellido;
		bool genero;
		string direccion; //[Nombre]
		string numTelefono;
		int edad;
		string fechaNacimiento;
		string correo;
	//extra
		bool estadoSocio; //Alta o Baja
		string fechaVencimiento;
		
	public:
		Socio(string,bool,string,string,int,string,string,bool,string);
		void mostrarSocio(string,bool,string,string,int,string,string,bool,string);
		
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//prototipo_funciones
void menu();

//F_principal
int main()
{
	//VARIABLES
	int opc;
	
	//CLASES
	Libro * p_libro = NULL;
	
	//CA
	do{
		
		menu();
		cin>>opc;
		switch (opc) 
		{
		case 1:
			//GESTION DE LIBROS
			break;
		case 2:
			//GESTION DE SOCIOS
			break;
		case 3:
			//SISTEMA DE BUSQUEDA
			break;
		case 4:
			//CONTROL DE PRESTAMOS
		case 0:
			
			break;
		default:
			
			break;
		}
		
	}while(opc!=0);
	
	return 0;	
}
////FUNCIONES IND
void menu()
{
	cout<<"[1]GESTION DE LIBROS"<<endl;
	cout<<"[2]GESTION DE SOCIOS"<<endl;
	cout<<"[3]SISTEMA DE BUSQUEDA"<<endl;
	cout<<"[4]CONTROL DE PRESTAMOS"<<endl;
}

enum class EstadoLibro {
	Bien = 1,
	Regular = 2,
	Malo = 3,
	Destruido = 4
};

enum class UbicacionEstanteria {
	A_I = 1,
	J_Q = 2,
	R_Z = 3
};
