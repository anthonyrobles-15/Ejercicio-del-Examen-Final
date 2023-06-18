#pragma once
#include "ESTUDIANTES.h"

namespace CRUD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Resumen de modificar
	/// </summary>
	public ref class modificar : public System::Windows::Forms::Form
	{
	public:
		modificar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~modificar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_cancelar;
	protected:
	private: System::Windows::Forms::Button^ btn_guardar;
	public: System::Windows::Forms::TextBox^ txt_Programacion;
	private:

	public: System::Windows::Forms::TextBox^ txt_Genero;
	private:

	public: System::Windows::Forms::TextBox^ txt_Edad;

	public: System::Windows::Forms::TextBox^ txt_Nombre;
	private: System::Windows::Forms::Label^ label5;
	public:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ txt_Clave;
	private:

	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::TextBox^ txt_Fisica;
	public: System::Windows::Forms::TextBox^ txt_Matematicas;
	public: System::Windows::Forms::TextBox^ txt_Calculo;
	private:
	public:

	private:


	private: System::Windows::Forms::Label^ label8;
	public:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::TextBox^ txt_Estadistica;
	private:

	private:
	private:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->txt_Programacion = (gcnew System::Windows::Forms::TextBox());
			this->txt_Genero = (gcnew System::Windows::Forms::TextBox());
			this->txt_Edad = (gcnew System::Windows::Forms::TextBox());
			this->txt_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_Clave = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_Fisica = (gcnew System::Windows::Forms::TextBox());
			this->txt_Matematicas = (gcnew System::Windows::Forms::TextBox());
			this->txt_Calculo = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_Estadistica = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackColor = System::Drawing::Color::Red;
			this->btn_cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_cancelar->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_cancelar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_cancelar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->ForeColor = System::Drawing::Color::White;
			this->btn_cancelar->Location = System::Drawing::Point(395, 513);
			this->btn_cancelar->Margin = System::Windows::Forms::Padding(4);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(139, 44);
			this->btn_cancelar->TabIndex = 21;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &modificar::btn_cancelar_Click);
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_guardar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->ForeColor = System::Drawing::Color::White;
			this->btn_guardar->Location = System::Drawing::Point(42, 513);
			this->btn_guardar->Margin = System::Windows::Forms::Padding(4);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(139, 44);
			this->btn_guardar->TabIndex = 20;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &modificar::btn_guardar_Click);
			// 
			// txt_Programacion
			// 
			this->txt_Programacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_Programacion->Location = System::Drawing::Point(204, 249);
			this->txt_Programacion->Margin = System::Windows::Forms::Padding(4);
			this->txt_Programacion->Name = L"txt_Programacion";
			this->txt_Programacion->Size = System::Drawing::Size(260, 28);
			this->txt_Programacion->TabIndex = 19;
			this->txt_Programacion->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_Genero
			// 
			this->txt_Genero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Genero->Location = System::Drawing::Point(147, 204);
			this->txt_Genero->Margin = System::Windows::Forms::Padding(4);
			this->txt_Genero->Name = L"txt_Genero";
			this->txt_Genero->Size = System::Drawing::Size(317, 28);
			this->txt_Genero->TabIndex = 18;
			this->txt_Genero->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_Edad
			// 
			this->txt_Edad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Edad->Location = System::Drawing::Point(147, 160);
			this->txt_Edad->Margin = System::Windows::Forms::Padding(4);
			this->txt_Edad->Name = L"txt_Edad";
			this->txt_Edad->Size = System::Drawing::Size(317, 28);
			this->txt_Edad->TabIndex = 17;
			this->txt_Edad->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_Nombre
			// 
			this->txt_Nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Nombre->Location = System::Drawing::Point(147, 119);
			this->txt_Nombre->Margin = System::Windows::Forms::Padding(4);
			this->txt_Nombre->Name = L"txt_Nombre";
			this->txt_Nombre->Size = System::Drawing::Size(317, 28);
			this->txt_Nombre->TabIndex = 16;
			this->txt_Nombre->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 246);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 26);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Programación";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(37, 202);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 26);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Género";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 158);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 26);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Edad";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 116);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 26);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(198, 19);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 31);
			this->label1->TabIndex = 11;
			this->label1->Text = L"MODIFICAR";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(37, 73);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 26);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Clave";
			// 
			// txt_Clave
			// 
			this->txt_Clave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Clave->Location = System::Drawing::Point(147, 75);
			this->txt_Clave->Margin = System::Windows::Forms::Padding(4);
			this->txt_Clave->Name = L"txt_Clave";
			this->txt_Clave->Size = System::Drawing::Size(317, 28);
			this->txt_Clave->TabIndex = 23;
			this->txt_Clave->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt_Clave->TextChanged += gcnew System::EventHandler(this, &modificar::txt_Codigo_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(37, 289);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 26);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Física";
			// 
			// txt_Fisica
			// 
			this->txt_Fisica->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Fisica->Location = System::Drawing::Point(204, 294);
			this->txt_Fisica->Margin = System::Windows::Forms::Padding(4);
			this->txt_Fisica->Name = L"txt_Fisica";
			this->txt_Fisica->Size = System::Drawing::Size(260, 28);
			this->txt_Fisica->TabIndex = 25;
			this->txt_Fisica->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_Matematicas
			// 
			this->txt_Matematicas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Matematicas->Location = System::Drawing::Point(204, 341);
			this->txt_Matematicas->Margin = System::Windows::Forms::Padding(4);
			this->txt_Matematicas->Name = L"txt_Matematicas";
			this->txt_Matematicas->Size = System::Drawing::Size(260, 28);
			this->txt_Matematicas->TabIndex = 26;
			this->txt_Matematicas->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_Calculo
			// 
			this->txt_Calculo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Calculo->Location = System::Drawing::Point(204, 387);
			this->txt_Calculo->Margin = System::Windows::Forms::Padding(4);
			this->txt_Calculo->Name = L"txt_Calculo";
			this->txt_Calculo->Size = System::Drawing::Size(260, 28);
			this->txt_Calculo->TabIndex = 27;
			this->txt_Calculo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(34, 336);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(144, 26);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Matemáticas";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(34, 387);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 26);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Cálculo";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(34, 432);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(124, 26);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Estadística";
			// 
			// txt_Estadistica
			// 
			this->txt_Estadistica->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Estadistica->Location = System::Drawing::Point(204, 432);
			this->txt_Estadistica->Margin = System::Windows::Forms::Padding(4);
			this->txt_Estadistica->Name = L"txt_Estadistica";
			this->txt_Estadistica->Size = System::Drawing::Size(260, 28);
			this->txt_Estadistica->TabIndex = 31;
			this->txt_Estadistica->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// modificar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->ClientSize = System::Drawing::Size(560, 570);
			this->Controls->Add(this->txt_Estadistica);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_Calculo);
			this->Controls->Add(this->txt_Matematicas);
			this->Controls->Add(this->txt_Fisica);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_Clave);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->txt_Programacion);
			this->Controls->Add(this->txt_Genero);
			this->Controls->Add(this->txt_Edad);
			this->Controls->Add(this->txt_Nombre);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"modificar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"modificar";
			this->Load += gcnew System::EventHandler(this, &modificar::modificar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//EVENTO QUE NOS PERMITE CERRAR LA VENTANA DE MODIFICAR UN REGISTRO//
	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   //EVENTO QUE NOS PERMITE MOSTRAR UN MENSAJE EN PANTALLA AL GUARDAR UN RESGISTRO//
private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(L"¡MODIFICADO CORRECTAMENTE!");
	this->Close();
}
private: System::Void txt_Codigo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void modificar_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
