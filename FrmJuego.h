#pragma once
#include "GestorPersonajes.h"

namespace Juego {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmJuego
	/// </summary>
	public ref class FrmJuego : public System::Windows::Forms::Form
	{
	private: 
		GestorPersonaje* gestorP;

	public:
		FrmJuego()
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmJuego()
		{
			if (components)
			{
				delete components;
			}
			gestorP->~GestorPersonaje();
		}
	private: System::Windows::Forms::ListView^ lvPersonajes;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtVida;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnRegistrar;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cboArma;
	private: System::Windows::Forms::Button^ btnCalcular;
	private: System::Windows::Forms::Label^ lblResultado;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;




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
			this->lvPersonajes = (gcnew System::Windows::Forms::ListView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtVida = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cboArma = (gcnew System::Windows::Forms::ComboBox());
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->lblResultado = (gcnew System::Windows::Forms::Label());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// lvPersonajes
			// 
			this->lvPersonajes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->columnHeader1,
					this->columnHeader2
			});
			this->lvPersonajes->FullRowSelect = true;
			this->lvPersonajes->GridLines = true;
			this->lvPersonajes->HideSelection = false;
			this->lvPersonajes->Location = System::Drawing::Point(34, 98);
			this->lvPersonajes->Name = L"lvPersonajes";
			this->lvPersonajes->Size = System::Drawing::Size(828, 361);
			this->lvPersonajes->TabIndex = 0;
			this->lvPersonajes->UseCompatibleStateImageBehavior = false;
			this->lvPersonajes->View = System::Windows::Forms::View::Details;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(49, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre: ";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(158, 56);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 20);
			this->txtNombre->TabIndex = 2;
			// 
			// txtVida
			// 
			this->txtVida->Location = System::Drawing::Point(424, 56);
			this->txtVida->Name = L"txtVida";
			this->txtVida->Size = System::Drawing::Size(100, 20);
			this->txtVida->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(287, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Vida (1-100):";
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrar->Location = System::Drawing::Point(582, 52);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(261, 27);
			this->btnRegistrar->TabIndex = 5;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &FrmJuego::btnRegistrar_click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(66, 488);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Arma:";
			// 
			// cboArma
			// 
			this->cboArma->FormattingEnabled = true;
			this->cboArma->Location = System::Drawing::Point(158, 493);
			this->cboArma->Name = L"cboArma";
			this->cboArma->Size = System::Drawing::Size(121, 21);
			this->cboArma->TabIndex = 7;
			// 
			// btnCalcular
			// 
			this->btnCalcular->Location = System::Drawing::Point(376, 493);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(261, 27);
			this->btnCalcular->TabIndex = 8;
			this->btnCalcular->Text = L"Atacar";
			this->btnCalcular->UseVisualStyleBackColor = true;
			// 
			// lblResultado
			// 
			this->lblResultado->AutoSize = true;
			this->lblResultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResultado->ForeColor = System::Drawing::Color::Green;
			this->lblResultado->Location = System::Drawing::Point(65, 539);
			this->lblResultado->Name = L"lblResultado";
			this->lblResultado->Size = System::Drawing::Size(142, 29);
			this->lblResultado->TabIndex = 9;
			this->lblResultado->Text = L"Resultado: -";
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Nombre";
			this->columnHeader1->Width = 400;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Vida";
			this->columnHeader2->Width = 400;
			// 
			// FrmJuego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1207, 706);
			this->Controls->Add(this->lblResultado);
			this->Controls->Add(this->btnCalcular);
			this->Controls->Add(this->cboArma);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->txtVida);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lvPersonajes);
			this->Name = L"FrmJuego";
			this->Text = L"Arena de Heroes";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

#pragma region Metodos auxiliares (no son eventos)

		// Convierte un String^ de .NET (por ejemplo txtNombre->Text) a string de C++.
	private: std::string ConvertirAStd(String^ texto) {
		return msclr::interop::marshal_as<std::string>(texto);
	}

		   // Convierte un string de C++ a String^ de .NET para mostrarlo en un control.
	private: String^ ConvertirANet(std::string texto) {
		return gcnew String(texto.c_str());
	}

	private: int ConvertirAInt(String^ texto) {
		return Convert::ToInt32(texto);
	}

		   // Vuelca el vector de Empresa en el ListView de empleados.
	private: void CargarListView() {
		lvPersonajes->Items->Clear();
		std::vector<Personaje*> p = gestorP->getPersonajes();
		for (int i = 0; i < (int)p.size(); i++) {
			ListViewItem^ fila = gcnew ListViewItem(ConvertirANet(p[i]->getNombre()));
			fila->SubItems->Add(p[i]->getVida().ToString());
			lvPersonajes->Items->Add(fila);
		}
	}

#pragma endregion

#pragma region Eventos del formulario

	private: System::Void btnRegistrar_click(System::Object^ sender, System::EventArgs^ e) {
		if (txtNombre->Text->Trim()->Length == 0 || txtVida->Text->Trim()->Length == 0) {
			MessageBox::Show("Ingrese codigo y nombre.", "Validacion",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		int valorNumerico = 0;
		if (!Int32::TryParse(txtVida->Text, valorNumerico)) { //reasignando valorNumerico
			MessageBox::Show("Por favor, ingresa un valor numérico válido.", "Error", 
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		if (!(0 < valorNumerico && valorNumerico < 100)) {
			MessageBox::Show("Los puntos de vida dentro del rango. Por Favor", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		std::string nombre = ConvertirAStd(txtNombre->Text);
		Personaje* p = new Personaje(nombre, valorNumerico);

		for (int i = 0; i < (int)gestorP->getPersonajes().size(); i++) {
			if (nombre == gestorP->getPersonajes()[i]->getNombre()) {
				MessageBox::Show("Ya existe un personaje con el mismo nombre", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
				delete p; 
				break;
			};
		}
		CargarListView();
	}
};
}
