#pragma once

namespace Evaluacion3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			
		}

	protected:
	
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnReg;
	protected: 

	protected: 

	private: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::TextBox^  txtNom1;

	public: System::Windows::Forms::TextBox^  txtApe1;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::TextBox^  txtFec1;
	public: System::Windows::Forms::TextBox^  txtSex1;
	public: System::Windows::Forms::TextBox^  txtCiv1;
	public: System::Windows::Forms::TextBox^  txtTel1;


	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void)
		{
			this->btnReg = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtNom1 = (gcnew System::Windows::Forms::TextBox());
			this->txtApe1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtFec1 = (gcnew System::Windows::Forms::TextBox());
			this->txtSex1 = (gcnew System::Windows::Forms::TextBox());
			this->txtCiv1 = (gcnew System::Windows::Forms::TextBox());
			this->txtTel1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnReg
			// 
			this->btnReg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnReg->Location = System::Drawing::Point(153, 342);
			this->btnReg->Name = L"btnReg";
			this->btnReg->Size = System::Drawing::Size(297, 42);
			this->btnReg->TabIndex = 32;
			this->btnReg->Text = L"Regresar al Formulario Principal";
			this->btnReg->UseVisualStyleBackColor = true;
			this->btnReg->Click += gcnew System::EventHandler(this, &Form2::btnReg_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(264, 236);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 25);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Civil:";
			
			// 
			// txtNom1
			// 
			this->txtNom1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNom1->Location = System::Drawing::Point(141, 139);
			this->txtNom1->Name = L"txtNom1";
			this->txtNom1->Size = System::Drawing::Size(374, 29);
			this->txtNom1->TabIndex = 24;
			// 
			// txtApe1
			// 
			this->txtApe1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtApe1->Location = System::Drawing::Point(142, 85);
			this->txtApe1->Name = L"txtApe1";
			this->txtApe1->Size = System::Drawing::Size(373, 29);
			this->txtApe1->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(47, 183);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(185, 25);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Fecha de Nacimiento:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(47, 232);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 25);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Sexo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(47, 281);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 25);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Telefono Celular:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(47, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 25);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Nombres:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(47, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 25);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Apellidos:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(156, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 39);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Datos Personales";
			// 
			// txtFec1
			// 
			this->txtFec1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtFec1->Location = System::Drawing::Point(237, 187);
			this->txtFec1->Name = L"txtFec1";
			this->txtFec1->Size = System::Drawing::Size(278, 29);
			this->txtFec1->TabIndex = 33;
			// 
			// txtSex1
			// 
			this->txtSex1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtSex1->Location = System::Drawing::Point(113, 234);
			this->txtSex1->Name = L"txtSex1";
			this->txtSex1->Size = System::Drawing::Size(82, 29);
			this->txtSex1->TabIndex = 34;
			// 
			// txtCiv1
			// 
			this->txtCiv1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtCiv1->Location = System::Drawing::Point(343, 238);
			this->txtCiv1->Name = L"txtCiv1";
			this->txtCiv1->Size = System::Drawing::Size(172, 29);
			this->txtCiv1->TabIndex = 35;
			// 
			// txtTel1
			// 
			this->txtTel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtTel1->Location = System::Drawing::Point(201, 281);
			this->txtTel1->Name = L"txtTel1";
			this->txtTel1->Size = System::Drawing::Size(210, 29);
			this->txtTel1->TabIndex = 36;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(562, 403);
			this->Controls->Add(this->txtTel1);
			this->Controls->Add(this->txtCiv1);
			this->Controls->Add(this->txtSex1);
			this->Controls->Add(this->txtFec1);
			this->Controls->Add(this->btnReg);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtNom1);
			this->Controls->Add(this->txtApe1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form2";
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnReg_Click(System::Object^  sender, System::EventArgs^  e) {

		this -> Close(); // Cerrar el segundo formulario
	    
		}

};
}
