//CREAMOS UN CPP PARA LOS SIGUIENTES CONSTRUCTORES//
#include "pch.h"
#include "ESTUDIANTES.h"


ESTUDIANTES::ESTUDIANTES()
{
	// DECLARAMOS LOS SIGUIENTES OBJETOS PARA CONECTAR EL FORMULARIO CON LA BASE DE DATOS//
	this->ConnectionString = "datasource=localhost; username=root; password=Anthony12345; database=registroescuela;";
	this->conn = gcnew MySqlConnection(this->ConnectionString);     
}

	void ESTUDIANTES::AbrirConexion()
	{
		this->conn->Open();           //METODO PARA ABRIR LA CONEXION CON LA BASE DE DATOS//
	}

	void ESTUDIANTES::CerrarConexion()
	{
		this->conn->Close();         //METODO PARA CERRAR LA CONEXION CON LA BASE DE DATOS//
	}

	DataTable^ ESTUDIANTES::getData() //METODO PARA CAPTURAR DATOS DE LA BASE DE DATOS//
	{
		String^ sql = "Select * from estudiantes"; //SELECCIONAMOS LA TABLA DE DATOS TAL CUAL LA TENEMOS EN LA BASE DE DATOS//
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn); 
		MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor); //ADAPTADOR DE DATOS//
		DataTable^ tabla = gcnew DataTable(); 
		data->Fill(tabla);//LLENAMOS LA TABLA CON LOS DATOS QUE YA ADAPTAMOS CON EL DATA//
		return tabla;
	}

	void ESTUDIANTES::Insertar( String^n, String^e, String^g, String^p, String^ f, String^ m, String^ c, String^ d)//METODO PARA INSERTAR DATOS EN LA BASE DE DATOS//
	{
		String^ sql = "insert into estudiantes(nombre, edad, género, programación, física, matemáticas, cálculo, estadística) values ( '"+n+"','"+e+"', '"+g+"', '"+p+"', '" + f + "','" + m + "', '" + c + "', '" + d + "')";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
		MySqlDataReader^ dataReader;


		try
		{
			cursor->ExecuteNonQuery();

		}
		catch (Exception^ e)
		{
			using namespace System::Windows::Forms;
			using namespace System::Data;
			using namespace System::Drawing;
			MessageBox::Show(e->Message);
		}
	}

	void ESTUDIANTES::Modificar(String^ i, String^n, String^ e, String^ g, String^ p, String^ f, String^ m, String^ c, String^ d, String^ ref) //METODO PARA MODIFICAR DATOS EN LA BASE DE DATOS//
	{
		String^ sql = "update estudiantes set CLAVE='" + i + "', NOMBRE = '" + n + "',  EDAD = '" + e + "', GÉNERO = '" + g + "', PROGRAMACIÓN = '" + p + "', FÍSICA = '" + f + "', MATEMÁTICAS = '" + m + "', CÁLCULO = '" + c + "', ESTADÍSTICA = '" + d + "' where CLAVE = '" + ref + "'";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
			try
		{
			using namespace System::Windows::Forms;
			using namespace System::Data;
			using namespace System::Drawing;
			cursor->ExecuteNonQuery();

		}
			catch (Exception^ e)
			{
				using namespace System::Windows::Forms;
				using namespace System::Data;
				using namespace System::Drawing;
				MessageBox::Show(e->Message);
			}

	}

	void ESTUDIANTES::Eliminar(String^ CLAVE)  //METODO PARA ELIMINAR UN REGISTRO EN LA BASE DE DATOS//
	{
		String^ sql = "delete from estudiantes where CLAVE = '" + CLAVE + "'";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
		try
		{
			using namespace System::Windows::Forms;
			using namespace System::Data;	
			using namespace System::Drawing;
			cursor->ExecuteNonQuery();
			using namespace System::Windows::Forms;
			using namespace System::Data;
			using namespace System::Drawing;
			MessageBox::Show("¡Eliminado Correctamente");

		}
		catch (Exception^ e)
		{
			using namespace System::Windows::Forms;
			using namespace System::Data;
			using namespace System::Drawing;
			MessageBox::Show(e->Message);
		}
	}

	
	