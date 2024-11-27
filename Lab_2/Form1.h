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
			   //text_boxes
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxInputXTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxYTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_2;
		private: System::Windows::Forms::TextBox^ txtBxInputPointXTask_6_2;
		private: System::Windows::Forms::TextBox^ txtBxInputPointYTask_6_2;
		private: System::Windows::Forms::TextBox^ txtBxResultTask_6_2;
		private: System::Windows::Forms::TextBox^ txtBxInputXkTask_6_3;
		private: System::Windows::Forms::TextBox^ txtBxInputXnTask_6_3;
		private: System::Windows::Forms::TextBox^ txtBxInputHTask_6_3;
		private: System::Windows::Forms::TextBox^ txtBxInputATask_6_3;
		private: System::Windows::Forms::TextBox^ txtBxInputBTask_6_3;
		private: System::Windows::Forms::TextBox^ txtBxInputCTask_6_3;
			   //buttons
		private: System::Windows::Forms::Button^ btnGetValueFuncTask_6_1;
		private: System::Windows::Forms::Button^ btnPointFallsFigureTask_6_2;
		private: System::Windows::Forms::Button^ btnGetResultTask_6_3;
			   //pictureBox
		private: PictureBox^ pctBoxTask_6_1;
		private: PictureBox^ pctBoxTask_6_2;
		private: PictureBox^ pctBoxTask_6_3;
			   //labels
		private: System::Windows::Forms::Label^ labelInputXTask_6_1;
		private: System::Windows::Forms::Label^ labelYTask_6_1;
		private: System::Windows::Forms::Label^ labelPointXTask_6_2;
		private: System::Windows::Forms::Label^ labelPointYTask_6_2;
		private: System::Windows::Forms::Label^ labelResultTask_6_2;
		private: System::Windows::Forms::Label^ labelInputXnTask_6_3;
		private: System::Windows::Forms::Label^ labelInputXkTask_6_3;
		private: System::Windows::Forms::Label^ labelInputHTask_6_3;
		private: System::Windows::Forms::Label^ labelInputATask_6_3;
		private: System::Windows::Forms::Label^ labelInputBTask_6_3;
		private: System::Windows::Forms::Label^ labelInputCTask_6_3;
			   //datagridView
		private: System::Windows::Forms::DataGridView^ dtgViewResultTask_6_3;

		protected:

		protected:

		private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {
			   //datagridView
			   this->dtgViewResultTask_6_3 = (gcnew System::Windows::Forms::DataGridView());
			   this->dtgViewResultTask_6_3->SuspendLayout();
			   //pctrBox
			   this->pctBoxTask_6_1 = (gcnew PictureBox());
			   this->pctBoxTask_6_1->SuspendLayout();
			   this->pctBoxTask_6_2 = (gcnew PictureBox());
			   this->pctBoxTask_6_2->SuspendLayout();
			   this->pctBoxTask_6_3 = (gcnew PictureBox());
			   this->pctBoxTask_6_3->SuspendLayout();
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
			   //text_boxes
			   this->txtBxDescriptionTask_6_1 = (gcnew System::Windows::Forms::TextBox());		
			   this->txtBxInputXTask_6_1 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxYTask_6_1 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxDescriptionTask_6_2 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputPointXTask_6_2 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputPointYTask_6_2 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxResultTask_6_2 = (gcnew System::Windows::Forms::TextBox());			   
			   this->txtBxInputXnTask_6_3 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputXkTask_6_3 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputHTask_6_3 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputATask_6_3 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputBTask_6_3 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputCTask_6_3 = (gcnew System::Windows::Forms::TextBox());
			   //buttons
			   this->btnGetValueFuncTask_6_1 = (gcnew System::Windows::Forms::Button());
			   this->btnPointFallsFigureTask_6_2 = (gcnew System::Windows::Forms::Button());
			   this->btnGetResultTask_6_3 = (gcnew System::Windows::Forms::Button());
			   //labels
			   this->labelInputXTask_6_1 = (gcnew System::Windows::Forms::Label());
			   this->labelYTask_6_1 = (gcnew System::Windows::Forms::Label());
			   this->labelPointXTask_6_2 = (gcnew System::Windows::Forms::Label());
			   this->labelPointYTask_6_2 = (gcnew System::Windows::Forms::Label());
			   this->labelResultTask_6_2 = (gcnew System::Windows::Forms::Label());
			   this->labelInputXnTask_6_3 = (gcnew System::Windows::Forms::Label());
			   this->labelInputXkTask_6_3 = (gcnew System::Windows::Forms::Label());
			   this->labelInputHTask_6_3 = (gcnew System::Windows::Forms::Label());
			   this->labelInputATask_6_3 = (gcnew System::Windows::Forms::Label());
			   this->labelInputBTask_6_3 = (gcnew System::Windows::Forms::Label());
			   this->labelInputCTask_6_3 = (gcnew System::Windows::Forms::Label());

			   this->SuspendLayout();

			   //tabControls			
			   this->tabControl_lab_1->Controls->Add(this->tabPageTask_6_1);
			   this->tabControl_lab_1->Controls->Add(this->tabPageTask_6_2);
			   this->tabControl_lab_1->Controls->Add(this->tabPageTask_6_3);
			   this->tabControl_lab_1->Location = System::Drawing::Point(0, 1);
			   this->tabControl_lab_1->Name = L"tabControl";
			   this->tabControl_lab_1->SelectedIndex = 0;
			   this->tabControl_lab_1->Size = System::Drawing::Size(1400, 668);
			   this->tabControl_lab_1->TabIndex = 0;
			   // tabPageTask_6_1			
			   this->tabPageTask_6_1->Controls->Add(this->groupBoxSolutionTask_6_1);
			   this->tabPageTask_6_1->Controls->Add(this->groupBoxDescriptionTask_6_1);
			   this->tabPageTask_6_1->Location = System::Drawing::Point(4, 22);
			   this->tabPageTask_6_1->Name = L"tabPage1";
			   this->tabPageTask_6_1->Padding = System::Windows::Forms::Padding(3);
			   this->tabPageTask_6_1->Size = System::Drawing::Size(840, 442);
			   this->tabPageTask_6_1->TabIndex = 0;
			   this->tabPageTask_6_1->Text = L"Задание №1";
			   this->tabPageTask_6_1->UseVisualStyleBackColor = true;
			   // groupBoxSolutionTask_6_1	
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->btnGetValueFuncTask_6_1);
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->labelInputXTask_6_1);
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->labelYTask_6_1);
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->txtBxInputXTask_6_1);
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->txtBxYTask_6_1);
			   this->groupBoxSolutionTask_6_1->Location = System::Drawing::Point(8, 310);
			   this->groupBoxSolutionTask_6_1->Name = L"groupBox2";
			   this->groupBoxSolutionTask_6_1->Size = System::Drawing::Size(960, 320);
			   this->groupBoxSolutionTask_6_1->TabIndex = 1;
			   this->groupBoxSolutionTask_6_1->TabStop = false;
			   this->groupBoxSolutionTask_6_1->Text = L"Решение";
			   //dtgViewResultTask_6_3
			   //this->dtgViewResultTask_6_3->RowCount = countRowMatrixTask_6_1;
			   this->dtgViewResultTask_6_3->ColumnCount = 2;
			   this->dtgViewResultTask_6_3->Columns[0]->Name = "y";
			   this->dtgViewResultTask_6_3->Columns[1]->Name = "x";
			   this->dtgViewResultTask_6_3->Location = System::Drawing::Point(5, 70);
			   this->dtgViewResultTask_6_3->Size = System::Drawing::Size(950, 240);			 
			   // labelInputXnTask_6_3				
			   this->labelInputXnTask_6_3->AutoSize = true;
			   this->labelInputXnTask_6_3->Location = System::Drawing::Point(8, 15);
			   this->labelInputXnTask_6_3->Name = L"labelInputXnTask_6_3";
			   this->labelInputXnTask_6_3->Size = System::Drawing::Size(172, 13);
			   this->labelInputXnTask_6_3->TabIndex = 0;
			   this->labelInputXnTask_6_3->Text = L"Введите Xn";
			   // labelInputXkTask_6_3				
			   this->labelInputXkTask_6_3->AutoSize = true;
			   this->labelInputXkTask_6_3->Location = System::Drawing::Point(75, 15);
			   this->labelInputXkTask_6_3->Name = L"labelInputXkTask_6_3";
			   this->labelInputXkTask_6_3->Size = System::Drawing::Size(172, 13);
			   this->labelInputXkTask_6_3->TabIndex = 0;
			   this->labelInputXkTask_6_3->Text = L"Введите Xk";
			   // labelInputHTask_6_3				
			   this->labelInputHTask_6_3->AutoSize = true;
			   this->labelInputHTask_6_3->Location = System::Drawing::Point(140, 15);
			   this->labelInputHTask_6_3->Name = L"labelInputHTask_6_3";
			   this->labelInputHTask_6_3->Size = System::Drawing::Size(172, 13);
			   this->labelInputHTask_6_3->TabIndex = 0;
			   this->labelInputHTask_6_3->Text = L"Введите h";
			   // labelInputATask_6_3				
			   this->labelInputATask_6_3->AutoSize = true;
			   this->labelInputATask_6_3->Location = System::Drawing::Point(200, 15);
			   this->labelInputATask_6_3->Name = L"labelInputATask_6_3";
			   this->labelInputATask_6_3->Size = System::Drawing::Size(172, 13);
			   this->labelInputATask_6_3->TabIndex = 0;
			   this->labelInputATask_6_3->Text = L"Введите a";
			   // labelInputBTask_6_3				
			   this->labelInputBTask_6_3->AutoSize = true;
			   this->labelInputBTask_6_3->Location = System::Drawing::Point(260, 15);
			   this->labelInputBTask_6_3->Name = L"labelInputBTask_6_3";
			   this->labelInputBTask_6_3->Size = System::Drawing::Size(172, 13);
			   this->labelInputBTask_6_3->TabIndex = 0;
			   this->labelInputBTask_6_3->Text = L"Введите b";
			   // labelInputCTask_6_3				
			   this->labelInputCTask_6_3->AutoSize = true;
			   this->labelInputCTask_6_3->Location = System::Drawing::Point(320, 15);
			   this->labelInputCTask_6_3->Name = L"labelInputCTask_6_3";
			   this->labelInputCTask_6_3->Size = System::Drawing::Size(172, 13);
			   this->labelInputCTask_6_3->TabIndex = 0;
			   this->labelInputCTask_6_3->Text = L"Введите c";
			   // labelInputXTask_6_1				
			   this->labelInputXTask_6_1->AutoSize = true;
			   this->labelInputXTask_6_1->Location = System::Drawing::Point(6, 20);
			   this->labelInputXTask_6_1->Name = L"labelInputXTask_6_1";
			   this->labelInputXTask_6_1->Size = System::Drawing::Size(172, 13);
			   this->labelInputXTask_6_1->TabIndex = 0;
			   this->labelInputXTask_6_1->Text = L"Введите значение X";
			   // labelYTask_6_1				
			   this->labelYTask_6_1->AutoSize = true;
			   this->labelYTask_6_1->Location = System::Drawing::Point(335, 20);
			   this->labelYTask_6_1->Name = L"labelYTask_6_1";
			   this->labelYTask_6_1->Size = System::Drawing::Size(172, 13);
			   this->labelYTask_6_1->TabIndex = 0;
			   this->labelYTask_6_1->Text = L"Значение функции Y";
			   // labelPointXTask_6_2				
			   this->labelPointXTask_6_2->AutoSize = true;
			   this->labelPointXTask_6_2->Location = System::Drawing::Point(8, 15);
			   this->labelPointXTask_6_2->Name = L"labelYTask_6_1";
			   this->labelPointXTask_6_2->Size = System::Drawing::Size(172, 13);
			   this->labelPointXTask_6_2->TabIndex = 0;
			   this->labelPointXTask_6_2->Text = L"Введите координату точки по X";
			   // labelPointYTask_6_2				
			   this->labelPointYTask_6_2->AutoSize = true;
			   this->labelPointYTask_6_2->Location = System::Drawing::Point(180, 15);
			   this->labelPointYTask_6_2->Name = L"labelYTask_6_1";
			   this->labelPointYTask_6_2->Size = System::Drawing::Size(172, 13);
			   this->labelPointYTask_6_2->TabIndex = 0;
			   this->labelPointYTask_6_2->Text = L"Введите координату точки по Y";
			   // labelResultTask_6_2				
			   this->labelResultTask_6_2->AutoSize = true;
			   this->labelResultTask_6_2->Location = System::Drawing::Point(700, 15);
			   this->labelResultTask_6_2->Name = L"labelResultTask_6_2";
			   this->labelResultTask_6_2->Size = System::Drawing::Size(172, 13);
			   this->labelResultTask_6_2->TabIndex = 0;
			   this->labelResultTask_6_2->Text = L"Результат";
			   // btnGetValueFuncTask_6_1			
			   this->btnGetValueFuncTask_6_1->Location = System::Drawing::Point(130, 33);
			   this->btnGetValueFuncTask_6_1->Name = L"btnGetValueFuncTask_6_1";
			   this->btnGetValueFuncTask_6_1->Size = System::Drawing::Size(168, 23);
			   this->btnGetValueFuncTask_6_1->TabIndex = 6;
			   this->btnGetValueFuncTask_6_1->Text = L"Вычислить значение функции";
			   this->btnGetValueFuncTask_6_1->UseVisualStyleBackColor = true;
			   this->btnGetValueFuncTask_6_1->Click += gcnew System::EventHandler(this, &Form1::btnGetValueFuncTask_6_1_Click);
			   // groupBoxDescriptionTask_6_1			
			   this->groupBoxDescriptionTask_6_1->BackColor = System::Drawing::Color::Transparent;
			   this->groupBoxDescriptionTask_6_1->Controls->Add(this->txtBxDescriptionTask_6_1);
			   this->groupBoxDescriptionTask_6_1->Controls->Add(this->pctBoxTask_6_1);
			   this->groupBoxDescriptionTask_6_1->Location = System::Drawing::Point(8, 6);
			   this->groupBoxDescriptionTask_6_1->Name = L"groupBox1";
			   this->groupBoxDescriptionTask_6_1->Size = System::Drawing::Size(960, 300);
			   this->groupBoxDescriptionTask_6_1->TabIndex = 0;
			   this->groupBoxDescriptionTask_6_1->TabStop = false;
			   this->groupBoxDescriptionTask_6_1->Text = L"Описание задачи";
			   //pctBoxTask_6_1
			   this->pctBoxTask_6_1->Image = Image::FromFile(System::IO::Path::Combine(Environment::CurrentDirectory, "Task_6_1.jpg"));
			   this->pctBoxTask_6_1->Location = System::Drawing::Point(220, 50);
			   this->pctBoxTask_6_1->Size = System::Drawing::Size(1000, 300);
			   //pctBoxTask_6_2
			   this->pctBoxTask_6_2->Image = Image::FromFile(System::IO::Path::Combine(Environment::CurrentDirectory, "Task_6_2.jpg"));
			   this->pctBoxTask_6_2->Location = System::Drawing::Point(200, 50);
			   this->pctBoxTask_6_2->Size = System::Drawing::Size(1000, 300);
			   //pctBoxTask_6_3
			   this->pctBoxTask_6_3->Image = Image::FromFile(System::IO::Path::Combine(Environment::CurrentDirectory, "Task_6_3.jpg"));
			   this->pctBoxTask_6_3->Location = System::Drawing::Point(200, 50);
			   this->pctBoxTask_6_3->Size = System::Drawing::Size(1000, 300);
			   // txtBxDescriptionTask_6_1				 
			   this->txtBxDescriptionTask_6_1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			   this->txtBxDescriptionTask_6_1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->txtBxDescriptionTask_6_1->Location = System::Drawing::Point(6, 19);
			   this->txtBxDescriptionTask_6_1->Multiline = true;
			   this->txtBxDescriptionTask_6_1->Name = L"textBoxDescriptionTask6_1";
			   this->txtBxDescriptionTask_6_1->ReadOnly = true;
			   this->txtBxDescriptionTask_6_1->Size = System::Drawing::Size(550, 15);
			   this->txtBxDescriptionTask_6_1->TabIndex = 0;
			   this->txtBxDescriptionTask_6_1->Text = L"Вычислить значение функции, заданной графически";
			   // txtBxResultTask_6_2				 
			   this->txtBxInputXTask_6_1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			   this->txtBxInputXTask_6_1->Location = System::Drawing::Point(8, 35);
			   this->txtBxInputXTask_6_1->Name = L"txtBxInputXTask_6_1";
			   this->txtBxInputXTask_6_1->Size = System::Drawing::Size(105, 15);
			   this->txtBxInputXTask_6_1->TabIndex = 1;
			   // txtBxYTask_6_1				 
			   this->txtBxYTask_6_1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			   this->txtBxYTask_6_1->Location = System::Drawing::Point(322, 35);
			   this->txtBxYTask_6_1->Name = L"txtBxYTask_6_1";
			   this->txtBxYTask_6_1->ReadOnly = true;
			   this->txtBxYTask_6_1->Size = System::Drawing::Size(140, 15);
			   this->txtBxYTask_6_1->TabIndex = 1;
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
			   this->tabPageTask_6_2->Text = L"Задание №2";
			   this->tabPageTask_6_2->UseVisualStyleBackColor = true;
			   //tabPageTask_6_3			
			   this->tabPageTask_6_3->Controls->Add(this->groupBoxDescriptionTask_6_3);	
			   this->tabPageTask_6_3->Controls->Add(this->groupBoxSolutionTask_6_3);
			   this->tabPageTask_6_3->Location = System::Drawing::Point(4, 22);
			   this->tabPageTask_6_3->Name = L"tabPageTask_6_3";
			   this->tabPageTask_6_3->Padding = System::Windows::Forms::Padding(3);
			   this->tabPageTask_6_3->Size = System::Drawing::Size(840, 442);
			   this->tabPageTask_6_3->TabIndex = 1;
			   this->tabPageTask_6_3->Text = L"Задание №3";
			   this->tabPageTask_6_3->UseVisualStyleBackColor = true;
			   // groupBoxSolutionTask_6_2		 
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->btnPointFallsFigureTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->labelPointYTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->labelResultTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->labelPointXTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->txtBxInputPointXTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->txtBxInputPointYTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->txtBxResultTask_6_2);
			   this->groupBoxSolutionTask_6_2->Location = System::Drawing::Point(8, 310);
			   this->groupBoxSolutionTask_6_2->Name = L"groupBox4";
			   this->groupBoxSolutionTask_6_2->Size = System::Drawing::Size(960, 320);
			   this->groupBoxSolutionTask_6_2->TabIndex = 1;
			   this->groupBoxSolutionTask_6_2->TabStop = false;
			   this->groupBoxSolutionTask_6_2->Text = L"Решение";
			   // groupBoxSolutionTask_6_3 
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->labelInputXnTask_6_3);
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->labelInputXkTask_6_3);			
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->labelInputHTask_6_3);			
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->labelInputATask_6_3);			
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->labelInputBTask_6_3);			
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->labelInputCTask_6_3);			
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->txtBxInputXnTask_6_3);			
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->txtBxInputXkTask_6_3);			
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->txtBxInputHTask_6_3);			
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->txtBxInputATask_6_3);			
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->txtBxInputBTask_6_3);			
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->txtBxInputCTask_6_3);			
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->btnGetResultTask_6_3);
			   this->groupBoxSolutionTask_6_3->Controls->Add(this->dtgViewResultTask_6_3);
			   this->groupBoxSolutionTask_6_3->Location = System::Drawing::Point(8, 310);
			   this->groupBoxSolutionTask_6_3->Name = L"groupBoxSolutionTask_6_3";
			   this->groupBoxSolutionTask_6_3->Size = System::Drawing::Size(960, 320);
			   this->groupBoxSolutionTask_6_3->TabIndex = 1;
			   this->groupBoxSolutionTask_6_3->TabStop = false;
			   this->groupBoxSolutionTask_6_3->Text = L"Решение";
			   // btnGetPerimeterTask_6_2				
			   this->btnPointFallsFigureTask_6_2->Location = System::Drawing::Point(360, 28);
			   this->btnPointFallsFigureTask_6_2->Name = L"btnFillArrValueTask_6_2";
			   this->btnPointFallsFigureTask_6_2->Size = System::Drawing::Size(150, 23);
			   this->btnPointFallsFigureTask_6_2->TabIndex = 3;
			   this->btnPointFallsFigureTask_6_2->Text = L"Определить";
			   this->btnPointFallsFigureTask_6_2->UseVisualStyleBackColor = true;
			   this->btnPointFallsFigureTask_6_2->Click += gcnew System::EventHandler(this, &Form1::btnPointFallsFigureTask_6_2_Click);
			   // btnGetResultTask_6_3				
			   this->btnGetResultTask_6_3->Location = System::Drawing::Point(400, 27);
			   this->btnGetResultTask_6_3->Name = L"btnGetResultTask_6_3";
			   this->btnGetResultTask_6_3->Size = System::Drawing::Size(150, 23);
			   this->btnGetResultTask_6_3->TabIndex = 3;
			   this->btnGetResultTask_6_3->Text = L"Вычислить";
			   this->btnGetResultTask_6_3->UseVisualStyleBackColor = true;
			   this->btnGetResultTask_6_3->Click += gcnew System::EventHandler(this, &Form1::btnGetResultTask_6_3_Click);
			   // groupBoxDescriptionTask_6_2				
			   this->groupBoxDescriptionTask_6_2->Controls->Add(this->txtBxDescriptionTask_6_2);
			   this->groupBoxDescriptionTask_6_2->Controls->Add(this->pctBoxTask_6_2);
			   this->groupBoxDescriptionTask_6_2->Location = System::Drawing::Point(8, 6);
			   this->groupBoxDescriptionTask_6_2->Name = L"groupBox3";
			   this->groupBoxDescriptionTask_6_2->Size = System::Drawing::Size(960, 300);
			   this->groupBoxDescriptionTask_6_2->TabIndex = 0;
			   this->groupBoxDescriptionTask_6_2->TabStop = false;
			   this->groupBoxDescriptionTask_6_2->Text = L"Описание задачи";
			   // groupBoxDescriptionTask_6_3			
			   this->groupBoxDescriptionTask_6_3->Controls->Add(this->pctBoxTask_6_3);
			   this->groupBoxDescriptionTask_6_3->Location = System::Drawing::Point(8, 6);
			   this->groupBoxDescriptionTask_6_3->Name = L"groupBoxDescriptionTask_6_3";
			   this->groupBoxDescriptionTask_6_3->Size = System::Drawing::Size(960, 300);
			   this->groupBoxDescriptionTask_6_3->TabIndex = 0;
			   this->groupBoxDescriptionTask_6_3->TabStop = false;
			   this->groupBoxDescriptionTask_6_3->Text = L"Описание задачи";
			   // txtBxDescriptionTask_6_2				
			   this->txtBxDescriptionTask_6_2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			   this->txtBxDescriptionTask_6_2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->txtBxDescriptionTask_6_2->Location = System::Drawing::Point(6, 17);
			   this->txtBxDescriptionTask_6_2->Name = L"textBox1";
			   this->txtBxDescriptionTask_6_2->ReadOnly = true;
			   this->txtBxDescriptionTask_6_2->Size = System::Drawing::Size(811, 20);
			   this->txtBxDescriptionTask_6_2->TabIndex = 0;
			   this->txtBxDescriptionTask_6_2->Text = L"Определить попадает ли точка в фигуру";			
			   // txtBxInputPointXTask_6_2			
			   this->txtBxInputPointXTask_6_2->Location = System::Drawing::Point(8, 30);
			   this->txtBxInputPointXTask_6_2->Name = L"txtBxInputPointXTask_6_2";
			   this->txtBxInputPointXTask_6_2->Size = System::Drawing::Size(165, 20);
			   this->txtBxInputPointXTask_6_2->TabIndex = 0;
			   // txtBxInputXnTask_6_3		
			   this->txtBxInputXnTask_6_3->Location = System::Drawing::Point(8, 30);
			   this->txtBxInputXnTask_6_3->Name = L"txtBxInputXnTask_6_3";
			   this->txtBxInputXnTask_6_3->Size = System::Drawing::Size(60, 20);
			   this->txtBxInputXnTask_6_3->TabIndex = 0;
			   // txtBxInputXkTask_6_3		
			   this->txtBxInputXkTask_6_3->Location = System::Drawing::Point(75, 30);
			   this->txtBxInputXkTask_6_3->Name = L"txtBxInputXkTask_6_3";
			   this->txtBxInputXkTask_6_3->Size = System::Drawing::Size(60, 20);
			   this->txtBxInputXkTask_6_3->TabIndex = 0;
			   // txtBxInputHTask_6_3		
			   this->txtBxInputHTask_6_3->Location = System::Drawing::Point(142, 30);
			   this->txtBxInputHTask_6_3->Name = L"txtBxInputHTask_6_3";
			   this->txtBxInputHTask_6_3->Size = System::Drawing::Size(50, 20);
			   this->txtBxInputHTask_6_3->TabIndex = 0;
			   // txtBxInputATask_6_3		
			   this->txtBxInputATask_6_3->Location = System::Drawing::Point(202, 30);
			   this->txtBxInputATask_6_3->Name = L"txtBxInputATask_6_3";
			   this->txtBxInputATask_6_3->Size = System::Drawing::Size(50, 20);
			   this->txtBxInputATask_6_3->TabIndex = 0;
			   // txtBxInputBTask_6_3		
			   this->txtBxInputBTask_6_3->Location = System::Drawing::Point(262, 30);
			   this->txtBxInputBTask_6_3->Name = L"txtBxInputBTask_6_3";
			   this->txtBxInputBTask_6_3->Size = System::Drawing::Size(50, 20);
			   this->txtBxInputBTask_6_3->TabIndex = 0;
			   // txtBxInputCTask_6_3		
			   this->txtBxInputCTask_6_3->Location = System::Drawing::Point(322, 30);
			   this->txtBxInputCTask_6_3->Name = L"txtBxInputCTask_6_3";
			   this->txtBxInputCTask_6_3->Size = System::Drawing::Size(50, 20);
			   this->txtBxInputCTask_6_3->TabIndex = 0;
			   // txtBxInputPointYTask_6_2			
			   this->txtBxInputPointYTask_6_2->Location = System::Drawing::Point(180, 30);
			   this->txtBxInputPointYTask_6_2->Name = L"txtBxInputPointYTask_6_2";
			   this->txtBxInputPointYTask_6_2->Size = System::Drawing::Size(165, 20);
			   this->txtBxInputPointYTask_6_2->TabIndex = 0;
			   // txtBxResultTask_6_2			
			   this->txtBxResultTask_6_2->Location = System::Drawing::Point(530, 29);
			   this->txtBxResultTask_6_2->Name = L"txtBxResultTask_6_2";
			   this->txtBxResultTask_6_2->Size = System::Drawing::Size(420, 20);
			   this->txtBxResultTask_6_2->TabIndex = 0;
			   // 
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1000, 669);
			   this->Controls->Add(this->tabControl_lab_1);
			   this->Name = L"Form1";
			   this->Text = L"Лабораторная № 2";
			   this->tabControl_lab_1->ResumeLayout(false);
			   this->tabPageTask_6_1->ResumeLayout(false);
			   this->groupBoxSolutionTask_6_1->ResumeLayout(false);
			   this->groupBoxSolutionTask_6_1->PerformLayout();
			   this->groupBoxDescriptionTask_6_1->ResumeLayout(false);
			   this->groupBoxDescriptionTask_6_1->PerformLayout();
			   this->tabPageTask_6_2->ResumeLayout(false);
			   this->tabPageTask_6_3->ResumeLayout(false);
			   this->groupBoxSolutionTask_6_2->ResumeLayout(false);
			   this->groupBoxSolutionTask_6_2->PerformLayout();
			   this->groupBoxDescriptionTask_6_2->ResumeLayout(false);
			   this->groupBoxDescriptionTask_6_2->PerformLayout();
			   this->MinimumSize = System::Drawing::Size(1000, 708);
			   this->MaximumSize = System::Drawing::Size(1000, 708);
			   this->ResumeLayout(false);
		   }		  

			#pragma region Task_6_1
		   System::Void btnGetValueFuncTask_6_1_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   String^ strX = txtBxInputXTask_6_1->Text;

			   if (!IsValidateInputX(strX))
				   return;

			   int x = Convert::ToInt64(strX);

			   if (x < -5)
			   {
				   //y=0
				   txtBxYTask_6_1->Text = Convert::ToString(0);
			   }
			   else if (x >= -5 && x < -4)
			   {
				   //y=2x+8
				   txtBxYTask_6_1->Text = Convert::ToString(2 * x + 8);
			   }
			   else if (x >= -4 && x < -3)
			   {
				   //y=x+4
				   txtBxYTask_6_1->Text = Convert::ToString(x + 4);
			   }
			   else if (x >= -3 && x < -2)
			   {
				   //y=-x-2
				   txtBxYTask_6_1->Text = Convert::ToString(-x - 2);
			   }
			   else if (x >= -2 && x < -1)
			   {
				   //y=0
				   txtBxYTask_6_1->Text = Convert::ToString(0);
			   }
			   else if (x >= -1 && x < 0)
			   {
				   //y=-x-1
				   txtBxYTask_6_1->Text = Convert::ToString(-x - 1);
			   }
			   else if (x >= 0 && x < 2)
			   {
				   //y=x-1
				   txtBxYTask_6_1->Text = Convert::ToString(x - 1);
			   }
			   else if (x >= 2 && x < 3)
			   {
				   //y=-x+3
				   txtBxYTask_6_1->Text = Convert::ToString(-x + 3);
			   }
			   else if (x >= 3 && x < 4)
			   {
				   //y=-2
				   txtBxYTask_6_1->Text = Convert::ToString(-2);
			   }
			   else if (x >= 4)
			   {
				   //y=0
				   txtBxYTask_6_1->Text = Convert::ToString(0);
			   }
		   }

		   System::Boolean IsValidateInputX(String^ x)
		   {
			   int parseResult;

			   if (String::IsNullOrWhiteSpace(x))
			   {
				   MessageBox::Show("Необходимо ввести значение X", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }

			   if (!int::TryParse(x, parseResult))
			   {
				   MessageBox::Show("X должно быть числом", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }

			   return true;
		   }
			#pragma endregion

			#pragma region Task_6_2
		   System::Void btnPointFallsFigureTask_6_2_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   //радиус окружности
			   const double R = 1;
			   //координаты точки
			   String^ strX = txtBxInputPointXTask_6_2->Text;
			   String^ strY = txtBxInputPointYTask_6_2->Text;

			   //валидация
			   if (!IsValidateInputPointX(strX))
				   return;

			   if (!IsValidateInputPointX(strY))
				   return;

			   double x = Convert::ToDouble(strX);
			   double y = Convert::ToDouble(strY);

			   if ((Math::Pow(x, 2) + Math::Pow(y, 2)) <= R || ((y <= x + 2) && (x >= -2) && (x <= 0) && (y > -1)) || ((y <= -x + 2) && (x >= 0) && (x <= 2) && (y >= 0) && (y <= 2)))
			   {
				   txtBxResultTask_6_2->Text = "Точка с координатами (" + x + ";" + y + ") принадлежит фигуре";
			   }
			   else
			   {
				   txtBxResultTask_6_2->Text = "Точка с координатами (" + x + ";" + y + ") не принадлежит фигуре";
			   }
		   }

		   System::Boolean IsValidateInputPointX(String^ x)
		   {
			   double parseResult;

			   if (String::IsNullOrWhiteSpace(x))
			   {
				   MessageBox::Show("Необходимо ввести координату точки по X", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }

			   if (!double::TryParse(x, parseResult))
			   {
				   MessageBox::Show("Координата точки по X должна быть числом", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }

			   return true;
		   }

		   System::Boolean IsValidateInputPointY(String^ y)
		   {
			   double parseResult;

			   if (String::IsNullOrWhiteSpace(y))
			   {
				   MessageBox::Show("Необходимо ввести координату точки по Y", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }

			   if (!double::TryParse(y, parseResult))
			   {
				   MessageBox::Show("Координата точки по Y должна быть числом", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }

			   return true;
		   }
			#pragma endregion

			#pragma region Task_6_3
		   System::Void btnGetResultTask_6_3_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   //Xn - x начальное
			   String^ strXn = txtBxInputXnTask_6_3->Text;
			   //Xk - x конечное
			   String^ strXk = txtBxInputXkTask_6_3->Text;
			   //h - шаг 
			   String^ strH = txtBxInputHTask_6_3->Text;
			   //параметры
			   String^ strA = txtBxInputATask_6_3->Text;
			   String^ strB = txtBxInputBTask_6_3->Text;
			   String^ strC = txtBxInputCTask_6_3->Text;

			   //валидация
			   if (!IsValidateInput(strXn, "Xn"))
				   return;

			   if (!IsValidateInput(strXk, "Xk"))
				   return;

			   if (!IsValidateInput(strH, "h"))
				   return;

			   if (!IsValidateInput(strA, "a"))
				   return;

			   if (!IsValidateInput(strB, "b"))
				   return;

			   if (!IsValidateInput(strC, "c"))
				   return;

			   double xn = Convert::ToDouble(strXn);
			   double xk = Convert::ToDouble(strXk);
			   double h = Convert::ToDouble(strH);
			   double a = Convert::ToDouble(strA);
			   double b = Convert::ToDouble(strB);
			   double c = Convert::ToDouble(strC);

			   //очищаем датагрид
			   dtgViewResultTask_6_3->Rows->Clear();

			   if (c < 0 && b != 0) 
			   {
				   //если конечное значение x больше или равно начальному
				   if (xk >= xn) 
				   {
					   for (double i = xn, row = 0; i <= xk; i++, row++)
					   {
						   dtgViewResultTask_6_3->Rows->Add();
						   //значение функции y
						   dtgViewResultTask_6_3[0, row]->Value = Math::Round(a * Math::Pow(i, 2) + Math::Pow(b, 2) * i, 2);
						   //значение x
						   dtgViewResultTask_6_3[1, row]->Value = i;
					   }
				   }
				   //если конечное меньше или равно начальному 
				   else if(xk <= xn)
				   {
					   for (double i = xn, row = 0; i >= xk; i--, row++)
					   {
						   dtgViewResultTask_6_3->Rows->Add();
						   //значение функции y
						   dtgViewResultTask_6_3[0, row]->Value = Math::Round(a * Math::Pow(i, 2) + Math::Pow(b, 2) * i, 2);
						   //значение x
						   dtgViewResultTask_6_3[1, row]->Value = i;
					   }
				   }				  
			   }
			   else if(c > 0 && b == 0)
			   {
				   //если конечное значение x больше или равно начальному
				   if (xk >= xn)
				   {
					   for (double i = xn, row = 0; i <= xk; i++, row++)
					   {
						   dtgViewResultTask_6_3->Rows->Add();

						   if ((i + c) == 0)
						   {   //значение функции y
							   dtgViewResultTask_6_3[0, row]->Value = "Деление на 0";
							   dtgViewResultTask_6_3[1, row]->Value = i;
						   }
						   else
						   {
							   //значение функции y
							   dtgViewResultTask_6_3[0, row]->Value = Math::Round((i + a) / (i + c), 2);
							   //значение x
							   dtgViewResultTask_6_3[1, row]->Value = i;
						   }						   
					   }
				   }
				   //если конечное меньше или равно начальному 
				   else if (xk <= xn)
				   {
					   for (double i = xn, row = 0; i >= xk; i--, row++)
					   {
						   dtgViewResultTask_6_3->Rows->Add();

						   if ((i + c) == 0)
						   {   //значение функции y
							   dtgViewResultTask_6_3[0, row]->Value = "Деление на 0";
							   dtgViewResultTask_6_3[1, row]->Value = i;
						   }
						   else
						   {
							   //значение функции y
							   dtgViewResultTask_6_3[0, row]->Value = Math::Round((i + a) / (i + c), 2);
							   //значение x
							   dtgViewResultTask_6_3[1, row]->Value = i;
						   }
					   }
				   }
			   }
			   else
			   {
				   //если конечное значение x больше или равно начальному
				   if (xk >= xn)
				   {
					   for (double i = xn, row = 0; i <= xk; i++, row++)
					   {
						   dtgViewResultTask_6_3->Rows->Add();

						   if (c == 0) 
						   {
							   //значение функции y
							   dtgViewResultTask_6_3[0, row]->Value = "Деление на 0";
							   //значение x
							   dtgViewResultTask_6_3[1, row]->Value = i;
						   }
						   else
						   {
							   //значение функции y
							   dtgViewResultTask_6_3[0, row]->Value = Math::Round(i / c, 2);
							   //значение x
							   dtgViewResultTask_6_3[1, row]->Value = i;
						   }						   
					   }
				   }
				   //если конечное меньше или равно начальному 
				   else if (xk <= xn)
				   {
					   for (double i = xn, row = 0; i >= xk; i--, row++)
					   {
						   dtgViewResultTask_6_3->Rows->Add();

						   if (c == 0)
						   {
							   //значение функции y
							   dtgViewResultTask_6_3[0, row]->Value = "Деление на 0";
							   //значение x
							   dtgViewResultTask_6_3[1, row]->Value = i;
						   }
						   else
						   {
							   //значение функции y
							   dtgViewResultTask_6_3[0, row]->Value = Math::Round(i / c, 2);
							   //значение x
							   dtgViewResultTask_6_3[1, row]->Value = i;
						   }
					   }
				   }
			   }
		   }

		   System::Boolean IsValidateInput(String^ value, String^ nameValue)
		   {
			   double parseResult;

			   if (String::IsNullOrWhiteSpace(value))
			   {
				   MessageBox::Show("Необходимо ввести значение "  + nameValue, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }

			   if (!double::TryParse(value, parseResult))
			   {
				   MessageBox::Show(nameValue + " должно быть числом", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }

			   return true;
		   }
			#pragma endregion
	};
}

