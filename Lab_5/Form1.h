#pragma once

namespace CppCLRWinFormsProject
{

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
			//tab_control
		private: System::Windows::Forms::TabControl^ tabControl_lab_1;
		protected:
			//tab_pages
		private: System::Windows::Forms::TabPage^ tabPageTask_6_1;
		private: System::Windows::Forms::TabPage^ tabPageTask_6_2;
		private: System::Windows::Forms::TabPage^ tabPageTask_6_3;
			   //group_boxes
		private: System::Windows::Forms::GroupBox^ groupBoxDescriptionTask_6_1;
		private: System::Windows::Forms::GroupBox^ groupBoxSolutionTask_6_1;
		private: System::Windows::Forms::GroupBox^ groupBoxDescriptionTask_6_2;
		private: System::Windows::Forms::GroupBox^ groupBoxSolutionTask_6_2;
		private: System::Windows::Forms::GroupBox^ groupBoxDescriptionTask_6_3;
		private: System::Windows::Forms::GroupBox^ groupBoxSolutionTask_6_3;
			   //labels
		private: System::Windows::Forms::Label^ labelSTask_6_1;
		private: System::Windows::Forms::Label^ labelNTask_6_1;		
		private: System::Windows::Forms::Label^ labelN1Task_6_2;
		private: System::Windows::Forms::Label^ labelN2Task_6_2;
		private: System::Windows::Forms::Label^ labelS1Task_6_2;
		private: System::Windows::Forms::Label^ labelS2Task_6_2;
		private: System::Windows::Forms::Label^ labelStringWithSpacesTask_6_3;		
			   //text_boxes
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxInputSTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxInputNTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxResultTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_2;
		private: System::Windows::Forms::TextBox^ txtBxResultTask_6_2;
		private: System::Windows::Forms::TextBox^ txtBxInputN1Task_6_2;
		private: System::Windows::Forms::TextBox^ txtBxInputN2Task_6_2;
		private: System::Windows::Forms::TextBox^ txtBxInputS1Task_6_2;
		private: System::Windows::Forms::TextBox^ txtBxInputS2Task_6_2;
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_3;
		private: System::Windows::Forms::TextBox^ txtBxInputStringWithSpacesTask_6_3;
		private: System::Windows::Forms::TextBox^ txtBxResultTask_6_3;
			   //buttons
		private: System::Windows::Forms::Button^ btnGetResultConvertStringTask_6_1;	
		private: System::Windows::Forms::Button^ btnGetNewStringTask_6_2;		
		private: System::Windows::Forms::Button^ btnDeleteSpacesTask_6_3;

		protected:

		protected:

		private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			//tab_control
			this->tabControl_lab_1 = (gcnew System::Windows::Forms::TabControl());
			this->tabControl_lab_1->SuspendLayout();
			//tab_pages
			this->tabPageTask_6_1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageTask_6_1->SuspendLayout();
			this->tabPageTask_6_2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageTask_6_2->SuspendLayout();
			this->tabPageTask_6_3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPageTask_6_3->SuspendLayout();
			//group_boxes
			this->groupBoxDescriptionTask_6_1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxDescriptionTask_6_1->SuspendLayout();
			this->groupBoxSolutionTask_6_1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxSolutionTask_6_1->SuspendLayout();
			this->groupBoxDescriptionTask_6_2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxDescriptionTask_6_2->SuspendLayout();
			this->groupBoxSolutionTask_6_2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxSolutionTask_6_2->SuspendLayout();
			this->groupBoxDescriptionTask_6_3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxDescriptionTask_6_3->SuspendLayout();
			this->groupBoxSolutionTask_6_3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxSolutionTask_6_3->SuspendLayout();
			//labels			
			this->labelNTask_6_1 = (gcnew System::Windows::Forms::Label());
			this->labelSTask_6_1 = (gcnew System::Windows::Forms::Label());
			this->labelN1Task_6_2 = (gcnew System::Windows::Forms::Label());
			this->labelN2Task_6_2 = (gcnew System::Windows::Forms::Label());
			this->labelS1Task_6_2 = (gcnew System::Windows::Forms::Label());
			this->labelS2Task_6_2 = (gcnew System::Windows::Forms::Label());
			this->labelStringWithSpacesTask_6_3 = (gcnew System::Windows::Forms::Label());		
			//text_boxes
			this->txtBxDescriptionTask_6_1 = (gcnew System::Windows::Forms::TextBox());		
			this->txtBxInputNTask_6_1 = (gcnew System::Windows::Forms::TextBox());
			this->txtBxInputSTask_6_1 = (gcnew System::Windows::Forms::TextBox());
			this->txtBxResultTask_6_1 = (gcnew System::Windows::Forms::TextBox());
			this->txtBxDescriptionTask_6_2 = (gcnew System::Windows::Forms::TextBox());
			this->txtBxInputN1Task_6_2 = (gcnew System::Windows::Forms::TextBox());
			this->txtBxInputN2Task_6_2 = (gcnew System::Windows::Forms::TextBox());
			this->txtBxInputS1Task_6_2 = (gcnew System::Windows::Forms::TextBox());
			this->txtBxInputS2Task_6_2 = (gcnew System::Windows::Forms::TextBox());
			this->txtBxResultTask_6_2 = (gcnew System::Windows::Forms::TextBox());
			this->txtBxDescriptionTask_6_3 = (gcnew System::Windows::Forms::TextBox());
			this->txtBxInputStringWithSpacesTask_6_3 = (gcnew System::Windows::Forms::TextBox());
			this->txtBxResultTask_6_3 = (gcnew System::Windows::Forms::TextBox());
			//buttons
			this->btnGetResultConvertStringTask_6_1 = (gcnew System::Windows::Forms::Button());			
			this->btnGetNewStringTask_6_2 = (gcnew System::Windows::Forms::Button());		
			this->btnDeleteSpacesTask_6_3 = (gcnew System::Windows::Forms::Button());

			this->SuspendLayout();

			//tabControls			
			this->tabControl_lab_1->Controls->Add(this->tabPageTask_6_1);
			this->tabControl_lab_1->Controls->Add(this->tabPageTask_6_2);
			this->tabControl_lab_1->Controls->Add(this->tabPageTask_6_3);
			this->tabControl_lab_1->Location = System::Drawing::Point(0, 1);
			this->tabControl_lab_1->Name = L"tabControl";
			this->tabControl_lab_1->SelectedIndex = 0;
			this->tabControl_lab_1->Size = System::Drawing::Size(848, 468);
			this->tabControl_lab_1->TabIndex = 0;
			// tabPageTask_6_1			
			this->tabPageTask_6_1->Controls->Add(this->groupBoxSolutionTask_6_1);
			this->tabPageTask_6_1->Controls->Add(this->groupBoxDescriptionTask_6_1);
			this->tabPageTask_6_1->Location = System::Drawing::Point(4, 22);
			this->tabPageTask_6_1->Name = L"tabPage1";
			this->tabPageTask_6_1->Padding = System::Windows::Forms::Padding(3);
			this->tabPageTask_6_1->Size = System::Drawing::Size(840, 442);
			this->tabPageTask_6_1->TabIndex = 0;
			this->tabPageTask_6_1->Text = L"Task_6.1";
			this->tabPageTask_6_1->UseVisualStyleBackColor = true;
			// groupBoxSolutionTask_6_1			
			this->groupBoxSolutionTask_6_1->Controls->Add(this->txtBxResultTask_6_1);
			this->groupBoxSolutionTask_6_1->Controls->Add(this->btnGetResultConvertStringTask_6_1);		
			this->groupBoxSolutionTask_6_1->Controls->Add(this->txtBxInputNTask_6_1);
			this->groupBoxSolutionTask_6_1->Controls->Add(this->txtBxInputSTask_6_1);
			this->groupBoxSolutionTask_6_1->Controls->Add(this->labelNTask_6_1);
			this->groupBoxSolutionTask_6_1->Controls->Add(this->labelSTask_6_1);
			this->groupBoxSolutionTask_6_1->Location = System::Drawing::Point(8, 90);
			this->groupBoxSolutionTask_6_1->Name = L"groupBox2";
			this->groupBoxSolutionTask_6_1->Size = System::Drawing::Size(823, 346);
			this->groupBoxSolutionTask_6_1->TabIndex = 1;
			this->groupBoxSolutionTask_6_1->TabStop = false;
			this->groupBoxSolutionTask_6_1->Text = L"Решение";
			// txtBxResultTask_6_1				
			this->txtBxResultTask_6_1->AcceptsReturn = true;
			this->txtBxResultTask_6_1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtBxResultTask_6_1->Location = System::Drawing::Point(7, 116);
			this->txtBxResultTask_6_1->Multiline = true;
			this->txtBxResultTask_6_1->Name = L"textBoxOutputResult";
			this->txtBxResultTask_6_1->ReadOnly = true;
			this->txtBxResultTask_6_1->Size = System::Drawing::Size(810, 224);
			this->txtBxResultTask_6_1->TabIndex = 7;
			this->txtBxResultTask_6_1->ScrollBars = ScrollBars::Vertical;
			// btnGetResultConvertStringTask_6_1			
			this->btnGetResultConvertStringTask_6_1->Location = System::Drawing::Point(659, 63);
			this->btnGetResultConvertStringTask_6_1->Name = L"btnGetResultConvertStringTask_6_1";
			this->btnGetResultConvertStringTask_6_1->Size = System::Drawing::Size(148, 23);
			this->btnGetResultConvertStringTask_6_1->TabIndex = 6;
			this->btnGetResultConvertStringTask_6_1->Text = L"Преобразовать строку";
			this->btnGetResultConvertStringTask_6_1->UseVisualStyleBackColor = true;
			this->btnGetResultConvertStringTask_6_1->Click += gcnew System::EventHandler(this, &Form1::btnGetResultConvertStringTask_6_1_Click);
			// txtBxInputSTask_6_1			
			this->txtBxInputNTask_6_1->Location = System::Drawing::Point(191, 67);
			this->txtBxInputNTask_6_1->Name = L"textBoxInputS";
			this->txtBxInputNTask_6_1->Size = System::Drawing::Size(225, 20);
			this->txtBxInputNTask_6_1->TabIndex = 4;
			// txtBxInputVTask_6_1				
			this->txtBxInputSTask_6_1->Location = System::Drawing::Point(7, 67);
			this->txtBxInputSTask_6_1->Name = L"textBoxInputV";
			this->txtBxInputSTask_6_1->Size = System::Drawing::Size(171, 20);
			this->txtBxInputSTask_6_1->TabIndex = 3;			
			// labelSTask_6_1				
			this->labelNTask_6_1->AutoSize = true;
			this->labelNTask_6_1->Location = System::Drawing::Point(188, 38);
			this->labelNTask_6_1->Name = L"label2";
			this->labelNTask_6_1->Size = System::Drawing::Size(228, 13);
			this->labelNTask_6_1->TabIndex = 1;
			this->labelNTask_6_1->Text = L"Введите число N";
			// labelVTask_6_1				
			this->labelSTask_6_1->AutoSize = true;
			this->labelSTask_6_1->Location = System::Drawing::Point(6, 38);
			this->labelSTask_6_1->Name = L"label1";
			this->labelSTask_6_1->Size = System::Drawing::Size(172, 13);
			this->labelSTask_6_1->TabIndex = 0;
			this->labelSTask_6_1->Text = L"Введите строку S";
			// groupBoxDescriptionTask_6_1			
			this->groupBoxDescriptionTask_6_1->BackColor = System::Drawing::Color::Transparent;
			this->groupBoxDescriptionTask_6_1->Controls->Add(this->txtBxDescriptionTask_6_1);
			this->groupBoxDescriptionTask_6_1->Location = System::Drawing::Point(8, 6);
			this->groupBoxDescriptionTask_6_1->Name = L"groupBox1";
			this->groupBoxDescriptionTask_6_1->Size = System::Drawing::Size(823, 78);
			this->groupBoxDescriptionTask_6_1->TabIndex = 0;
			this->groupBoxDescriptionTask_6_1->TabStop = false;
			this->groupBoxDescriptionTask_6_1->Text = L"Описание задачи";
			// txtBxDescriptionTask_6_1				 
			this->txtBxDescriptionTask_6_1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtBxDescriptionTask_6_1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBxDescriptionTask_6_1->Location = System::Drawing::Point(6, 19);
			this->txtBxDescriptionTask_6_1->Multiline = true;
			this->txtBxDescriptionTask_6_1->Name = L"textBoxDescriptionTask6_1";
			this->txtBxDescriptionTask_6_1->ReadOnly = true;
			this->txtBxDescriptionTask_6_1->Size = System::Drawing::Size(811, 51);
			this->txtBxDescriptionTask_6_1->TabIndex = 0;
			this->txtBxDescriptionTask_6_1->Text = L"Дана строка S и число N. Преобразовать строку S в строку длины N "
													+ "следующим образом : если длина строки S больше N, то отбросить первые "
													+ "символы, если длина строки S меньше N, то в ее начало добавить символы «.» (точка)";
			// 	
			// tabPageTask_6_2	
			// 		
			this->tabPageTask_6_2->Controls->Add(this->groupBoxSolutionTask_6_2);
			this->tabPageTask_6_2->Controls->Add(this->groupBoxDescriptionTask_6_2);
			this->tabPageTask_6_2->Location = System::Drawing::Point(4, 22);
			this->tabPageTask_6_2->Name = L"tabPage2";
			this->tabPageTask_6_2->Padding = System::Windows::Forms::Padding(3);
			this->tabPageTask_6_2->Size = System::Drawing::Size(840, 442);
			this->tabPageTask_6_2->TabIndex = 1;
			this->tabPageTask_6_2->Text = L"Task_6.2";
			this->tabPageTask_6_2->UseVisualStyleBackColor = true;
			// groupBoxSolutionTask_6_2				 
			this->groupBoxSolutionTask_6_2->Controls->Add(this->txtBxResultTask_6_2);
			this->groupBoxSolutionTask_6_2->Controls->Add(this->btnGetNewStringTask_6_2);		
			this->groupBoxSolutionTask_6_2->Controls->Add(this->txtBxInputN1Task_6_2);
			this->groupBoxSolutionTask_6_2->Controls->Add(this->txtBxInputN2Task_6_2);
			this->groupBoxSolutionTask_6_2->Controls->Add(this->txtBxInputS1Task_6_2);
			this->groupBoxSolutionTask_6_2->Controls->Add(this->txtBxInputS2Task_6_2);
			this->groupBoxSolutionTask_6_2->Controls->Add(this->labelN1Task_6_2);
			this->groupBoxSolutionTask_6_2->Controls->Add(this->labelN2Task_6_2);
			this->groupBoxSolutionTask_6_2->Controls->Add(this->labelS1Task_6_2);
			this->groupBoxSolutionTask_6_2->Controls->Add(this->labelS2Task_6_2);
			this->groupBoxSolutionTask_6_2->Location = System::Drawing::Point(3, 54);
			this->groupBoxSolutionTask_6_2->Name = L"groupBox4";
			this->groupBoxSolutionTask_6_2->Size = System::Drawing::Size(834, 385);
			this->groupBoxSolutionTask_6_2->TabIndex = 1;
			this->groupBoxSolutionTask_6_2->TabStop = false;
			this->groupBoxSolutionTask_6_2->Text = L"Решение";
			// txtBxResultTask_6_2				
			this->txtBxResultTask_6_2->Location = System::Drawing::Point(6, 142);
			this->txtBxResultTask_6_2->Multiline = true;
			this->txtBxResultTask_6_2->Name = L"txtBxResultTask_6_2";
			this->txtBxResultTask_6_2->Size = System::Drawing::Size(822, 237);
			this->txtBxResultTask_6_2->TabIndex = 4;
			// btnGetPerimeterTask_6_2				
			this->btnGetNewStringTask_6_2->Location = System::Drawing::Point(543, 45);
			this->btnGetNewStringTask_6_2->Name = L"buttonGetPerimeter";
			this->btnGetNewStringTask_6_2->Size = System::Drawing::Size(229, 23);
			this->btnGetNewStringTask_6_2->TabIndex = 3;
			this->btnGetNewStringTask_6_2->Text = L"Получить новую строку";
			this->btnGetNewStringTask_6_2->UseVisualStyleBackColor = true;
			this->btnGetNewStringTask_6_2->Click += gcnew System::EventHandler(this, &Form1::btnGetNewStringTask_6_2_Click);
			// txtBxInputN1Task_6_2				
			this->txtBxInputN1Task_6_2->Location = System::Drawing::Point(5, 48);
			this->txtBxInputN1Task_6_2->Name = L"txtBxInputN1Task_6_2";
			this->txtBxInputN1Task_6_2->Size = System::Drawing::Size(95, 20);
			this->txtBxInputN1Task_6_2->TabIndex = 1;
			// txtBxInputS1Task_6_2				
			this->txtBxInputS1Task_6_2->Location = System::Drawing::Point(250, 48);
			this->txtBxInputS1Task_6_2->Name = L"txtBxInputS1Task_6_2";
			this->txtBxInputS1Task_6_2->Size = System::Drawing::Size(98, 20);
			this->txtBxInputS1Task_6_2->TabIndex = 1;
			// txtBxInputS2Task_6_2				
			this->txtBxInputS2Task_6_2->Location = System::Drawing::Point(380, 48);
			this->txtBxInputS2Task_6_2->Name = L"txtBxInputS2Task_6_2";
			this->txtBxInputS2Task_6_2->Size = System::Drawing::Size(98, 20);
			this->txtBxInputS2Task_6_2->TabIndex = 1;
			// txtBxInputN2Task_6_2				
			this->txtBxInputN2Task_6_2->Location = System::Drawing::Point(120, 48);
			this->txtBxInputN2Task_6_2->Name = L"txtBxInputN2Task_6_2";
			this->txtBxInputN2Task_6_2->Size = System::Drawing::Size(98, 20);
			this->txtBxInputN2Task_6_2->TabIndex = 1;
			// labelN1Task_6_2				 
			this->labelN1Task_6_2->AutoSize = true;
			this->labelN1Task_6_2->Location = System::Drawing::Point(5, 32);
			this->labelN1Task_6_2->Name = L"label4";
			this->labelN1Task_6_2->Size = System::Drawing::Size(207, 13);
			this->labelN1Task_6_2->TabIndex = 0;
			this->labelN1Task_6_2->Text = L"Введите число N1";
			// labelN2Task_6_2				 
			this->labelN2Task_6_2->AutoSize = true;
			this->labelN2Task_6_2->Location = System::Drawing::Point(120, 32);
			this->labelN2Task_6_2->Name = L"label4";
			this->labelN2Task_6_2->Size = System::Drawing::Size(207, 13);
			this->labelN2Task_6_2->TabIndex = 0;
			this->labelN2Task_6_2->Text = L"Введите число N2";
			// labelS1Task_6_2				 
			this->labelS1Task_6_2->AutoSize = true;
			this->labelS1Task_6_2->Location = System::Drawing::Point(250, 32);
			this->labelS1Task_6_2->Name = L"label4";
			this->labelS1Task_6_2->Size = System::Drawing::Size(207, 13);
			this->labelS1Task_6_2->TabIndex = 0;
			this->labelS1Task_6_2->Text = L"Введите строку S1";
			// labelS2Task_6_2				 
			this->labelS2Task_6_2->AutoSize = true;
			this->labelS2Task_6_2->Location = System::Drawing::Point(380, 32);
			this->labelS2Task_6_2->Name = L"label4";
			this->labelS2Task_6_2->Size = System::Drawing::Size(207, 13);
			this->labelS2Task_6_2->TabIndex = 0;
			this->labelS2Task_6_2->Text = L"Введите строку S2";
			// groupBoxDescriptionTask_6_2				
			this->groupBoxDescriptionTask_6_2->Controls->Add(this->txtBxDescriptionTask_6_2);
			this->groupBoxDescriptionTask_6_2->Location = System::Drawing::Point(3, 0);
			this->groupBoxDescriptionTask_6_2->Name = L"groupBox3";
			this->groupBoxDescriptionTask_6_2->Size = System::Drawing::Size(834, 48);
			this->groupBoxDescriptionTask_6_2->TabIndex = 0;
			this->groupBoxDescriptionTask_6_2->TabStop = false;
			this->groupBoxDescriptionTask_6_2->Text = L"Описание задачи";
			// txtBxDescriptionTask_6_2				
			this->txtBxDescriptionTask_6_2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtBxDescriptionTask_6_2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBxDescriptionTask_6_2->Location = System::Drawing::Point(6, 17);
			this->txtBxDescriptionTask_6_2->Multiline = true;
			this->txtBxDescriptionTask_6_2->Name = L"textBox1";
			this->txtBxDescriptionTask_6_2->ReadOnly = true;
			this->txtBxDescriptionTask_6_2->Size = System::Drawing::Size(822, 25);
			this->txtBxDescriptionTask_6_2->TabIndex = 0;
			this->txtBxDescriptionTask_6_2->Text = L"Даны два числа: N1 и N2, и две строки: S1 и S2. Получить из этих строк новую " 
													+ "строку, объединив N1 первых символов строки S1 и N2 последних символов строки S2";
			// 
			// tabPageTask_6_3
			// 		
			this->tabPageTask_6_3->Controls->Add(this->groupBoxDescriptionTask_6_3);
			this->tabPageTask_6_3->Controls->Add(this->groupBoxSolutionTask_6_3);
			this->tabPageTask_6_3->Location = System::Drawing::Point(4, 22);
			this->tabPageTask_6_3->Name = L"tabPage3";
			this->tabPageTask_6_3->Padding = System::Windows::Forms::Padding(3);
			this->tabPageTask_6_3->Size = System::Drawing::Size(840, 442);
			this->tabPageTask_6_3->TabIndex = 1;
			this->tabPageTask_6_3->Text = L"Task_6.3";
			this->tabPageTask_6_3->UseVisualStyleBackColor = true;
			//groupBoxDescriptionTask_6_3
			this->groupBoxDescriptionTask_6_3->BackColor = System::Drawing::Color::Transparent;
			this->groupBoxDescriptionTask_6_3->Controls->Add(this->txtBxDescriptionTask_6_3);
			this->groupBoxDescriptionTask_6_3->Location = System::Drawing::Point(3, 0);
			this->groupBoxDescriptionTask_6_3->Name = L"groupBox";
			this->groupBoxDescriptionTask_6_3->Size = System::Drawing::Size(834, 60);
			this->groupBoxDescriptionTask_6_3->TabIndex = 0;
			this->groupBoxDescriptionTask_6_3->TabStop = false;
			this->groupBoxDescriptionTask_6_3->Text = L"Описание задачи";
			//textBoxDescriptionTask6_3				 
			this->txtBxDescriptionTask_6_3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtBxDescriptionTask_6_3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBxDescriptionTask_6_3->Location = System::Drawing::Point(6, 19);
			this->txtBxDescriptionTask_6_3->Multiline = true;
			this->txtBxDescriptionTask_6_3->Name = L"textBoxDescriptionTask6_3";
			this->txtBxDescriptionTask_6_3->ReadOnly = true;
			this->txtBxDescriptionTask_6_3->Size = System::Drawing::Size(811, 30);
			this->txtBxDescriptionTask_6_3->TabIndex = 0;
			this->txtBxDescriptionTask_6_3->Text = L" Дана строка-предложение, содержащая избыточные пробелы. Преобразовать" 
													+ " ее так, чтобы между словами был ровно один пробел.";
			//groupBoxSolutionTask_6_3
			this->groupBoxSolutionTask_6_3->Controls->Add(this->labelStringWithSpacesTask_6_3);		
			this->groupBoxSolutionTask_6_3->Controls->Add(this->txtBxInputStringWithSpacesTask_6_3);	
			this->groupBoxSolutionTask_6_3->Controls->Add(this->btnDeleteSpacesTask_6_3);
			this->groupBoxSolutionTask_6_3->Controls->Add(this->txtBxResultTask_6_3);		
			this->groupBoxSolutionTask_6_3->Location = System::Drawing::Point(3, 58);
			this->groupBoxSolutionTask_6_3->Name = L"groupBox4";
			this->groupBoxSolutionTask_6_3->Size = System::Drawing::Size(834, 380);
			this->groupBoxSolutionTask_6_3->TabIndex = 1;
			this->groupBoxSolutionTask_6_3->TabStop = false;
			this->groupBoxSolutionTask_6_3->Text = L"Решение";
			//labelMTask_6_3
			this->labelStringWithSpacesTask_6_3->AutoSize = true;
			this->labelStringWithSpacesTask_6_3->Location = System::Drawing::Point(260, 20);
			this->labelStringWithSpacesTask_6_3->Name = L"label4";
			this->labelStringWithSpacesTask_6_3->Size = System::Drawing::Size(207, 13);
			this->labelStringWithSpacesTask_6_3->TabIndex = 0;
			this->labelStringWithSpacesTask_6_3->Text = L"Введите строку, содержащую избыточные пробелы";		
			//txtBxInputMTask_6_3				
			this->txtBxInputStringWithSpacesTask_6_3->Location = System::Drawing::Point(7, 35);
			this->txtBxInputStringWithSpacesTask_6_3->Name = L"txtBxInputStringWithSpacesTask_6_3";
			this->txtBxInputStringWithSpacesTask_6_3->Size = System::Drawing::Size(820, 50);
			this->txtBxInputStringWithSpacesTask_6_3->TabIndex = 3;
			this->txtBxInputStringWithSpacesTask_6_3->AcceptsReturn = true;
			this->txtBxInputStringWithSpacesTask_6_3->Multiline = true;
			//txtBxResultTask_6_3				
			this->txtBxResultTask_6_3->Location = System::Drawing::Point(6, 138);
			this->txtBxResultTask_6_3->Multiline = true;
			this->txtBxResultTask_6_3->Name = L"txtBxResultTask_6_3";
			this->txtBxResultTask_6_3->Size = System::Drawing::Size(822, 237);
			this->txtBxResultTask_6_3->TabIndex = 4;			
			//btnGetResultY2Task_6_3
			this->btnDeleteSpacesTask_6_3->Location = System::Drawing::Point(5, 100);
			this->btnDeleteSpacesTask_6_3->Name = L"btnDeleteSpacesTask_6_3";
			this->btnDeleteSpacesTask_6_3->Size = System::Drawing::Size(229, 23);
			this->btnDeleteSpacesTask_6_3->TabIndex = 3;
			this->btnDeleteSpacesTask_6_3->Text = L"Удалить лишние пробелы";
			this->btnDeleteSpacesTask_6_3->UseVisualStyleBackColor = true;
			this->btnDeleteSpacesTask_6_3->Click += gcnew System::EventHandler(this, &Form1::btnDeleteSpacesTask_6_3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 469);
			this->Controls->Add(this->tabControl_lab_1);
			this->Name = L"Form1";
			this->Text = L"Лабораторная № 5";
			this->tabControl_lab_1->ResumeLayout(false);
			this->tabPageTask_6_1->ResumeLayout(false);
			this->groupBoxSolutionTask_6_1->ResumeLayout(false);
			this->groupBoxSolutionTask_6_1->PerformLayout();
			this->groupBoxDescriptionTask_6_1->ResumeLayout(false);
			this->groupBoxDescriptionTask_6_1->PerformLayout();
			this->tabPageTask_6_2->ResumeLayout(false);
			this->groupBoxSolutionTask_6_2->ResumeLayout(false);
			this->groupBoxSolutionTask_6_2->PerformLayout();
			this->groupBoxDescriptionTask_6_2->ResumeLayout(false);
			this->groupBoxDescriptionTask_6_2->PerformLayout();
			this->groupBoxDescriptionTask_6_3->ResumeLayout(false);
			this->groupBoxDescriptionTask_6_3->PerformLayout();
			this->MinimumSize = System::Drawing::Size(863, 508);
			this->MaximumSize = System::Drawing::Size(863, 508);
			this->ResumeLayout(false);

		}

		#pragma region Task_6_1

		System::Void btnGetResultConvertStringTask_6_1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (!IsValidateN(txtBxInputNTask_6_1->Text))
				return;

			if (String::IsNullOrWhiteSpace(txtBxInputSTask_6_1->Text)) 
			{
				MessageBox::Show("Необходимо заполнить строку S", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
				

			int n = Convert::ToInt64(txtBxInputNTask_6_1->Text);
			String^ s = txtBxInputSTask_6_1->Text;
			System::Text::StringBuilder^ strBuilder = gcnew System::Text::StringBuilder();

			if (s->Length > n) 
			{
				txtBxResultTask_6_1->Text = s->Substring(s->Length - n);
			}
			else if(s->Length < n)
			{
				for (int i = 0; i < n - s->Length; i++)
				{
					strBuilder->Append(".");
				}

				txtBxResultTask_6_1->Text = strBuilder->ToString() + s;
			}
			else
			{
				txtBxResultTask_6_1->Text = s;
			}
		}

		System::Boolean IsValidateN(String^ n) 
		{
			int parseResult;

			if (String::IsNullOrWhiteSpace(n)) 
			{
				MessageBox::Show("Необходимо заполнить число N", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			if (!int::TryParse(n, parseResult)) 
			{
				MessageBox::Show("N должно быть целым числом", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			if (parseResult < 0 || parseResult == 0)
			{
				MessageBox::Show("N должно быть больше 0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			return true;
		}
		#pragma endregion

		#pragma region Task_6_2
		System::Void btnGetNewStringTask_6_2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (!isValidateN1N2(txtBxInputN1Task_6_2->Text, "N1"))
				return;

			if (!isValidateN1N2(txtBxInputN2Task_6_2->Text, "N2"))
				return;

			if (String::IsNullOrWhiteSpace(txtBxInputS1Task_6_2->Text)) 
			{
				MessageBox::Show("Необходимо заполнить строку S1", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (String::IsNullOrWhiteSpace(txtBxInputS2Task_6_2->Text))
			{
				MessageBox::Show("Необходимо заполнить строку S2", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}		

			int n1 = Convert::ToInt64(txtBxInputN1Task_6_2->Text);
			int n2 = Convert::ToInt64(txtBxInputN2Task_6_2->Text);

			String^ s1 = txtBxInputS1Task_6_2->Text;
			String^ s2 = txtBxInputS2Task_6_2->Text;

			if (s1->Length < n1)
			{
				MessageBox::Show("Длина строки S1 не может быть меньше N1", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (s2->Length < n2)
			{
				MessageBox::Show("Длина строки S2 не может быть меньше N2", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			String^ substrS1 = s1->Substring(0, n1);
			String^ substrS2 = s2->Substring(s2->Length - n2);

			txtBxResultTask_6_2->Text = substrS1 + substrS2;
		}

		Boolean isValidateN1N2(String^ n, String^ nameN) 
		{
			int parseResult;

			if (String::IsNullOrWhiteSpace(n))
			{
				MessageBox::Show("Необходимо заполнить число " + nameN, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			if (!int::TryParse(n, parseResult))
			{
				MessageBox::Show(nameN + " должно быть целым числом", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			if (parseResult < 0 || parseResult == 0)
			{
				MessageBox::Show(nameN + " должно быть больше 0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			return true;
		}
		#pragma endregion

		#pragma region Task_6_3
		System::Void btnDeleteSpacesTask_6_3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ str = txtBxInputStringWithSpacesTask_6_3->Text;

			if (String::IsNullOrWhiteSpace(str))
			{
				MessageBox::Show("Необходимо ввести строку", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			cli::array<System::String^>^ strArray =  str->Split(' ');

			txtBxResultTask_6_3->Text = strArray->Length.ToString();
			System::Collections::Generic::List<String^>^ strList = gcnew System::Collections::Generic::List<String^>(strArray);
			System::Predicate<String^>^ spacePredicate = gcnew System::Predicate<String^>(this, &Form1::IsNullOrSpace);
			strList->RemoveAll(spacePredicate);
			
			System::Text::StringBuilder^ strBuilder = gcnew System::Text::StringBuilder();

			for (int i = 0; i < strList->Count; i++)
			{
				if ((i + 1 < strList->Count) && (strList[i + 1] == "," || strList[i + 1] == "?" || strList[i + 1] == "!" || strList[i + 1] == "\"" || strList[i + 1] == "."))
				{
					strBuilder->Append(strList[i]);
				}
				else
				{
					strBuilder->Append(strList[i] + " ");
				}
			}

			//txtBxResultTask_6_3->Text = String::Join(" ", strList);
			txtBxResultTask_6_3->Text = strBuilder->ToString();
		}

		private: System::Boolean IsNullOrSpace(String^ str)
		{
			return String::IsNullOrWhiteSpace(str);
		}
		#pragma endregion
	};
};

