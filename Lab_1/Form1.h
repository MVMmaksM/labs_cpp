#pragma once
#include "math.h";

namespace CppCLRWinFormsProject 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
		private: System::Windows::Forms::Label^ labelVTask_6_1;
		private: System::Windows::Forms::Label^ labelSTask_6_1;
		private: System::Windows::Forms::Label^ labelUTask_6_1;
		private: System::Windows::Forms::Label^ labelDiagonalTask_6_2;
		private: System::Windows::Forms::Label^ labelMTask_6_3;		
		private: System::Windows::Forms::Label^ labelRoundTask_6_3;
		//text_boxes
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxInputVTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxInputUTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxInputSTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxResultTask_6_1;		
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_2;
		private: System::Windows::Forms::TextBox^ txtBxResultTask_6_2;
		private: System::Windows::Forms::TextBox^ txtBxDiagonalTask_6_2;
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_3;
		private: System::Windows::Forms::TextBox^ txtBxInputMTask_6_3;
		private: System::Windows::Forms::TextBox^ txtBxResultTask_6_3;
		//buttons
		private: System::Windows::Forms::Button^ btnGetResultTask_6_1;
		private: System::Windows::Forms::Button^ btnGetAreaTask_6_2;
		private: System::Windows::Forms::Button^ btnGetPerimeterTask_6_2;
		private: System::Windows::Forms::Button^ btnGetResultY1Task_6_3;
		private: System::Windows::Forms::Button^ btnGetResultY2Task_6_3;
		//NumericUpDown
		private: System::Windows::Forms::NumericUpDown^ numericUpDownRoundTask_6_3;


		protected:

		protected:

		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
			System::ComponentModel::Container^ components;

	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
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
				this->labelUTask_6_1 = (gcnew System::Windows::Forms::Label());
				this->labelSTask_6_1 = (gcnew System::Windows::Forms::Label());
				this->labelVTask_6_1 = (gcnew System::Windows::Forms::Label());
				this->labelDiagonalTask_6_2 = (gcnew System::Windows::Forms::Label());
				this->labelMTask_6_3 = (gcnew System::Windows::Forms::Label());
				this->labelRoundTask_6_3 = (gcnew System::Windows::Forms::Label());
				//text_boxes
				this->txtBxDescriptionTask_6_1 = (gcnew System::Windows::Forms::TextBox());
				this->txtBxInputUTask_6_1 = (gcnew System::Windows::Forms::TextBox());
				this->txtBxInputSTask_6_1 = (gcnew System::Windows::Forms::TextBox());
				this->txtBxInputVTask_6_1 = (gcnew System::Windows::Forms::TextBox());
				this->txtBxResultTask_6_1 = (gcnew System::Windows::Forms::TextBox());
				this->txtBxDescriptionTask_6_2 = (gcnew System::Windows::Forms::TextBox());
				this->txtBxDiagonalTask_6_2 = (gcnew System::Windows::Forms::TextBox());
				this->txtBxResultTask_6_2 = (gcnew System::Windows::Forms::TextBox());
				this->txtBxDescriptionTask_6_3 = (gcnew System::Windows::Forms::TextBox());
				this->txtBxInputMTask_6_3 = (gcnew System::Windows::Forms::TextBox());
				this->txtBxResultTask_6_3 = (gcnew System::Windows::Forms::TextBox());
				this->numericUpDownRoundTask_6_3 = (gcnew System::Windows::Forms::NumericUpDown());
				//buttons
				this->btnGetResultTask_6_1 = (gcnew System::Windows::Forms::Button());
				this->btnGetAreaTask_6_2 = (gcnew System::Windows::Forms::Button());
				this->btnGetPerimeterTask_6_2 = (gcnew System::Windows::Forms::Button());
				this->btnGetResultY1Task_6_3 = (gcnew System::Windows::Forms::Button());
				this->btnGetResultY2Task_6_3 = (gcnew System::Windows::Forms::Button());

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
				this->groupBoxSolutionTask_6_1->Controls->Add(this->btnGetResultTask_6_1);
				this->groupBoxSolutionTask_6_1->Controls->Add(this->txtBxInputUTask_6_1);
				this->groupBoxSolutionTask_6_1->Controls->Add(this->txtBxInputSTask_6_1);
				this->groupBoxSolutionTask_6_1->Controls->Add(this->txtBxInputVTask_6_1);
				this->groupBoxSolutionTask_6_1->Controls->Add(this->labelUTask_6_1);
				this->groupBoxSolutionTask_6_1->Controls->Add(this->labelSTask_6_1);
				this->groupBoxSolutionTask_6_1->Controls->Add(this->labelVTask_6_1);
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
				// btnGetResultTask_6_1			
				this->btnGetResultTask_6_1->Location = System::Drawing::Point(659, 63);
				this->btnGetResultTask_6_1->Name = L"btnGetResultTask_6_1";
				this->btnGetResultTask_6_1->Size = System::Drawing::Size(148, 23);
				this->btnGetResultTask_6_1->TabIndex = 6;
				this->btnGetResultTask_6_1->Text = L"Получить результат T, ч";
				this->btnGetResultTask_6_1->UseVisualStyleBackColor = true;
				this->btnGetResultTask_6_1->Click += gcnew System::EventHandler(this, &Form1::btnGetResultTask_6_1_Click);				
				// txtBxInputUTask_6_1			
				this->txtBxInputUTask_6_1->Location = System::Drawing::Point(433, 66);
				this->txtBxInputUTask_6_1->Name = L"textBoxInputU";
				this->txtBxInputUTask_6_1->Size = System::Drawing::Size(207, 20);
				this->txtBxInputUTask_6_1->TabIndex = 5;			
				// txtBxInputSTask_6_1			
				this->txtBxInputSTask_6_1->Location = System::Drawing::Point(191, 67);
				this->txtBxInputSTask_6_1->Name = L"textBoxInputS";
				this->txtBxInputSTask_6_1->Size = System::Drawing::Size(225, 20);
				this->txtBxInputSTask_6_1->TabIndex = 4;				
				// txtBxInputVTask_6_1				
				this->txtBxInputVTask_6_1->Location = System::Drawing::Point(7, 67);
				this->txtBxInputVTask_6_1->Name = L"textBoxInputV";
				this->txtBxInputVTask_6_1->Size = System::Drawing::Size(171, 20);
				this->txtBxInputVTask_6_1->TabIndex = 3;				
				// labelUTask_6_1				
				this->labelUTask_6_1->AutoSize = true;
				this->labelUTask_6_1->Location = System::Drawing::Point(430, 38);
				this->labelUTask_6_1->Name = L"label3";
				this->labelUTask_6_1->Size = System::Drawing::Size(210, 13);
				this->labelUTask_6_1->TabIndex = 2;
				this->labelUTask_6_1->Text = L"Введите скорость течения реки U, км/ч";				
				// labelSTask_6_1				
				this->labelSTask_6_1->AutoSize = true;
				this->labelSTask_6_1->Location = System::Drawing::Point(188, 38);
				this->labelSTask_6_1->Name = L"label2";
				this->labelSTask_6_1->Size = System::Drawing::Size(228, 13);
				this->labelSTask_6_1->TabIndex = 1;
				this->labelSTask_6_1->Text = L"Введите расстояние между пунктами S, км";			
				// labelVTask_6_1				
				this->labelVTask_6_1->AutoSize = true;
				this->labelVTask_6_1->Location = System::Drawing::Point(6, 38);
				this->labelVTask_6_1->Name = L"label1";
				this->labelVTask_6_1->Size = System::Drawing::Size(172, 13);
				this->labelVTask_6_1->TabIndex = 0;
				this->labelVTask_6_1->Text = L"Введите скорость лодки V, км/ч";				
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
				this->txtBxDescriptionTask_6_1-> Text = L"Лодка плывет из пункта А в пункт Б, и обратно. Скорость лодки V, " +
															"расстояние между пунктами S и скорость течения реки U задаются " +
															"пользователем. Написать программу, в которой вычисляется общее время " +
															"движения лодки T. Учесть, что при движении по течению лодка плывет время " +
															"t1 = S/(V+U), а при движении против течения на путь между пунктами уходит " +
															"время t2 = S/(V-U). Общее время T = t1 + t2.";	
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
				this->groupBoxSolutionTask_6_2->Controls->Add(this->btnGetPerimeterTask_6_2);
				this->groupBoxSolutionTask_6_2->Controls->Add(this->btnGetAreaTask_6_2);
				this->groupBoxSolutionTask_6_2->Controls->Add(this->txtBxDiagonalTask_6_2);
				this->groupBoxSolutionTask_6_2->Controls->Add(this->labelDiagonalTask_6_2);
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
				this->btnGetPerimeterTask_6_2->Location = System::Drawing::Point(543, 45);
				this->btnGetPerimeterTask_6_2->Name = L"buttonGetPerimeter";
				this->btnGetPerimeterTask_6_2->Size = System::Drawing::Size(229, 23);
				this->btnGetPerimeterTask_6_2->TabIndex = 3;
				this->btnGetPerimeterTask_6_2->Text = L"Рассчитать периметр квадрата";
				this->btnGetPerimeterTask_6_2->UseVisualStyleBackColor = true;
				this->btnGetPerimeterTask_6_2->Click += gcnew System::EventHandler(this, &Form1::btnGetPerimeterSquare_Click);				
				// btnGetAreaTask_6_2				
				this->btnGetAreaTask_6_2->Location = System::Drawing::Point(285, 45);
				this->btnGetAreaTask_6_2->Name = L"buttonGetArea";
				this->btnGetAreaTask_6_2->Size = System::Drawing::Size(190, 23);
				this->btnGetAreaTask_6_2->TabIndex = 2;
				this->btnGetAreaTask_6_2->Text = L"Рассчитать пощадь квадрата";
				this->btnGetAreaTask_6_2->UseVisualStyleBackColor = true;
				this->btnGetAreaTask_6_2->Click += gcnew System::EventHandler(this, &Form1::bntGetAreaSquare_Click);				
				// txtBxDiagonalTask_6_2				
				this->txtBxDiagonalTask_6_2->Location = System::Drawing::Point(31, 48);
				this->txtBxDiagonalTask_6_2->Name = L"textBoxInputDiagonal";
				this->txtBxDiagonalTask_6_2->Size = System::Drawing::Size(204, 20);
				this->txtBxDiagonalTask_6_2->TabIndex = 1;				 
				// labelDiagonalTask_6_2				 
				this->labelDiagonalTask_6_2->AutoSize = true;
				this->labelDiagonalTask_6_2->Location = System::Drawing::Point(28, 32);
				this->labelDiagonalTask_6_2->Name = L"label4";
				this->labelDiagonalTask_6_2->Size = System::Drawing::Size(207, 13);
				this->labelDiagonalTask_6_2->TabIndex = 0;
				this->labelDiagonalTask_6_2->Text = L"Введите длину диагонали квадрата d, см";				
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
				this->txtBxDescriptionTask_6_2->Text = L" Разработать программу, которая вычисляет площадь S и периметр P " + 
														"квадрата. Задана диагональ квадрата d";
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
				this->txtBxDescriptionTask_6_3->Name = L"textBoxDescriptionTask6_1";
				this->txtBxDescriptionTask_6_3->ReadOnly = true;
				this->txtBxDescriptionTask_6_3->Size = System::Drawing::Size(811, 30);
				this->txtBxDescriptionTask_6_3->TabIndex = 0;
				this->txtBxDescriptionTask_6_3->Text = L"Разработать программу, рассчитывающую выходные переменных двух "  
														+ "функций. Использовать математические функции, определенные в "
														+ "заголовочном файле math.h(cmath). Для расчета выходных переменных 1 y и 2 y "
														+ "создать функции.";
				//groupBoxSolutionTask_6_3
				this->groupBoxSolutionTask_6_3->Controls->Add(this->labelMTask_6_3);
				this->groupBoxSolutionTask_6_3->Controls->Add(this->labelRoundTask_6_3);
				this->groupBoxSolutionTask_6_3->Controls->Add(this->txtBxInputMTask_6_3);
				this->groupBoxSolutionTask_6_3->Controls->Add(this->btnGetResultY1Task_6_3);	
				this->groupBoxSolutionTask_6_3->Controls->Add(this->btnGetResultY2Task_6_3);
				this->groupBoxSolutionTask_6_3->Controls->Add(this->txtBxResultTask_6_3);
				this->groupBoxSolutionTask_6_3->Controls->Add(this->numericUpDownRoundTask_6_3);
				this->groupBoxSolutionTask_6_3->Location = System::Drawing::Point(3, 58);
				this->groupBoxSolutionTask_6_3->Name = L"groupBox4";
				this->groupBoxSolutionTask_6_3->Size = System::Drawing::Size(834, 380);
				this->groupBoxSolutionTask_6_3->TabIndex = 1;
				this->groupBoxSolutionTask_6_3->TabStop = false;
				this->groupBoxSolutionTask_6_3->Text = L"Решение";
				//labelMTask_6_3
				this->labelMTask_6_3->AutoSize = true;
				this->labelMTask_6_3->Location = System::Drawing::Point(28, 32);
				this->labelMTask_6_3->Name = L"label4";
				this->labelMTask_6_3->Size = System::Drawing::Size(207, 13);
				this->labelMTask_6_3->TabIndex = 0;
				this->labelMTask_6_3->Text = L"Введите значение m";
				//labelRoundTask_6_3
				this->labelRoundTask_6_3->AutoSize = true;
				this->labelRoundTask_6_3->Location = System::Drawing::Point(1, 80);
				this->labelRoundTask_6_3->Name = L"labelRoundTask_6_3";
				this->labelRoundTask_6_3->Size = System::Drawing::Size(207, 13);
				this->labelRoundTask_6_3->TabIndex = 0;
				this->labelRoundTask_6_3->Text = L"Округлить результат до (по умолчанию 2 символа)";
				//numericUpDownRoundTask_6_3
				this->numericUpDownRoundTask_6_3->Minimum = 0;
				this->numericUpDownRoundTask_6_3->Maximum = 15;
				this->numericUpDownRoundTask_6_3->Name = L"numericUpDownRoundTask_6_3";
				this->numericUpDownRoundTask_6_3->Location = System::Drawing::Point(50, 100);;
				//txtBxInputMTask_6_3				
				this->txtBxInputMTask_6_3->Location = System::Drawing::Point(7, 48);
				this->txtBxInputMTask_6_3->Name = L"txtBxInputMTask_6_3";
				this->txtBxInputMTask_6_3->Size = System::Drawing::Size(171, 20);
				this->txtBxInputMTask_6_3->TabIndex = 3;
				//txtBxResultTask_6_3				
				this->txtBxResultTask_6_3->Location = System::Drawing::Point(6, 138);
				this->txtBxResultTask_6_3->Multiline = true;
				this->txtBxResultTask_6_3->Name = L"txtBxResultTask_6_3";
				this->txtBxResultTask_6_3->Size = System::Drawing::Size(822, 237);
				this->txtBxResultTask_6_3->TabIndex = 4;
				//btnGetResultY1Task_6_3
				this->btnGetResultY1Task_6_3->Location = System::Drawing::Point(250, 46);
				this->btnGetResultY1Task_6_3->Name = L"btnGetResultY1Task_6_3";
				this->btnGetResultY1Task_6_3->Size = System::Drawing::Size(229, 23);
				this->btnGetResultY1Task_6_3->TabIndex = 3;
				this->btnGetResultY1Task_6_3->Text = L"Рассчитать выходную переменную y1";
				this->btnGetResultY1Task_6_3->UseVisualStyleBackColor = true;
				this->btnGetResultY1Task_6_3->Click += gcnew System::EventHandler(this, &Form1::btnGetResultY1Task_6_3_Click);
				//btnGetResultY2Task_6_3
				this->btnGetResultY2Task_6_3->Location = System::Drawing::Point(550, 46);
				this->btnGetResultY2Task_6_3->Name = L"btnGetResultY2Task_6_3";
				this->btnGetResultY2Task_6_3->Size = System::Drawing::Size(229, 23);
				this->btnGetResultY2Task_6_3->TabIndex = 3;
				this->btnGetResultY2Task_6_3->Text = L"Рассчитать выходную переменную y2";
				this->btnGetResultY2Task_6_3->UseVisualStyleBackColor = true;
				this->btnGetResultY2Task_6_3->Click += gcnew System::EventHandler(this, &Form1::btnGetResultY2Task_6_3_Click);
				// 
				// Form1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(847, 469);
				this->Controls->Add(this->tabControl_lab_1);
				this->Name = L"Form1";
				this->Text = L"Лабораторная №1";
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
		#pragma endregion

			#pragma region Task_6_1	
			private: System::Void btnGetResultTask_6_1_Click(System::Object^ sender, System::EventArgs^ e)
			{
				//очищаем текстовое поле
				txtBxResultTask_6_1->Clear();
				String^ resultValidate = isValidateInput(txtBxInputVTask_6_1-> Text, txtBxInputSTask_6_1->Text, txtBxInputUTask_6_1->Text);

				//если валидация не пройдена, то выкидываем сообщение и выходим из метода
				if (!String::IsNullOrWhiteSpace(resultValidate)) 
				{
					MessageBox::Show(resultValidate, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}					

				Double t1 = Convert::ToDouble(txtBxInputSTask_6_1->Text) / (Convert::ToDouble(txtBxInputVTask_6_1->Text) + (Convert::ToDouble(txtBxInputUTask_6_1->Text)));
				Double t2 = Convert::ToDouble(txtBxInputSTask_6_1->Text) / (Convert::ToDouble(txtBxInputVTask_6_1->Text) - (Convert::ToDouble(txtBxInputUTask_6_1->Text)));

				Double  T = Math::Round(t1 + t2, 2);

				txtBxResultTask_6_1->Text = "Общее время движения лодки Т = " + T.ToString() + " ч";
			}

			//валидация введенных значений
			private: String^ isValidateInput(String^ inputV, String^ inputS, String^ inputU) 
			{
				String^ result = String::Empty;
				double resultParseV;
				double resultParseS;
				double resultParseU;

				if (String::IsNullOrWhiteSpace(inputV)) 
				{
					result += "Не заполнена скорость лодки V\r\n";
					return result;
				}

				if (inputV->Contains(".")) 
				{
					result = "Для ввода десятичного значения скорости лодки V нужно использовать запятую";
					return result;
				}

				if (!Double::TryParse(inputV, resultParseV))
				{
					result += "Скорость лодки должна быть числом\r\n";
					return result;
				}

				if (resultParseV < 0)
				{
					result += "Скорость лодки не может быть отрицательной\r\n";
					return result;
				}

				if (String::IsNullOrWhiteSpace(inputS))
				{
					result += "Не заполнено расстояние между объектами S\r\n";
					return result;
				}

				if (inputS->Contains("."))
				{
					result = "Для ввода десятичного значения расстояние между объектами S нужно использовать запятую";
					return result;
				}

				if (!Double::TryParse(inputS, resultParseS))
				{
					result += "Расстояние между объектами должно быть числом\r\n";
					return result;
				}

				if(resultParseS < 0)
				{
					result += "Расстояние между объектами не может быть отрицательным\r\n";
					return result;
				}

				if (String::IsNullOrWhiteSpace(inputU))
				{
					result += "Не заполнена скорость течения реки U\r\n";
					return result;
				}

				if (inputU->Contains("."))
				{
					result = "Для ввода десятичного значения скорости течения реки U нужно использовать запятую";
					return result;
				}

				if (!Double::TryParse(inputU, resultParseU))
				{
					result += "Скорость течения реки должна быть числом\r\n";
					return result;
				}

				if (resultParseU < 0)
				{
					result += "Скорость течения реки не может быть отрицательной\r\n";
					return result;
				}

				if (resultParseU>= resultParseV)
				{
					result += "Скорость течения реки не может быть >= скорости движения лодки, " + 
						"т.к.в таком случае лодка либо будет стоять на месте либо ее будет уносить течением\r\n";
				}

				return result;
			}			
			#pragma endregion

			#pragma region Task_6_2		
			private: System::Void bntGetAreaSquare_Click(System::Object^ sender, System::EventArgs^ e)
			{
				String^ resultValidate = isValidateInputDiagonal(txtBxDiagonalTask_6_2-> Text);
				if (!String::IsNullOrWhiteSpace(resultValidate)) 
				{
					MessageBox::Show(resultValidate, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				double areaSquare = Math::Round(((Convert::ToDouble(txtBxDiagonalTask_6_2->Text) * Convert::ToDouble(txtBxDiagonalTask_6_2->Text)) / 2), 2);

				txtBxResultTask_6_2->Text = "Площадь квадрата S с диагональю d равной " + txtBxDiagonalTask_6_2->Text + " см равна " + areaSquare.ToString() + " см кв.";
			}		

			private: String^ isValidateInputDiagonal(String^ inputDiagonal) 
			{
				String^ resultValidate = String::Empty;
				double resultParseDiagonal;

				if (String::IsNullOrWhiteSpace(inputDiagonal)) 
				{
					resultValidate += "Не заполнена длина диагонали\r\n";
					return resultValidate;
				}

				if (inputDiagonal->Contains(".")) 
				{
					resultValidate += "Для ввода десятичного знаяения испльзуется запятая\r\n";
					return resultValidate;
				}

				if (!Double::TryParse(inputDiagonal, resultParseDiagonal)) 
				{
					resultValidate += "Длина диагонали должна быть числом\r\n";
					return resultValidate;
				}

				if (resultParseDiagonal < 0) 
				{
					resultValidate += "Длина диагонали не может быть отрицательной\r\n";
					return resultValidate;
				}

				return resultValidate;
			}

			private: System::Void btnGetPerimeterSquare_Click(System::Object^ sender, System::EventArgs^ e) 
			{
				String^ resultValidate = isValidateInputDiagonal(txtBxDiagonalTask_6_2->Text);
				if (!String::IsNullOrWhiteSpace(resultValidate))
				{
					MessageBox::Show(resultValidate, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				double perimeterSquare = Math::Round((2 * System::Math::Sqrt(2)) * Convert::ToDouble(txtBxDiagonalTask_6_2->Text), 2);

				txtBxResultTask_6_2->Text = "Периметр P квадрата с диагональю d равной " + txtBxDiagonalTask_6_2->Text + " см равен " + perimeterSquare + " см";
			}				  
			#pragma endregion

			#pragma region Task_6_3
			private: System::Void btnGetResultY1Task_6_3_Click(System::Object^ sender, System::EventArgs^ e)
			{
				//если не прошли валидацию, то выходим
				if (!ValidateInputM(txtBxInputMTask_6_3->Text))
					return;

				double resultY1 = GetResultY1(Convert::ToDouble(txtBxInputMTask_6_3->Text), Convert::ToInt16(numericUpDownRoundTask_6_3->Value));
				txtBxResultTask_6_3->Text = "Выходная переменная y1 равна " + resultY1.ToString();
			}

			private: System::Void btnGetResultY2Task_6_3_Click(System::Object^ sender, System::EventArgs^ e)
			{
				if (!ValidateInputM(txtBxInputMTask_6_3->Text))
					return;

				double resultY2 = GetResultY2(Convert::ToDouble(txtBxInputMTask_6_3->Text), Convert::ToInt16(numericUpDownRoundTask_6_3->Value));
				txtBxResultTask_6_3->Text = "Выходная переменная y2 равна " + resultY2.ToString();
			}

			private: System::Boolean ValidateInputM(System::String^ m)
			{
				double parseResult;

				if (String::IsNullOrWhiteSpace(m)) 
				{
					MessageBox::Show("Нужно ввести значение m", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return false;
				}

				if (m->Contains("."))
				{
					MessageBox::Show("Для ввода десятичного значения m необходимо использовать запятую", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return false;
				}

				if (!Double::TryParse(m, parseResult)) 
				{
					MessageBox::Show("m принимает только числа", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return false;
				}

				if (parseResult < 0)
				{
					MessageBox::Show("m принимает только положительные числа", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return false;
				}

				return true;
			}

			private: System::Double GetResultY1(System::Double m, System::Int16 roundValue) 
			{
				double y1 = (sqrt(pow((3*m+2), 2) - 24*m))/(3*sqrt(m))/(2/sqrt(m));				
				return Math::Round(y1, roundValue);
			}

			private: System::Double GetResultY2(System::Double m, System::Int16 roundValue)
			{
				double y2 = -(sqrt(m));
				return Math::Round(y2, roundValue);
			}
			#pragma endregion
	};
};
	
