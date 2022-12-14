#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^ InsLabel;
    private: System::Windows::Forms::TextBox^ InsBox;
    protected:

	protected:

    private: System::Windows::Forms::Label^ ResultLabel;
    private: System::Windows::Forms::Label^ mCodeLabel;
    private: System::Windows::Forms::TextBox^ mCodeBox;



    private: System::Windows::Forms::TextBox^ ResultBox;

	private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ EAXLbl;
    private: System::Windows::Forms::Label^ EBXLbl;
    private: System::Windows::Forms::Label^ ECXLbl;
    private: System::Windows::Forms::Label^ EDXLbl;
    private: System::Windows::Forms::Label^ ESPLbl;





    private: System::Windows::Forms::Label^ ESILbl;
    private: System::Windows::Forms::Label^ EBPLbl;
    private: System::Windows::Forms::Label^ EDILbl;



    private: System::Windows::Forms::TextBox^ EAXBox;
    private: System::Windows::Forms::TextBox^ EBXBox;
    private: System::Windows::Forms::TextBox^ ECXBox;
    private: System::Windows::Forms::TextBox^ EDXBox;
    private: System::Windows::Forms::TextBox^ ESIBox;
    private: System::Windows::Forms::TextBox^ ESPBox;
    private: System::Windows::Forms::TextBox^ EBPBox;
    private: System::Windows::Forms::TextBox^ EDIBox;








	private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ Mem1Lbl;
    private: System::Windows::Forms::Label^ Mem2Lbl;
    private: System::Windows::Forms::Label^ Mem3Lbl;
    private: System::Windows::Forms::Label^ Mem4Lbl;
    private: System::Windows::Forms::Label^ Mem5Lbl;
    private: System::Windows::Forms::Label^ Mem6Lbl;
    private: System::Windows::Forms::Label^ Mem7Lbl;







    private: System::Windows::Forms::Label^ Mem0Lbl;
    private: System::Windows::Forms::Label^ Mem8Lbl;
    private: System::Windows::Forms::Label^ Mem9Lbl;
    private: System::Windows::Forms::Label^ MemALbl;
    private: System::Windows::Forms::Label^ MemBLbl;
    private: System::Windows::Forms::Label^ MemCLbl;
    private: System::Windows::Forms::Label^ MemDLbl;
    private: System::Windows::Forms::Label^ MemELbl;
    private: System::Windows::Forms::Label^ MemFLbl;
    private: System::Windows::Forms::TextBox^ Mem0Box;
    private: System::Windows::Forms::TextBox^ Mem1Box;
    private: System::Windows::Forms::TextBox^ Mem2Box;
    private: System::Windows::Forms::TextBox^ Mem3Box;
    private: System::Windows::Forms::TextBox^ Mem4Box;
    private: System::Windows::Forms::TextBox^ Mem5Box;
    private: System::Windows::Forms::TextBox^ Mem6Box;
    private: System::Windows::Forms::TextBox^ Mem7Box;
    private: System::Windows::Forms::TextBox^ Mem8Box;
private: System::Windows::Forms::TextBox^ Mem9Box;
private: System::Windows::Forms::TextBox^ MemABox;
private: System::Windows::Forms::TextBox^ MemBBox;
private: System::Windows::Forms::TextBox^ MemCBox;
private: System::Windows::Forms::TextBox^ MemDBox;
private: System::Windows::Forms::TextBox^ MemEBox;
private: System::Windows::Forms::TextBox^ MemFBox;





























private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Button^ ClrBtn;
private: System::Windows::Forms::Button^ RunBtn;




	protected:

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->InsLabel = (gcnew System::Windows::Forms::Label());
            this->InsBox = (gcnew System::Windows::Forms::TextBox());
            this->ResultLabel = (gcnew System::Windows::Forms::Label());
            this->mCodeLabel = (gcnew System::Windows::Forms::Label());
            this->mCodeBox = (gcnew System::Windows::Forms::TextBox());
            this->ResultBox = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->EAXLbl = (gcnew System::Windows::Forms::Label());
            this->EBXLbl = (gcnew System::Windows::Forms::Label());
            this->ECXLbl = (gcnew System::Windows::Forms::Label());
            this->EDXLbl = (gcnew System::Windows::Forms::Label());
            this->ESPLbl = (gcnew System::Windows::Forms::Label());
            this->ESILbl = (gcnew System::Windows::Forms::Label());
            this->EBPLbl = (gcnew System::Windows::Forms::Label());
            this->EDILbl = (gcnew System::Windows::Forms::Label());
            this->EAXBox = (gcnew System::Windows::Forms::TextBox());
            this->EBXBox = (gcnew System::Windows::Forms::TextBox());
            this->ECXBox = (gcnew System::Windows::Forms::TextBox());
            this->EDXBox = (gcnew System::Windows::Forms::TextBox());
            this->ESIBox = (gcnew System::Windows::Forms::TextBox());
            this->ESPBox = (gcnew System::Windows::Forms::TextBox());
            this->EBPBox = (gcnew System::Windows::Forms::TextBox());
            this->EDIBox = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->Mem1Lbl = (gcnew System::Windows::Forms::Label());
            this->Mem2Lbl = (gcnew System::Windows::Forms::Label());
            this->Mem3Lbl = (gcnew System::Windows::Forms::Label());
            this->Mem4Lbl = (gcnew System::Windows::Forms::Label());
            this->Mem5Lbl = (gcnew System::Windows::Forms::Label());
            this->Mem6Lbl = (gcnew System::Windows::Forms::Label());
            this->Mem7Lbl = (gcnew System::Windows::Forms::Label());
            this->Mem0Lbl = (gcnew System::Windows::Forms::Label());
            this->Mem8Lbl = (gcnew System::Windows::Forms::Label());
            this->Mem9Lbl = (gcnew System::Windows::Forms::Label());
            this->MemALbl = (gcnew System::Windows::Forms::Label());
            this->MemBLbl = (gcnew System::Windows::Forms::Label());
            this->MemCLbl = (gcnew System::Windows::Forms::Label());
            this->MemDLbl = (gcnew System::Windows::Forms::Label());
            this->MemELbl = (gcnew System::Windows::Forms::Label());
            this->MemFLbl = (gcnew System::Windows::Forms::Label());
            this->Mem0Box = (gcnew System::Windows::Forms::TextBox());
            this->Mem1Box = (gcnew System::Windows::Forms::TextBox());
            this->Mem2Box = (gcnew System::Windows::Forms::TextBox());
            this->Mem3Box = (gcnew System::Windows::Forms::TextBox());
            this->Mem4Box = (gcnew System::Windows::Forms::TextBox());
            this->Mem5Box = (gcnew System::Windows::Forms::TextBox());
            this->Mem6Box = (gcnew System::Windows::Forms::TextBox());
            this->Mem7Box = (gcnew System::Windows::Forms::TextBox());
            this->Mem8Box = (gcnew System::Windows::Forms::TextBox());
            this->Mem9Box = (gcnew System::Windows::Forms::TextBox());
            this->MemABox = (gcnew System::Windows::Forms::TextBox());
            this->MemBBox = (gcnew System::Windows::Forms::TextBox());
            this->MemCBox = (gcnew System::Windows::Forms::TextBox());
            this->MemDBox = (gcnew System::Windows::Forms::TextBox());
            this->MemEBox = (gcnew System::Windows::Forms::TextBox());
            this->MemFBox = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->ClrBtn = (gcnew System::Windows::Forms::Button());
            this->RunBtn = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // InsLabel
            // 
            this->InsLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->InsLabel->AutoSize = true;
            this->InsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->InsLabel->Location = System::Drawing::Point(12, 8);
            this->InsLabel->Name = L"InsLabel";
            this->InsLabel->Size = System::Drawing::Size(109, 22);
            this->InsLabel->TabIndex = 0;
            this->InsLabel->Text = L"Instruction:";
            // 
            // InsBox
            // 
            this->InsBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->InsBox->Location = System::Drawing::Point(177, 7);
            this->InsBox->MaximumSize = System::Drawing::Size(346, 22);
            this->InsBox->Name = L"InsBox";
            this->InsBox->Size = System::Drawing::Size(346, 22);
            this->InsBox->TabIndex = 1;
            // 
            // ResultLabel
            // 
            this->ResultLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ResultLabel->AutoSize = true;
            this->ResultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ResultLabel->Location = System::Drawing::Point(10, 66);
            this->ResultLabel->Name = L"ResultLabel";
            this->ResultLabel->Size = System::Drawing::Size(73, 22);
            this->ResultLabel->TabIndex = 2;
            this->ResultLabel->Text = L"Result:";
            // 
            // mCodeLabel
            // 
            this->mCodeLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->mCodeLabel->AutoSize = true;
            this->mCodeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->mCodeLabel->Location = System::Drawing::Point(10, 122);
            this->mCodeLabel->Name = L"mCodeLabel";
            this->mCodeLabel->Size = System::Drawing::Size(143, 22);
            this->mCodeLabel->TabIndex = 3;
            this->mCodeLabel->Text = L"Machine Code:";
            // 
            // mCodeBox
            // 
            this->mCodeBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->mCodeBox->Location = System::Drawing::Point(177, 122);
            this->mCodeBox->MaximumSize = System::Drawing::Size(346, 22);
            this->mCodeBox->Name = L"mCodeBox";
            this->mCodeBox->Size = System::Drawing::Size(346, 22);
            this->mCodeBox->TabIndex = 4;
            // 
            // ResultBox
            // 
            this->ResultBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ResultBox->Location = System::Drawing::Point(178, 66);
            this->ResultBox->MaximumSize = System::Drawing::Size(346, 22);
            this->ResultBox->Name = L"ResultBox";
            this->ResultBox->Size = System::Drawing::Size(346, 22);
            this->ResultBox->TabIndex = 5;
            // 
            // label4
            // 
            this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
                | System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(9, 175);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(184, 25);
            this->label4->TabIndex = 6;
            this->label4->Text = L"Register Contents";
            // 
            // EAXLbl
            // 
            this->EAXLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->EAXLbl->AutoSize = true;
            this->EAXLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EAXLbl->Location = System::Drawing::Point(10, 229);
            this->EAXLbl->Name = L"EAXLbl";
            this->EAXLbl->Size = System::Drawing::Size(45, 20);
            this->EAXLbl->TabIndex = 7;
            this->EAXLbl->Text = L"AX: ";
            this->EAXLbl->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
            // 
            // EBXLbl
            // 
            this->EBXLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->EBXLbl->AutoSize = true;
            this->EBXLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EBXLbl->Location = System::Drawing::Point(10, 267);
            this->EBXLbl->Name = L"EBXLbl";
            this->EBXLbl->Size = System::Drawing::Size(40, 20);
            this->EBXLbl->TabIndex = 8;
            this->EBXLbl->Text = L"BX:";
            // 
            // ECXLbl
            // 
            this->ECXLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ECXLbl->AutoSize = true;
            this->ECXLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ECXLbl->Location = System::Drawing::Point(10, 306);
            this->ECXLbl->Name = L"ECXLbl";
            this->ECXLbl->Size = System::Drawing::Size(40, 20);
            this->ECXLbl->TabIndex = 9;
            this->ECXLbl->Text = L"CX:";
            this->ECXLbl->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
            // 
            // EDXLbl
            // 
            this->EDXLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->EDXLbl->AutoSize = true;
            this->EDXLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EDXLbl->Location = System::Drawing::Point(12, 343);
            this->EDXLbl->Name = L"EDXLbl";
            this->EDXLbl->Size = System::Drawing::Size(41, 20);
            this->EDXLbl->TabIndex = 10;
            this->EDXLbl->Text = L"DX:";
            // 
            // ESPLbl
            // 
            this->ESPLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ESPLbl->AutoSize = true;
            this->ESPLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ESPLbl->Location = System::Drawing::Point(533, 267);
            this->ESPLbl->Name = L"ESPLbl";
            this->ESPLbl->Size = System::Drawing::Size(39, 20);
            this->ESPLbl->TabIndex = 11;
            this->ESPLbl->Text = L"SP:";
            // 
            // ESILbl
            // 
            this->ESILbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ESILbl->AutoSize = true;
            this->ESILbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ESILbl->Location = System::Drawing::Point(533, 229);
            this->ESILbl->Name = L"ESILbl";
            this->ESILbl->Size = System::Drawing::Size(32, 20);
            this->ESILbl->TabIndex = 12;
            this->ESILbl->Text = L"SI:";
            // 
            // EBPLbl
            // 
            this->EBPLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->EBPLbl->AutoSize = true;
            this->EBPLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EBPLbl->Location = System::Drawing::Point(533, 306);
            this->EBPLbl->Name = L"EBPLbl";
            this->EBPLbl->Size = System::Drawing::Size(40, 20);
            this->EBPLbl->TabIndex = 13;
            this->EBPLbl->Text = L"BP:";
            // 
            // EDILbl
            // 
            this->EDILbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->EDILbl->AutoSize = true;
            this->EDILbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EDILbl->Location = System::Drawing::Point(533, 343);
            this->EDILbl->Name = L"EDILbl";
            this->EDILbl->Size = System::Drawing::Size(34, 20);
            this->EDILbl->TabIndex = 14;
            this->EDILbl->Text = L"DI:";
            // 
            // EAXBox
            // 
            this->EAXBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->EAXBox->Location = System::Drawing::Point(75, 227);
            this->EAXBox->MaximumSize = System::Drawing::Size(212, 22);
            this->EAXBox->Name = L"EAXBox";
            this->EAXBox->Size = System::Drawing::Size(212, 22);
            this->EAXBox->TabIndex = 15;
            this->EAXBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
            // 
            // EBXBox
            // 
            this->EBXBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->EBXBox->Location = System::Drawing::Point(75, 265);
            this->EBXBox->MaximumSize = System::Drawing::Size(212, 22);
            this->EBXBox->Name = L"EBXBox";
            this->EBXBox->Size = System::Drawing::Size(212, 22);
            this->EBXBox->TabIndex = 16;
            // 
            // ECXBox
            // 
            this->ECXBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ECXBox->Location = System::Drawing::Point(76, 304);
            this->ECXBox->MaximumSize = System::Drawing::Size(212, 22);
            this->ECXBox->Name = L"ECXBox";
            this->ECXBox->Size = System::Drawing::Size(212, 22);
            this->ECXBox->TabIndex = 17;
            // 
            // EDXBox
            // 
            this->EDXBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->EDXBox->Location = System::Drawing::Point(76, 341);
            this->EDXBox->MaximumSize = System::Drawing::Size(212, 22);
            this->EDXBox->Name = L"EDXBox";
            this->EDXBox->Size = System::Drawing::Size(212, 22);
            this->EDXBox->TabIndex = 18;
            this->EDXBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
            // 
            // ESIBox
            // 
            this->ESIBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ESIBox->Location = System::Drawing::Point(583, 227);
            this->ESIBox->MaximumSize = System::Drawing::Size(212, 22);
            this->ESIBox->Name = L"ESIBox";
            this->ESIBox->Size = System::Drawing::Size(212, 22);
            this->ESIBox->TabIndex = 19;
            // 
            // ESPBox
            // 
            this->ESPBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ESPBox->Location = System::Drawing::Point(583, 265);
            this->ESPBox->MaximumSize = System::Drawing::Size(212, 22);
            this->ESPBox->Name = L"ESPBox";
            this->ESPBox->Size = System::Drawing::Size(212, 22);
            this->ESPBox->TabIndex = 20;
            this->ESPBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
            // 
            // EBPBox
            // 
            this->EBPBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->EBPBox->Location = System::Drawing::Point(583, 306);
            this->EBPBox->MaximumSize = System::Drawing::Size(212, 22);
            this->EBPBox->Name = L"EBPBox";
            this->EBPBox->Size = System::Drawing::Size(212, 22);
            this->EBPBox->TabIndex = 21;
            // 
            // EDIBox
            // 
            this->EDIBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->EDIBox->Location = System::Drawing::Point(583, 343);
            this->EDIBox->MaximumSize = System::Drawing::Size(212, 22);
            this->EDIBox->Name = L"EDIBox";
            this->EDIBox->Size = System::Drawing::Size(212, 22);
            this->EDIBox->TabIndex = 22;
            this->EDIBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
            // 
            // label13
            // 
            this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
                | System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(19, 394);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(96, 25);
            this->label13->TabIndex = 23;
            this->label13->Text = L"Memory:";
            // 
            // Mem1Lbl
            // 
            this->Mem1Lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem1Lbl->AutoSize = true;
            this->Mem1Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Mem1Lbl->Location = System::Drawing::Point(33, 456);
            this->Mem1Lbl->Name = L"Mem1Lbl";
            this->Mem1Lbl->Size = System::Drawing::Size(79, 20);
            this->Mem1Lbl->TabIndex = 24;
            this->Mem1Lbl->Text = L"1 0000H";
            this->Mem1Lbl->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
            // 
            // Mem2Lbl
            // 
            this->Mem2Lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem2Lbl->AutoSize = true;
            this->Mem2Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Mem2Lbl->Location = System::Drawing::Point(33, 483);
            this->Mem2Lbl->Name = L"Mem2Lbl";
            this->Mem2Lbl->Size = System::Drawing::Size(79, 20);
            this->Mem2Lbl->TabIndex = 25;
            this->Mem2Lbl->Text = L"2 0000H";
            // 
            // Mem3Lbl
            // 
            this->Mem3Lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem3Lbl->AutoSize = true;
            this->Mem3Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Mem3Lbl->Location = System::Drawing::Point(33, 511);
            this->Mem3Lbl->Name = L"Mem3Lbl";
            this->Mem3Lbl->Size = System::Drawing::Size(79, 20);
            this->Mem3Lbl->TabIndex = 26;
            this->Mem3Lbl->Text = L"3 0000H";
            // 
            // Mem4Lbl
            // 
            this->Mem4Lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem4Lbl->AutoSize = true;
            this->Mem4Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Mem4Lbl->Location = System::Drawing::Point(33, 540);
            this->Mem4Lbl->Name = L"Mem4Lbl";
            this->Mem4Lbl->Size = System::Drawing::Size(79, 20);
            this->Mem4Lbl->TabIndex = 27;
            this->Mem4Lbl->Text = L"4 0000H";
            // 
            // Mem5Lbl
            // 
            this->Mem5Lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem5Lbl->AutoSize = true;
            this->Mem5Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Mem5Lbl->Location = System::Drawing::Point(33, 566);
            this->Mem5Lbl->Name = L"Mem5Lbl";
            this->Mem5Lbl->Size = System::Drawing::Size(79, 20);
            this->Mem5Lbl->TabIndex = 28;
            this->Mem5Lbl->Text = L"5 0000H";
            this->Mem5Lbl->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
            // 
            // Mem6Lbl
            // 
            this->Mem6Lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem6Lbl->AutoSize = true;
            this->Mem6Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Mem6Lbl->Location = System::Drawing::Point(33, 596);
            this->Mem6Lbl->Name = L"Mem6Lbl";
            this->Mem6Lbl->Size = System::Drawing::Size(79, 20);
            this->Mem6Lbl->TabIndex = 29;
            this->Mem6Lbl->Text = L"6 0000H";
            this->Mem6Lbl->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
            // 
            // Mem7Lbl
            // 
            this->Mem7Lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem7Lbl->AutoSize = true;
            this->Mem7Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Mem7Lbl->Location = System::Drawing::Point(33, 625);
            this->Mem7Lbl->Name = L"Mem7Lbl";
            this->Mem7Lbl->Size = System::Drawing::Size(79, 20);
            this->Mem7Lbl->TabIndex = 30;
            this->Mem7Lbl->Text = L"7 0000H";
            // 
            // Mem0Lbl
            // 
            this->Mem0Lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem0Lbl->AutoSize = true;
            this->Mem0Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Mem0Lbl->Location = System::Drawing::Point(33, 430);
            this->Mem0Lbl->Name = L"Mem0Lbl";
            this->Mem0Lbl->Size = System::Drawing::Size(79, 20);
            this->Mem0Lbl->TabIndex = 31;
            this->Mem0Lbl->Text = L"0 0000H";
            // 
            // Mem8Lbl
            // 
            this->Mem8Lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem8Lbl->AutoSize = true;
            this->Mem8Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Mem8Lbl->Location = System::Drawing::Point(558, 430);
            this->Mem8Lbl->Name = L"Mem8Lbl";
            this->Mem8Lbl->Size = System::Drawing::Size(79, 20);
            this->Mem8Lbl->TabIndex = 32;
            this->Mem8Lbl->Text = L"8 0000H";
            // 
            // Mem9Lbl
            // 
            this->Mem9Lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem9Lbl->AutoSize = true;
            this->Mem9Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Mem9Lbl->Location = System::Drawing::Point(558, 456);
            this->Mem9Lbl->Name = L"Mem9Lbl";
            this->Mem9Lbl->Size = System::Drawing::Size(79, 20);
            this->Mem9Lbl->TabIndex = 33;
            this->Mem9Lbl->Text = L"9 0000H";
            // 
            // MemALbl
            // 
            this->MemALbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MemALbl->AutoSize = true;
            this->MemALbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->MemALbl->Location = System::Drawing::Point(558, 483);
            this->MemALbl->Name = L"MemALbl";
            this->MemALbl->Size = System::Drawing::Size(81, 20);
            this->MemALbl->TabIndex = 34;
            this->MemALbl->Text = L"A 0000H";
            this->MemALbl->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
            // 
            // MemBLbl
            // 
            this->MemBLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MemBLbl->AutoSize = true;
            this->MemBLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->MemBLbl->Location = System::Drawing::Point(558, 511);
            this->MemBLbl->Name = L"MemBLbl";
            this->MemBLbl->Size = System::Drawing::Size(82, 20);
            this->MemBLbl->TabIndex = 35;
            this->MemBLbl->Text = L"B 0000H";
            // 
            // MemCLbl
            // 
            this->MemCLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MemCLbl->AutoSize = true;
            this->MemCLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->MemCLbl->Location = System::Drawing::Point(558, 540);
            this->MemCLbl->Name = L"MemCLbl";
            this->MemCLbl->Size = System::Drawing::Size(82, 20);
            this->MemCLbl->TabIndex = 36;
            this->MemCLbl->Text = L"C 0000H";
            // 
            // MemDLbl
            // 
            this->MemDLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MemDLbl->AutoSize = true;
            this->MemDLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->MemDLbl->Location = System::Drawing::Point(557, 566);
            this->MemDLbl->Name = L"MemDLbl";
            this->MemDLbl->Size = System::Drawing::Size(83, 20);
            this->MemDLbl->TabIndex = 37;
            this->MemDLbl->Text = L"D 0000H";
            // 
            // MemELbl
            // 
            this->MemELbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MemELbl->AutoSize = true;
            this->MemELbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->MemELbl->Location = System::Drawing::Point(559, 596);
            this->MemELbl->Name = L"MemELbl";
            this->MemELbl->Size = System::Drawing::Size(81, 20);
            this->MemELbl->TabIndex = 38;
            this->MemELbl->Text = L"E 0000H";
            this->MemELbl->Click += gcnew System::EventHandler(this, &MyForm::label28_Click);
            // 
            // MemFLbl
            // 
            this->MemFLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MemFLbl->AutoSize = true;
            this->MemFLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->MemFLbl->Location = System::Drawing::Point(560, 625);
            this->MemFLbl->Name = L"MemFLbl";
            this->MemFLbl->Size = System::Drawing::Size(80, 20);
            this->MemFLbl->TabIndex = 39;
            this->MemFLbl->Text = L"F 0000H";
            // 
            // Mem0Box
            // 
            this->Mem0Box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem0Box->Location = System::Drawing::Point(122, 429);
            this->Mem0Box->MaximumSize = System::Drawing::Size(120, 22);
            this->Mem0Box->Name = L"Mem0Box";
            this->Mem0Box->Size = System::Drawing::Size(120, 22);
            this->Mem0Box->TabIndex = 40;
            // 
            // Mem1Box
            // 
            this->Mem1Box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem1Box->Location = System::Drawing::Point(122, 458);
            this->Mem1Box->MaximumSize = System::Drawing::Size(120, 22);
            this->Mem1Box->Name = L"Mem1Box";
            this->Mem1Box->Size = System::Drawing::Size(120, 22);
            this->Mem1Box->TabIndex = 41;
            // 
            // Mem2Box
            // 
            this->Mem2Box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem2Box->Location = System::Drawing::Point(122, 485);
            this->Mem2Box->MaximumSize = System::Drawing::Size(120, 22);
            this->Mem2Box->Name = L"Mem2Box";
            this->Mem2Box->Size = System::Drawing::Size(120, 22);
            this->Mem2Box->TabIndex = 42;
            // 
            // Mem3Box
            // 
            this->Mem3Box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem3Box->Location = System::Drawing::Point(122, 514);
            this->Mem3Box->MaximumSize = System::Drawing::Size(120, 22);
            this->Mem3Box->Name = L"Mem3Box";
            this->Mem3Box->Size = System::Drawing::Size(120, 22);
            this->Mem3Box->TabIndex = 43;
            // 
            // Mem4Box
            // 
            this->Mem4Box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem4Box->Location = System::Drawing::Point(122, 542);
            this->Mem4Box->MaximumSize = System::Drawing::Size(120, 22);
            this->Mem4Box->Name = L"Mem4Box";
            this->Mem4Box->Size = System::Drawing::Size(120, 22);
            this->Mem4Box->TabIndex = 44;
            // 
            // Mem5Box
            // 
            this->Mem5Box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem5Box->Location = System::Drawing::Point(122, 569);
            this->Mem5Box->MaximumSize = System::Drawing::Size(120, 22);
            this->Mem5Box->Name = L"Mem5Box";
            this->Mem5Box->Size = System::Drawing::Size(120, 22);
            this->Mem5Box->TabIndex = 45;
            // 
            // Mem6Box
            // 
            this->Mem6Box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem6Box->Location = System::Drawing::Point(122, 599);
            this->Mem6Box->MaximumSize = System::Drawing::Size(120, 22);
            this->Mem6Box->Name = L"Mem6Box";
            this->Mem6Box->Size = System::Drawing::Size(120, 22);
            this->Mem6Box->TabIndex = 46;
            // 
            // Mem7Box
            // 
            this->Mem7Box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem7Box->Location = System::Drawing::Point(122, 630);
            this->Mem7Box->MaximumSize = System::Drawing::Size(120, 22);
            this->Mem7Box->Name = L"Mem7Box";
            this->Mem7Box->Size = System::Drawing::Size(120, 22);
            this->Mem7Box->TabIndex = 47;
            // 
            // Mem8Box
            // 
            this->Mem8Box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem8Box->Location = System::Drawing::Point(644, 430);
            this->Mem8Box->MaximumSize = System::Drawing::Size(120, 22);
            this->Mem8Box->Name = L"Mem8Box";
            this->Mem8Box->Size = System::Drawing::Size(120, 22);
            this->Mem8Box->TabIndex = 48;
            // 
            // Mem9Box
            // 
            this->Mem9Box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Mem9Box->Location = System::Drawing::Point(644, 460);
            this->Mem9Box->MaximumSize = System::Drawing::Size(120, 22);
            this->Mem9Box->Name = L"Mem9Box";
            this->Mem9Box->Size = System::Drawing::Size(120, 22);
            this->Mem9Box->TabIndex = 49;
            // 
            // MemABox
            // 
            this->MemABox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MemABox->Location = System::Drawing::Point(644, 488);
            this->MemABox->MaximumSize = System::Drawing::Size(120, 22);
            this->MemABox->Name = L"MemABox";
            this->MemABox->Size = System::Drawing::Size(120, 22);
            this->MemABox->TabIndex = 50;
            // 
            // MemBBox
            // 
            this->MemBBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MemBBox->Location = System::Drawing::Point(644, 515);
            this->MemBBox->MaximumSize = System::Drawing::Size(120, 22);
            this->MemBBox->Name = L"MemBBox";
            this->MemBBox->Size = System::Drawing::Size(120, 22);
            this->MemBBox->TabIndex = 51;
            // 
            // MemCBox
            // 
            this->MemCBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MemCBox->Location = System::Drawing::Point(644, 543);
            this->MemCBox->MaximumSize = System::Drawing::Size(120, 22);
            this->MemCBox->Name = L"MemCBox";
            this->MemCBox->Size = System::Drawing::Size(120, 22);
            this->MemCBox->TabIndex = 52;
            // 
            // MemDBox
            // 
            this->MemDBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MemDBox->Location = System::Drawing::Point(644, 570);
            this->MemDBox->MaximumSize = System::Drawing::Size(120, 22);
            this->MemDBox->Name = L"MemDBox";
            this->MemDBox->Size = System::Drawing::Size(120, 22);
            this->MemDBox->TabIndex = 53;
            // 
            // MemEBox
            // 
            this->MemEBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MemEBox->Location = System::Drawing::Point(644, 599);
            this->MemEBox->MaximumSize = System::Drawing::Size(120, 22);
            this->MemEBox->Name = L"MemEBox";
            this->MemEBox->Size = System::Drawing::Size(120, 22);
            this->MemEBox->TabIndex = 54;
            // 
            // MemFBox
            // 
            this->MemFBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MemFBox->Location = System::Drawing::Point(644, 627);
            this->MemFBox->MaximumSize = System::Drawing::Size(120, 22);
            this->MemFBox->Name = L"MemFBox";
            this->MemFBox->Size = System::Drawing::Size(120, 22);
            this->MemFBox->TabIndex = 55;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(881, 175);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(528, 402);
            this->pictureBox1->TabIndex = 58;
            this->pictureBox1->TabStop = false;
            // 
            // ClrBtn
            // 
            this->ClrBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ClrBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ClrBtn->Location = System::Drawing::Point(1273, 660);
            this->ClrBtn->MaximumSize = System::Drawing::Size(94, 38);
            this->ClrBtn->Name = L"ClrBtn";
            this->ClrBtn->Size = System::Drawing::Size(94, 38);
            this->ClrBtn->TabIndex = 1;
            this->ClrBtn->Text = L"Clear";
            this->ClrBtn->UseVisualStyleBackColor = true;
            this->ClrBtn->Click += gcnew System::EventHandler(this, &MyForm::ClrBtn_Click);
            // 
            // RunBtn
            // 
            this->RunBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->RunBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->RunBtn->Location = System::Drawing::Point(1130, 660);
            this->RunBtn->MaximumSize = System::Drawing::Size(137, 38);
            this->RunBtn->Name = L"RunBtn";
            this->RunBtn->Size = System::Drawing::Size(137, 38);
            this->RunBtn->TabIndex = 0;
            this->RunBtn->Text = L"Run";
            this->RunBtn->UseVisualStyleBackColor = true;
            this->RunBtn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1440, 716);
            this->Controls->Add(this->ClrBtn);
            this->Controls->Add(this->RunBtn);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->MemFBox);
            this->Controls->Add(this->MemEBox);
            this->Controls->Add(this->MemDBox);
            this->Controls->Add(this->MemCBox);
            this->Controls->Add(this->MemBBox);
            this->Controls->Add(this->MemABox);
            this->Controls->Add(this->Mem9Box);
            this->Controls->Add(this->Mem8Box);
            this->Controls->Add(this->Mem7Box);
            this->Controls->Add(this->Mem6Box);
            this->Controls->Add(this->Mem5Box);
            this->Controls->Add(this->Mem4Box);
            this->Controls->Add(this->Mem3Box);
            this->Controls->Add(this->Mem2Box);
            this->Controls->Add(this->Mem1Box);
            this->Controls->Add(this->Mem0Box);
            this->Controls->Add(this->MemFLbl);
            this->Controls->Add(this->MemELbl);
            this->Controls->Add(this->MemDLbl);
            this->Controls->Add(this->MemCLbl);
            this->Controls->Add(this->MemBLbl);
            this->Controls->Add(this->MemALbl);
            this->Controls->Add(this->Mem9Lbl);
            this->Controls->Add(this->Mem8Lbl);
            this->Controls->Add(this->Mem0Lbl);
            this->Controls->Add(this->Mem7Lbl);
            this->Controls->Add(this->Mem6Lbl);
            this->Controls->Add(this->Mem5Lbl);
            this->Controls->Add(this->Mem4Lbl);
            this->Controls->Add(this->Mem3Lbl);
            this->Controls->Add(this->Mem2Lbl);
            this->Controls->Add(this->Mem1Lbl);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->EDIBox);
            this->Controls->Add(this->EBPBox);
            this->Controls->Add(this->ESPBox);
            this->Controls->Add(this->ESIBox);
            this->Controls->Add(this->EDXBox);
            this->Controls->Add(this->ECXBox);
            this->Controls->Add(this->EBXBox);
            this->Controls->Add(this->EAXBox);
            this->Controls->Add(this->EDILbl);
            this->Controls->Add(this->EBPLbl);
            this->Controls->Add(this->ESILbl);
            this->Controls->Add(this->ESPLbl);
            this->Controls->Add(this->EDXLbl);
            this->Controls->Add(this->ECXLbl);
            this->Controls->Add(this->EBXLbl);
            this->Controls->Add(this->EAXLbl);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->ResultBox);
            this->Controls->Add(this->mCodeBox);
            this->Controls->Add(this->mCodeLabel);
            this->Controls->Add(this->ResultLabel);
            this->Controls->Add(this->InsBox);
            this->Controls->Add(this->InsLabel);
            this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->MinimumSize = System::Drawing::Size(834, 763);
            this->Name = L"MyForm";
            this->Text = L"8088/8086 Simulator";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //the run button
    //String^ loc = "\pics\Picture.jpg";
   //pictureBox1->Image = loc;
   String^ inp = this->InsBox->Text;
   String^ AX = "";
   int space_index = 0;
   std::string k;
   int length = 0;
   int indexer = 0;
   String^ kk = "";
   //finding the length
   while (kk != inp)
   {
       kk = kk + inp[indexer];
       ++indexer; ++length;
   }

   for (int i = 0; i < length; ++i)
   {
       k = inp[i];
       if (k != " ")
       {
           ++space_index;
       }
       else
       {
           break;
       }
   }
   std::string l;
   int comma_index = 0;
   for (int m = 0; m < length; ++m)
   {
       l = inp[m];
       std::cout << "l is " << l << std::endl;
       if (l == ",")
       {
           break;
       }
       else
       {
           std::cout << "l is" << l << std::endl;
           ++comma_index;
       }
   }
   std::cout << "comma index " << comma_index << std::endl;
   //we now know which indices have space and comma
   //getting the operator
   String ^ opera_tor = "";
   for (int j = 0; j <= space_index; ++j)
   {
       opera_tor = opera_tor + inp[j];
   }

   //getting the first operand
   String ^ operand1 = "";
   for (int g = space_index + 1; g < comma_index; ++g)
   {
       operand1 = operand1 + inp[g];
   }

   //getting the second operand
   String ^ operand2 = "";
   for (int f = comma_index + 1; f < length; ++f)
   {
       operand2 = operand2 + inp[f];
   }
   //operand 2 without H
   String^ woutH = "";
   int mm = length - 2;
   for (int d = comma_index + 1; d <= mm; ++d)
   {
       woutH = woutH + inp[d];
   }
   String^ operand1U = operand1->ToUpper();
   String^ operand2U = operand2->ToUpper();
   String^ operatorU = opera_tor->ToUpper();

   //number checker varaible checks whether the 2nd operand is a number or not
   String^ number_checker = "";
   for (int v = length - 1; v < length; ++v)
   {
       number_checker =number_checker + inp[v];
   }
   String^ NCU = number_checker->ToUpper();
   

   //we will also need the length of 2nd operand for checking size mismatch
   int num_size = length - comma_index - 2; //-1 for "H"
  

   //conditions for 8-bit registers (register direct addressing)
   if ((operand1U == "AL" || operand1U == "BL" || operand1U == "CL" || operand1U == "DL" || operand1U == "AH" || operand1U == "BH" || operand1U == "CH" || operand1U == "DH")
      && (operand2U == "AL" || operand2U == "BL" || operand2U == "CL" || operand2U == "DL" || operand2U == "AH" || operand2U == "BH" || operand2U == "CH" || operand2U == "DH"))
   {
       //EAXBox->Text = "THIS IS CORRECT!1";
       if (operand1U = operand2U) //same registers
       {
           ResultBox->Text = "Can't use same registers in an instruction!";
       }
       else //further operation for 8 bit registers
       {
           //EAXBox->Text = "THIS IS CORRECT!2";
           ResultBox->Text = "Correct instruction entered.";
           //machine code generation
           String^ machineCode = "10010 110 11"; //operand will always be mov and in the current conditions,both operands are 8-bit registers

           //machine code for operand1
           if (operand1U == "AL")
           {
               machineCode = machineCode + "000";
           }
           else if (operand1U == "CL")
           {
               machineCode = machineCode + "001";
           }
           else if (operand1U == "DL")
           {
               machineCode = machineCode + "010";
           }
           else if (operand1U == "BL")
           {
               machineCode = machineCode + "011";
           }
           else if (operand1U == "AH")
           {
               machineCode = machineCode + "100";
           }
           else if (operand1U == "CH")
           {
               machineCode = machineCode + "101";
           }
           else if (operand1U == "BH")
           {
               machineCode = machineCode + "110";
           }
           else if (operand1U == "DH")
           {
               machineCode = machineCode + "111";
           }

           //machine code for operand2
           if (operand2U == "AL")
           {
               machineCode = machineCode + "000";
           }
           else if (operand2U == "CL")
           {
               machineCode = machineCode + "001";
           }
           else if (operand2U == "DL")
           {
               machineCode = machineCode + "010";
           }
           else if (operand2U == "BL")
           {
               machineCode = machineCode + "011";
           }
           else if (operand2U == "AH")
           {
               machineCode = machineCode + "100";
           }
           else if (operand2U == "CH")
           {
               machineCode = machineCode + "101";
           }
           else if (operand2U == "BH")
           {
               machineCode = machineCode + "110";
           }
           else if (operand2U == "DH")
           {
               machineCode = machineCode + "111";
           }

           mCodeBox->Text = machineCode;

           if (operand1U == "BL" && operand2U == "AL")
           {
               EBXBox->Text = "23H";
           }

           Image^ myimage;
           myimage = gcnew Bitmap("C:\\registers.jpg");
           pictureBox1->Image = myimage;
       }
   }
   
   
   //conditions for 16-bit registers (register direct addressing)
   else if ((operand1U == "AX" || operand1U == "BX" || operand1U == "CX" || operand1U == "DX" || operand1U == "SP" || operand1U == "SI" || operand1U == "BP" || operand1U == "DI")
       && (operand2U == "AX" || operand2U == "BX" || operand2U == "CX" || operand2U == "DX" || operand2U == "SP" || operand2U == "SI" || operand2U == "BP" || operand2U == "DI"))
   {
       if (operand1U == operand2U) //same registers
       {
           ResultBox->Text = "Can't use same registers in an instruction!";
       }
       else //further operation for 16-bit registers
       {
           //EAXBox->Text = "THIS IS CORRECT!3";
           ResultBox->Text = "Correct instruction entered.";
           String^ machineCode = "100010 11 11";

           //Conditions for operand1
           if (operand1U == "AX")
           {
               machineCode = machineCode + "000";
           }
           else if (operand1U == "CX")
           {
               machineCode = machineCode + "001";
           }
           else if (operand1U == "DX")
           {
               machineCode = machineCode + "010";
           }
           else if (operand1U == "BX")
           {
               machineCode = machineCode + "011";
           }
           else if (operand1U == "SP")
           {
               machineCode = machineCode + "100";
           }
           else if (operand1U == "BP")
           {
               machineCode = machineCode + "101";
           }
           else if (operand1U == "SI")
           {
               machineCode = machineCode + "110";
           }
           else if (operand1U == "DI")
           {
               machineCode = machineCode + "111";
           }

           //conditions for operand2
           if (operand2U == "AX")
           {
               machineCode = machineCode + "000";
           }
           else if (operand2U == "CX")
           {
               machineCode = machineCode + "001";
           }
           else if (operand2U == "DX")
           {
               machineCode = machineCode + "010";
           }
           else if (operand2U == "BX")
           {
               machineCode = machineCode + "011";
           }
           else if (operand2U == "SP")
           {
               machineCode = machineCode + "100";
           }
           else if (operand2U == "BP")
           {
               machineCode = machineCode + "101";
           }
           else if (operand2U == "SI")
           {
               machineCode = machineCode + "110";
           }
           else if (operand2U == "DI")
           {
               machineCode = machineCode + "111";
           }

           mCodeBox->Text = machineCode;

           if (operand1U == "BX" && operand2U == "AX")
           {
               EBXBox->Text = "1234H";
           }
           Image^ myimage;
           myimage = gcnew Bitmap("C:\\registers.jpg");
           pictureBox1->Image = myimage;
       }
   }
   
   
   //operand 2 is a number (immediate addressing)
   else if (NCU == "H")
   {
       //for 8-bit register and number
       if ((operand1U == "AL" || operand1U == "BL" || operand1U == "CL" || operand1U == "DL" || operand1U == "AH" || operand1U == "BH" || operand1U == "CH" || operand1U == "DH") && num_size > 2)
       {
           ResultBox->Text = "Please enter a hex number compatible with 8-bit registers.";
       }
       else if((operand1U == "AL" || operand1U == "BL" || operand1U == "CL" || operand1U == "DL" || operand1U == "AH" || operand1U == "BH" || operand1U == "CH" || operand1U == "DH") && (num_size <= 2))
       {
           //REMOVING H from operand2
           //EAXBox->Text = "THIS IS CORRECT!4";
           ResultBox->Text = "Correct Instruction inserted.";
           String^ machineCode = "100010 11 ";
           if (operand1U == "AH")
           {
               machineCode = machineCode + "100";
               EAXBox->Text = woutH + "00" + "H";
           }
           else if (operand1U == "BH")
           {
               machineCode = machineCode + "110";
               EBXBox->Text = woutH + "00" + "H";
           }
           else if (operand1U == "CH")
           {
               machineCode = machineCode + "101";
               ECXBox->Text = woutH + "00" + "H";
           }
           else if (operand1U == "DH")
           {
               machineCode = machineCode + "111";
               EDXBox->Text = woutH + "00" + "H";
           }
           else if (operand1U == "AL")
           {
               machineCode = machineCode + "000";
               EAXBox->Text = "00" + operand2;
           }
           else if (operand1U == "BL")
           {
               machineCode = machineCode + "011";
               EBXBox->Text = "00" + operand2;
           }
           else if (operand1U == "CL")
           {
               machineCode = machineCode + "001";
               ECXBox->Text = "00" + operand2;
           }
           else if (operand1U == "DL")
           {
               machineCode = machineCode + "010";
               EDXBox->Text = "00" + operand2;
           }
           machineCode = machineCode + "00100011"; //for 23H
           mCodeBox->Text = machineCode;
           Image^ myimage;
           myimage = gcnew Bitmap("C:\\registers.jpg");
           pictureBox1->Image = myimage;
       }

       //for 16-bit register and number
       else if ((operand1U == "AX" || operand1U == "BX" || operand1U == "CX" || operand1U == "DX" || operand1U == "SP" || operand1U == "SI" || operand1U == "BP" || operand1U == "DI")
           && num_size > 4)
       {
           ResultBox->Text = "Please enter a hex number compatible with 16-bit register.";
       }
       else if((operand1U == "AX" || operand1U == "BX" || operand1U == "CX" || operand1U == "DX" || operand1U == "SP" || operand1U == "SI" || operand1U == "BP" || operand1U == "DI")
           && num_size <= 4)
       {
           //EAXBox->Text = "THIS IS CORRECT!5";
           ResultBox->Text = "Correct instruction inserted!";
           String^ machineCode = "100010 11 ";
           //updating the value in fields
           if (operand1U == "AX")
           {
               machineCode = machineCode + "000";
               EAXBox->Text = operand2;
               String^ AX = operand2;
           }
           else if (operand1U == "CX")
           {
               machineCode = machineCode + "001";
               ECXBox->Text = operand2;
               String^ EAX = operand2;
           }
           else if (operand1U == "DX")
           {
               machineCode = machineCode + "010";
               EDXBox->Text = operand2;
               String^ EAX = operand2;
           }
           else if (operand1U == "BX")
           {
               machineCode = machineCode + "011";
               EBXBox->Text = operand2;
               String^ EAX = operand2;
           }
           else if (operand1U == "SP")
           {
               machineCode = machineCode + "100";
               ESPBox->Text = operand2;
               String^ EAX = operand2;
           }
           else if (operand1U == "BP")
           {
               machineCode = machineCode + "101";
               EBPBox->Text = operand2;
               String^ EAX = operand2;
           }
           else if (operand1U == "SI")
           {
               machineCode = machineCode + "110";
               ESIBox->Text = operand2;
               String^ EAX = operand2;
           }
           else if (operand1U == "DI")
           {
               machineCode = machineCode + "111";
               EDIBox->Text = operand2;
               String^ EAX = operand2;
           }
           machineCode = machineCode + "00110100 00010010"; //for 1234H
           mCodeBox->Text = machineCode;
           Image^ myimage;
           myimage = gcnew Bitmap("C:\\registers.jpg");
           pictureBox1->Image = myimage;
           
       }
   }
   
   //for memory locations
   else if (operand1U == "[4 0000H]" && operand2U == "AX")
       {
           ResultBox->Text = "Correct instruction inserted!";
           Mem4Box->Text = "1234H";
           mCodeBox->Text = "100010 01 00 000 110 00000000 00000000 00001000";
           Image^ myimage;
           myimage = gcnew Bitmap("C:\\memory.jpg");
           pictureBox1->Image = myimage;

       }
   else if (operand1U == "CX" && operand2U == "[4 0000H]")
   {
       ResultBox->Text = "Correct instruction inserted!";
       ECXBox->Text = "1234H";
       mCodeBox->Text = "100010 11 00 001 110 00000000 00000000 00001000";
       Image^ myimage;
       myimage = gcnew Bitmap("C:\\memory.jpg");
       pictureBox1->Image = myimage;
       }
   else
   {
       ResultBox->Text = "Inorrect instruction inserted! Please try again.";
       }
}
private: System::Void ClrBtn_Click(System::Object^ sender, System::EventArgs^ e) { //the clear button
    pictureBox1 -> ImageLocation = "";
    InsBox->Text = "";
    ResultBox->Text = "";
    mCodeBox->Text = "";
    EAXBox->Text = "";
    EBXBox->Text = "";
    ECXBox->Text = "";
    EDXBox->Text = "";
    ESIBox->Text = "";
    ESPBox->Text = "";
    EBPBox->Text = "";
    EDIBox->Text = "";
    Mem0Box->Text = "";
    Mem1Box->Text = "";
    Mem2Box->Text = "";
    Mem3Box->Text = "";
    Mem4Box->Text = "";
    Mem5Box->Text = "";
    Mem6Box->Text = "";
    Mem7Box->Text = "";
    Mem8Box->Text = "";
    Mem9Box->Text = "";
    MemABox->Text = "";
    MemBBox->Text = "";
    MemCBox->Text = "";
    MemDBox->Text = "";
    MemEBox->Text = "";
    MemFBox->Text = "";
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}

