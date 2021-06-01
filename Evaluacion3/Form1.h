#pragma once

#include "Form2.h"

using namespace std;

namespace Evaluacion3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtApe;
	private: System::Windows::Forms::TextBox^  txtNom;
	private: System::Windows::Forms::ComboBox^  lstDia;
	private: System::Windows::Forms::ComboBox^  lstMes;
	private: System::Windows::Forms::ComboBox^  lstAno;
	private: System::Windows::Forms::ComboBox^  lstSex;
	private: System::Windows::Forms::ComboBox^  lstCiv;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::MaskedTextBox^  txtTel;
	private: System::Windows::Forms::Button^  btnMos;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtApe = (gcnew System::Windows::Forms::TextBox());
			this->txtNom = (gcnew System::Windows::Forms::TextBox());
			this->lstDia = (gcnew System::Windows::Forms::ComboBox());
			this->lstMes = (gcnew System::Windows::Forms::ComboBox());
			this->lstAno = (gcnew System::Windows::Forms::ComboBox());
			this->lstSex = (gcnew System::Windows::Forms::ComboBox());
			this->lstCiv = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtTel = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnMos = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(95, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(371, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registro de Datos Personales";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellidos:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombres:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 272);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Telefono Celular:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(28, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Sexo:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(28, 174);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(185, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Fecha de Nacimiento:";
			// 
			// txtApe
			// 
			this->txtApe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtApe->Location = System::Drawing::Point(123, 76);
			this->txtApe->Name = L"txtApe";
			this->txtApe->Size = System::Drawing::Size(373, 29);
			this->txtApe->TabIndex = 6;
			// 
			// txtNom
			// 
			this->txtNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNom->Location = System::Drawing::Point(122, 130);
			this->txtNom->Name = L"txtNom";
			this->txtNom->Size = System::Drawing::Size(374, 29);
			this->txtNom->TabIndex = 7;
			// 
			// lstDia
			// 
			this->lstDia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lstDia->FormattingEnabled = true;
			this->lstDia->Items->AddRange(gcnew cli::array< System::Object^  >(30) {L"1", L"2", L"3", L"4", L"6", L"7", L"8", L"9", L"10", 
				L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27", L"28", 
				L"29", L"30", L"31"});
			this->lstDia->Location = System::Drawing::Point(219, 174);
			this->lstDia->Name = L"lstDia";
			this->lstDia->Size = System::Drawing::Size(86, 32);
			this->lstDia->TabIndex = 8;
			this->lstDia->Text = L"Día";
			// 
			// lstMes
			// 
			this->lstMes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lstMes->FormattingEnabled = true;
			this->lstMes->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"Enero", L"Febrero", L"Marzo", L"Abril", L"Mayo", 
				L"Junio", L"Julio", L"Agosto", L"Septiembre", L"Octubre", L"Noviembre", L"Diciembre"});
			this->lstMes->Location = System::Drawing::Point(318, 172);
			this->lstMes->Name = L"lstMes";
			this->lstMes->Size = System::Drawing::Size(83, 32);
			this->lstMes->TabIndex = 9;
			this->lstMes->Text = L"Mes";
			// 
			// lstAno
			// 
			this->lstAno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lstAno->FormattingEnabled = true;
			this->lstAno->Items->AddRange(gcnew cli::array< System::Object^  >(32) {L"1990", L"1991", L"1992", L"1993", L"1994", L"1995", 
				L"1996", L"1997", L"1998", L"1999", L"2000", L"2001", L"2002", L"2003", L"2004", L"2005", L"2006", L"2007", L"2008", L"2009", 
				L"2010", L"2011", L"2012", L"2013", L"2014", L"2015", L"2016", L"2017", L"2018", L"2019", L"2020", L"2021"});
			this->lstAno->Location = System::Drawing::Point(422, 172);
			this->lstAno->Name = L"lstAno";
			this->lstAno->Size = System::Drawing::Size(74, 32);
			this->lstAno->TabIndex = 11;
			this->lstAno->Text = L"Año";
			// 
			// lstSex
			// 
			this->lstSex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lstSex->FormattingEnabled = true;
			this->lstSex->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Femenino", L"Masculino"});
			this->lstSex->Location = System::Drawing::Point(86, 221);
			this->lstSex->Name = L"lstSex";
			this->lstSex->Size = System::Drawing::Size(127, 32);
			this->lstSex->TabIndex = 12;
			this->lstSex->Text = L"Seleccione";
			// 
			// lstCiv
			// 
			this->lstCiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lstCiv->FormattingEnabled = true;
			this->lstCiv->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Soltero(a)", L"Casado(a)", L"Divorsiado(a)", L"Viudo(a)"});
			this->lstCiv->Location = System::Drawing::Point(369, 223);
			this->lstCiv->Name = L"lstCiv";
			this->lstCiv->Size = System::Drawing::Size(127, 32);
			this->lstCiv->TabIndex = 13;
			this->lstCiv->Text = L"Seleccione";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(313, 228);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 25);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Civil:";
			// 
			// txtTel
			// 
			this->txtTel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtTel->Location = System::Drawing::Point(177, 273);
			this->txtTel->Mask = L"(9999)-0000000";
			this->txtTel->Name = L"txtTel";
			this->txtTel->Size = System::Drawing::Size(147, 29);
			this->txtTel->TabIndex = 15;
			// 
			// btnMos
			// 
			this->btnMos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMos->Location = System::Drawing::Point(134, 333);
			this->btnMos->Name = L"btnMos";
			this->btnMos->Size = System::Drawing::Size(297, 42);
			this->btnMos->TabIndex = 16;
			this->btnMos->Text = L"Mostrar Datos en Otro Formulario";
			this->btnMos->UseVisualStyleBackColor = true;
			this->btnMos->Click += gcnew System::EventHandler(this, &Form1::btnMos_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(562, 403);
			this->Controls->Add(this->btnMos);
			this->Controls->Add(this->txtTel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lstCiv);
			this->Controls->Add(this->lstSex);
			this->Controls->Add(this->lstAno);
			this->Controls->Add(this->lstMes);
			this->Controls->Add(this->lstDia);
			this->Controls->Add(this->txtNom);
			this->Controls->Add(this->txtApe);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Llenar Formulario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnMos_Click(System::Object^  sender, System::EventArgs^  e) {

	Form2^ form2=gcnew Form2();
    form2->Show();
	form2->txtApe1->Text=txtApe->Text;
	form2->txtNom1->Text=txtNom->Text;
	form2->txtFec1->Text=lstDia->Text+"/"+lstMes->Text+"/"+lstAno->Text;
	form2->txtSex1->Text=lstSex->Text;
	form2->txtCiv1->Text=lstCiv->Text;
	form2->txtTel1->Text=txtTel->Text;
   
	}
};
}

