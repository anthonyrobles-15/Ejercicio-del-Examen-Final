#pragma once
#include "ESTUDIANTES.h" // INCLUIMOS LA CLASE VEHICULO //
#include "modificar.h" //INCLUIMOS LA CLASE MODIFICAR//

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	
	public:
		
		
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->data = gcnew ESTUDIANTES();
	//data va ser igual a gcnew//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_nombre;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ txt_edad;



	protected:

	protected:

	protected:




	protected:

	protected:


	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::Windows::Forms::DataGridView^ data_grid;

	private: System::Windows::Forms::Label^ lbl_marca;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbl_serie;
	private: System::Windows::Forms::Button^ btn_guardar;
	private: ESTUDIANTES^ data;   //CREAMOS EL OBJETO VEHICULO^DATA//
	private: System::Windows::Forms::Label^ lbl_nombre;
	private: System::Windows::Forms::TextBox^ txt_genero;



	private: System::Windows::Forms::TextBox^ txt_buscar;

	private: System::Windows::Forms::Button^ btn_buscar;
	private:	   String^ ConnectionString;
	private:	   MySqlConnection^ conn;
	private: MySqlDataReader^ lector;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_programacion;


	private: System::Windows::Forms::Button^ btn_borrar;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_fisica;
	private: System::Windows::Forms::TextBox^ txt_matematicas;
	private: System::Windows::Forms::TextBox^ txt_calculo;
	private: System::Windows::Forms::TextBox^ txt_estadistica;
	private: System::Windows::Forms::Button^ btn_limpiar;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_marca = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbl_serie = (gcnew System::Windows::Forms::Label());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->lbl_nombre = (gcnew System::Windows::Forms::Label());
			this->txt_genero = (gcnew System::Windows::Forms::TextBox());
			this->txt_buscar = (gcnew System::Windows::Forms::TextBox());
			this->btn_buscar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_programacion = (gcnew System::Windows::Forms::TextBox());
			this->btn_borrar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_fisica = (gcnew System::Windows::Forms::TextBox());
			this->txt_matematicas = (gcnew System::Windows::Forms::TextBox());
			this->txt_calculo = (gcnew System::Windows::Forms::TextBox());
			this->txt_estadistica = (gcnew System::Windows::Forms::TextBox());
			this->btn_limpiar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_nombre
			// 
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(1045, 97);
			this->txt_nombre->Margin = System::Windows::Forms::Padding(4);
			this->txt_nombre->Multiline = true;
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(308, 36);
			this->txt_nombre->TabIndex = 1;
			// 
			// txt_edad
			// 
			this->txt_edad->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_edad->Location = System::Drawing::Point(1045, 156);
			this->txt_edad->Margin = System::Windows::Forms::Padding(4);
			this->txt_edad->Multiline = true;
			this->txt_edad->Name = L"txt_edad";
			this->txt_edad->Size = System::Drawing::Size(308, 36);
			this->txt_edad->TabIndex = 2;
			// 
			// data_grid
			// 
			this->data_grid->AllowUserToOrderColumns = true;
			this->data_grid->AllowUserToResizeColumns = false;
			this->data_grid->AllowUserToResizeRows = false;
			this->data_grid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->data_grid->BackgroundColor = System::Drawing::Color::Cornsilk;
			this->data_grid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid->Cursor = System::Windows::Forms::Cursors::Hand;
			this->data_grid->GridColor = System::Drawing::SystemColors::HotTrack;
			this->data_grid->Location = System::Drawing::Point(13, 100);
			this->data_grid->Margin = System::Windows::Forms::Padding(4);
			this->data_grid->MultiSelect = false;
			this->data_grid->Name = L"data_grid";
			this->data_grid->ReadOnly = true;
			this->data_grid->RowHeadersVisible = false;
			this->data_grid->RowHeadersWidth = 51;
			this->data_grid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid->Size = System::Drawing::Size(842, 359);
			this->data_grid->TabIndex = 3;
			this->data_grid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::data_grid_CellContentClick);
			this->data_grid->DoubleClick += gcnew System::EventHandler(this, &Form1::data_grid_DoubleClick);
			// 
			// lbl_marca
			// 
			this->lbl_marca->AutoSize = true;
			this->lbl_marca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_marca->ForeColor = System::Drawing::Color::White;
			this->lbl_marca->Location = System::Drawing::Point(905, 228);
			this->lbl_marca->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_marca->Name = L"lbl_marca";
			this->lbl_marca->Size = System::Drawing::Size(100, 29);
			this->lbl_marca->TabIndex = 4;
			this->lbl_marca->Text = L"Género";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(907, 163);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Edad";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// lbl_serie
			// 
			this->lbl_serie->AutoSize = true;
			this->lbl_serie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_serie->ForeColor = System::Drawing::Color::White;
			this->lbl_serie->Location = System::Drawing::Point(905, 294);
			this->lbl_serie->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_serie->Name = L"lbl_serie";
			this->lbl_serie->Size = System::Drawing::Size(176, 29);
			this->lbl_serie->TabIndex = 6;
			this->lbl_serie->Text = L"Programación";
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::Gainsboro;
			this->btn_guardar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_guardar->FlatAppearance->BorderSize = 0;
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->ForeColor = System::Drawing::Color::Black;
			this->btn_guardar->Location = System::Drawing::Point(894, 542);
			this->btn_guardar->Margin = System::Windows::Forms::Padding(4);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(131, 44);
			this->btn_guardar->TabIndex = 7;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Form1::btn_guardar_Click);
			// 
			// lbl_nombre
			// 
			this->lbl_nombre->AutoSize = true;
			this->lbl_nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_nombre->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_nombre->Location = System::Drawing::Point(907, 104);
			this->lbl_nombre->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_nombre->Name = L"lbl_nombre";
			this->lbl_nombre->Size = System::Drawing::Size(107, 29);
			this->lbl_nombre->TabIndex = 8;
			this->lbl_nombre->Text = L"Nombre";
			// 
			// txt_genero
			// 
			this->txt_genero->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_genero->Location = System::Drawing::Point(1046, 221);
			this->txt_genero->Margin = System::Windows::Forms::Padding(4);
			this->txt_genero->Multiline = true;
			this->txt_genero->Name = L"txt_genero";
			this->txt_genero->Size = System::Drawing::Size(308, 36);
			this->txt_genero->TabIndex = 9;
			// 
			// txt_buscar
			// 
			this->txt_buscar->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txt_buscar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_buscar->Location = System::Drawing::Point(153, 58);
			this->txt_buscar->Margin = System::Windows::Forms::Padding(4);
			this->txt_buscar->Multiline = true;
			this->txt_buscar->Name = L"txt_buscar";
			this->txt_buscar->Size = System::Drawing::Size(134, 33);
			this->txt_buscar->TabIndex = 10;
			this->txt_buscar->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt_buscar->TextChanged += gcnew System::EventHandler(this, &Form1::txt_buscar_TextChanged);
			// 
			// btn_buscar
			// 
			this->btn_buscar->BackColor = System::Drawing::Color::Khaki;
			this->btn_buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_buscar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_buscar->ForeColor = System::Drawing::Color::Black;
			this->btn_buscar->Location = System::Drawing::Point(13, 58);
			this->btn_buscar->Margin = System::Windows::Forms::Padding(4);
			this->btn_buscar->Name = L"btn_buscar";
			this->btn_buscar->Size = System::Drawing::Size(132, 34);
			this->btn_buscar->TabIndex = 11;
			this->btn_buscar->Text = L"BUSCAR...";
			this->btn_buscar->UseVisualStyleBackColor = false;
			this->btn_buscar->Click += gcnew System::EventHandler(this, &Form1::btn_buscar_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(1220, 539);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 47);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Salir";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(523, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(400, 31);
			this->label1->TabIndex = 13;
			this->label1->Text = L"REGISTRO DE ESTUDIANTES";
			// 
			// txt_programacion
			// 
			this->txt_programacion->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_programacion->Location = System::Drawing::Point(1289, 283);
			this->txt_programacion->Margin = System::Windows::Forms::Padding(4);
			this->txt_programacion->Multiline = true;
			this->txt_programacion->Name = L"txt_programacion";
			this->txt_programacion->Size = System::Drawing::Size(64, 36);
			this->txt_programacion->TabIndex = 15;
			this->txt_programacion->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_borrar
			// 
			this->btn_borrar->BackColor = System::Drawing::Color::Red;
			this->btn_borrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_borrar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_borrar->FlatAppearance->BorderSize = 0;
			this->btn_borrar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_borrar->ForeColor = System::Drawing::Color::White;
			this->btn_borrar->Location = System::Drawing::Point(16, 468);
			this->btn_borrar->Margin = System::Windows::Forms::Padding(4);
			this->btn_borrar->Name = L"btn_borrar";
			this->btn_borrar->Size = System::Drawing::Size(144, 47);
			this->btn_borrar->TabIndex = 16;
			this->btn_borrar->Text = L"Borrar";
			this->btn_borrar->UseVisualStyleBackColor = false;
			this->btn_borrar->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(718, 468);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 47);
			this->button2->TabIndex = 17;
			this->button2->Text = L"< Regresar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(905, 338);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 29);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Física";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(907, 382);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 29);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Matemáticas";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(905, 426);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 29);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Cálculo";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(907, 466);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 29);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Estadística";
			// 
			// txt_fisica
			// 
			this->txt_fisica->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_fisica->Location = System::Drawing::Point(1289, 327);
			this->txt_fisica->Margin = System::Windows::Forms::Padding(4);
			this->txt_fisica->Multiline = true;
			this->txt_fisica->Name = L"txt_fisica";
			this->txt_fisica->Size = System::Drawing::Size(64, 36);
			this->txt_fisica->TabIndex = 22;
			this->txt_fisica->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_matematicas
			// 
			this->txt_matematicas->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_matematicas->Location = System::Drawing::Point(1289, 371);
			this->txt_matematicas->Margin = System::Windows::Forms::Padding(4);
			this->txt_matematicas->Multiline = true;
			this->txt_matematicas->Name = L"txt_matematicas";
			this->txt_matematicas->Size = System::Drawing::Size(64, 36);
			this->txt_matematicas->TabIndex = 23;
			this->txt_matematicas->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_calculo
			// 
			this->txt_calculo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_calculo->Location = System::Drawing::Point(1289, 415);
			this->txt_calculo->Margin = System::Windows::Forms::Padding(4);
			this->txt_calculo->Multiline = true;
			this->txt_calculo->Name = L"txt_calculo";
			this->txt_calculo->Size = System::Drawing::Size(64, 36);
			this->txt_calculo->TabIndex = 24;
			this->txt_calculo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_estadistica
			// 
			this->txt_estadistica->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_estadistica->Location = System::Drawing::Point(1289, 459);
			this->txt_estadistica->Margin = System::Windows::Forms::Padding(4);
			this->txt_estadistica->Multiline = true;
			this->txt_estadistica->Name = L"txt_estadistica";
			this->txt_estadistica->Size = System::Drawing::Size(64, 36);
			this->txt_estadistica->TabIndex = 25;
			this->txt_estadistica->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_limpiar
			// 
			this->btn_limpiar->BackColor = System::Drawing::Color::Gainsboro;
			this->btn_limpiar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_limpiar->FlatAppearance->BorderSize = 0;
			this->btn_limpiar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_limpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_limpiar->ForeColor = System::Drawing::Color::Black;
			this->btn_limpiar->Location = System::Drawing::Point(1056, 539);
			this->btn_limpiar->Margin = System::Windows::Forms::Padding(4);
			this->btn_limpiar->Name = L"btn_limpiar";
			this->btn_limpiar->Size = System::Drawing::Size(131, 44);
			this->btn_limpiar->TabIndex = 26;
			this->btn_limpiar->Text = L"Limpiar";
			this->btn_limpiar->UseVisualStyleBackColor = false;
			this->btn_limpiar->Click += gcnew System::EventHandler(this, &Form1::btn_limpiar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkBlue;
			this->ClientSize = System::Drawing::Size(1370, 599);
			this->Controls->Add(this->btn_limpiar);
			this->Controls->Add(this->txt_estadistica);
			this->Controls->Add(this->txt_calculo);
			this->Controls->Add(this->txt_matematicas);
			this->Controls->Add(this->txt_fisica);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_borrar);
			this->Controls->Add(this->txt_programacion);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_buscar);
			this->Controls->Add(this->txt_buscar);
			this->Controls->Add(this->txt_genero);
			this->Controls->Add(this->lbl_nombre);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->lbl_serie);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbl_marca);
			this->Controls->Add(this->data_grid);
			this->Controls->Add(this->txt_edad);
			this->Controls->Add(this->txt_nombre);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ESTUDIANTES";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//EVENTO QUE NOS MUESTRA LOS REGISTROS EN EL DATAGRID AL ABRIR EL FORMULARIO//
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		
		this->Consulta();
	}

		   public: void Consulta()
		   {
			   this->data->AbrirConexion();// abre la conexion con la base de datos//
			   this->data_grid->DataSource = this->data->getData(); //ingresa los datos en el data_grid//
			   this->data->CerrarConexion();//cerramos la conexion con la base de dataos//
		   }

			//EVENTO QUE NOS PERMITE INSERTAR UN REGISTRO EN LA BASE DE DATOS//
private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_nombre->Text == "") {

		MessageBox::Show("Campos vacios");
		return;
	}
		this->data->AbrirConexion();
	this->data->Insertar( this->txt_nombre->Text, this->txt_edad->Text, this->txt_genero->Text, this->txt_programacion->Text, this->txt_fisica->Text, this->txt_matematicas->Text, this->txt_calculo->Text, this->txt_estadistica->Text); // aca es donde se insertan los datos a la base de datos//
	this->data->CerrarConexion();
	this->Consulta();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
		//EVENTO QUE NOS PERMITE BUSCAR UN REGISTRO EN LA BASE DE DATOS //
private: System::Void btn_buscar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->data->AbrirConexion();
	this->ConnectionString = "datasource=localhost; username=root; password=Anthony12345; database=registroescuela;";
	this->conn = gcnew MySqlConnection(this->ConnectionString);
	String^ sql = "Select * from estudiantes where CLAVE='" + txt_buscar->Text + "' ";
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(sql, this->conn);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	data_grid->DataSource = tabla;
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	this->data->CerrarConexion();

	
	}
	


		//EVENTO QUE NOS PERMITE MODIFICAR UN REGISTRO//
	private: System::Void data_grid_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	String^ CLAVE = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	String^ NOMBRE = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	String^ EDAD = Convert::ToString(data_grid->SelectedRows[0]->Cells[2]->Value);
	String^ GENERO = Convert::ToString(data_grid->SelectedRows[0]->Cells[3]->Value);
	String^ PROGRAMACION = Convert::ToString(data_grid->SelectedRows[0]->Cells[4]->Value);
	String^ FISICA = Convert::ToString(data_grid->SelectedRows[0]->Cells[5]->Value);
	String^ MATEMATICAS = Convert::ToString(data_grid->SelectedRows[0]->Cells[6]->Value);
	String^ CALCULO = Convert::ToString(data_grid->SelectedRows[0]->Cells[7]->Value);
	String^ ESTADISTICA = Convert::ToString(data_grid->SelectedRows[0]->Cells[8]->Value);
	CRUD::modificar^ form = gcnew CRUD::modificar();
	form->txt_Clave->Text = CLAVE;
	form->txt_Nombre->Text = NOMBRE;
	form->txt_Edad->Text = EDAD;
	form->txt_Genero->Text = GENERO;
	form->txt_Programacion->Text = PROGRAMACION;
	form->txt_Fisica->Text = FISICA;
	form->txt_Matematicas->Text = MATEMATICAS;
	form->txt_Calculo->Text = CALCULO;
	form->txt_Estadistica->Text = ESTADISTICA;
	form->ShowDialog();
	ESTUDIANTES^ data = gcnew ESTUDIANTES();
	data->AbrirConexion();
	data->Modificar(form->txt_Clave->Text, form->txt_Nombre->Text, form->txt_Edad->Text, form->txt_Genero->Text, form->txt_Programacion->Text, form->txt_Fisica->Text, form->txt_Matematicas->Text, form->txt_Calculo->Text, form->txt_Estadistica->Text, CLAVE);
	data->CerrarConexion();
	this->Consulta();

}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void data_grid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void txt_buscar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   //EVENTO QUE NOS PERMITE CERRAR EL PROGRAMA//
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}

	   //EVENTO QUE NOS PERMITE ELIMINAR UN REGISTRO EN LA BASE DE DATOS 
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ CLAVE = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	ESTUDIANTES^ data = gcnew ESTUDIANTES();
	data->AbrirConexion();
	data->Eliminar(CLAVE);
	data->CerrarConexion();
	this->Consulta();
}

	   //EVENTO QUE NOS PERMITE REFRESCAR EL REGISTRO DE BUSQUEDA//
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Consulta();
}
private: System::Void btn_limpiar_Click(System::Object^ sender, System::EventArgs^ e) {

	txt_nombre->Clear();
	txt_edad->Clear();
	txt_genero->Clear();
	txt_programacion->Clear();
	txt_fisica->Clear();
	txt_matematicas->Clear();
	txt_calculo->Clear();
	txt_estadistica->Clear();
}
};
}
