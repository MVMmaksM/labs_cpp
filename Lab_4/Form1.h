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
		private: System::Windows::Forms::TabPage^ tabPageTask_6_4;
			   //group_boxes
		private: System::Windows::Forms::GroupBox^ groupBoxDescriptionTask_6_1;
		private: System::Windows::Forms::GroupBox^ groupBoxSolutionTask_6_1;
		private: System::Windows::Forms::GroupBox^ groupBoxDescriptionTask_6_2;
		private: System::Windows::Forms::GroupBox^ groupBoxSolutionTask_6_2;
		private: System::Windows::Forms::GroupBox^ groupBoxDescriptionTask_6_3;
		private: System::Windows::Forms::GroupBox^ groupBoxSolutionTask_6_3;
		private: System::Windows::Forms::GroupBox^ groupBoxDescriptionTask_6_4;
		private: System::Windows::Forms::GroupBox^ groupBoxSolutionTask_6_4;
			   //labels	
		private: System::Windows::Forms::Label^ labelN1Task_6_2;
		private: System::Windows::Forms::Label^ labelN2Task_6_2;
		private: System::Windows::Forms::Label^ labelS1Task_6_2;
		private: System::Windows::Forms::Label^ labelS2Task_6_2;
		private: System::Windows::Forms::Label^ labelStringWithSpacesTask_6_3;
		private: System::Windows::Forms::Label^ labelStrTask_6_4;
		private: System::Windows::Forms::Label^ labelKTask_6_4;
			   //text_boxes
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_1;
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
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_4;
		private: System::Windows::Forms::TextBox^ txtBxResultTask_6_4;
		private: System::Windows::Forms::TextBox^ txtBxInputStrTask_6_4;
		private: System::Windows::Forms::TextBox^ txtBxInputKTask_6_4;
			   //buttons
		private: System::Windows::Forms::Button^ btnFillArrValueTask_6_1;
		private: System::Windows::Forms::Button^ btnGetSumValueRowWithNegativeTask_6_1;
		private: System::Windows::Forms::Button^ btnGetMinValueInMatrixTask_6_1;
		private: System::Windows::Forms::Button^ btnGetAverageEvenValueTask_6_1;
		private: System::Windows::Forms::Button^ btnGetNewStringTask_6_2;
		private: System::Windows::Forms::Button^ btnDeleteSpacesTask_6_3;
		private: System::Windows::Forms::Button^ btnEncryptStrTask_6_4;
		private: System::Windows::Forms::DataGridView^ dtgViewMatrix;
			   //матрица
		private: cli::array<int, 2>^ matrixRundomValue;
		private: int countRowMatrix = 9;
		private: int countColMatrix = 16;

		protected:

		protected:

		private: System::ComponentModel::Container^ components;

	#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {
			   matrixRundomValue = gcnew cli::array<int, 2>(countRowMatrix, countColMatrix);
			   this->dtgViewMatrix = (gcnew System::Windows::Forms::DataGridView());
			   this->dtgViewMatrix->SuspendLayout();
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
			   this->tabPageTask_6_4 = (gcnew System::Windows::Forms::TabPage());
			   this->tabPageTask_6_4->SuspendLayout();
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
			   this->groupBoxDescriptionTask_6_4 = (gcnew System::Windows::Forms::GroupBox());
			   this->groupBoxDescriptionTask_6_4->SuspendLayout();
			   this->groupBoxSolutionTask_6_4 = (gcnew System::Windows::Forms::GroupBox());
			   this->groupBoxSolutionTask_6_4->SuspendLayout();
			   //labels	
			   this->labelN1Task_6_2 = (gcnew System::Windows::Forms::Label());
			   this->labelN2Task_6_2 = (gcnew System::Windows::Forms::Label());
			   this->labelS1Task_6_2 = (gcnew System::Windows::Forms::Label());
			   this->labelS2Task_6_2 = (gcnew System::Windows::Forms::Label());
			   this->labelStringWithSpacesTask_6_3 = (gcnew System::Windows::Forms::Label());
			   this->labelStrTask_6_4 = (gcnew System::Windows::Forms::Label());
			   this->labelKTask_6_4 = (gcnew System::Windows::Forms::Label());
			   //text_boxes
			   this->txtBxDescriptionTask_6_1 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxResultTask_6_1 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxDescriptionTask_6_2 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputN1Task_6_2 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputN2Task_6_2 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputS1Task_6_2 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputS2Task_6_2 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxResultTask_6_2 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxDescriptionTask_6_3 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxDescriptionTask_6_4 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputStringWithSpacesTask_6_3 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxResultTask_6_3 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxResultTask_6_4 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputStrTask_6_4 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxInputKTask_6_4 = (gcnew System::Windows::Forms::TextBox());
			   //buttons
			   this->btnFillArrValueTask_6_1 = (gcnew System::Windows::Forms::Button());
			   this->btnGetSumValueRowWithNegativeTask_6_1 = (gcnew System::Windows::Forms::Button());
			   this->btnGetMinValueInMatrixTask_6_1 = (gcnew System::Windows::Forms::Button());
			   this->btnGetAverageEvenValueTask_6_1 = (gcnew System::Windows::Forms::Button());
			   this->btnGetNewStringTask_6_2 = (gcnew System::Windows::Forms::Button());
			   this->btnDeleteSpacesTask_6_3 = (gcnew System::Windows::Forms::Button());
			   this->btnEncryptStrTask_6_4 = (gcnew System::Windows::Forms::Button());

			   this->SuspendLayout();

			   //tabControls			
			   this->tabControl_lab_1->Controls->Add(this->tabPageTask_6_1);
			   this->tabControl_lab_1->Controls->Add(this->tabPageTask_6_2);
			   this->tabControl_lab_1->Controls->Add(this->tabPageTask_6_3);
			   this->tabControl_lab_1->Controls->Add(this->tabPageTask_6_4);
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
			   this->tabPageTask_6_1->Text = L"Task_6.1";
			   this->tabPageTask_6_1->UseVisualStyleBackColor = true;
			   // groupBoxSolutionTask_6_1			
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->txtBxResultTask_6_1);
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->btnFillArrValueTask_6_1);
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->btnGetSumValueRowWithNegativeTask_6_1);
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->btnGetMinValueInMatrixTask_6_1);
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->btnGetAverageEvenValueTask_6_1);
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->dtgViewMatrix);
			   this->groupBoxSolutionTask_6_1->Location = System::Drawing::Point(8, 100);
			   this->groupBoxSolutionTask_6_1->Name = L"groupBox2";
			   this->groupBoxSolutionTask_6_1->Size = System::Drawing::Size(1340, 540);
			   this->groupBoxSolutionTask_6_1->TabIndex = 1;
			   this->groupBoxSolutionTask_6_1->TabStop = false;
			   this->groupBoxSolutionTask_6_1->Text = L"Решение";
			   // txtBxResultTask_6_1				
			   this->txtBxResultTask_6_1->AcceptsReturn = true;
			   this->txtBxResultTask_6_1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			   this->txtBxResultTask_6_1->Location = System::Drawing::Point(5, 350);
			   this->txtBxResultTask_6_1->Multiline = true;
			   this->txtBxResultTask_6_1->Name = L"textBoxOutputResult";
			   this->txtBxResultTask_6_1->ReadOnly = true;
			   this->txtBxResultTask_6_1->Size = System::Drawing::Size(1320, 180);
			   this->txtBxResultTask_6_1->TabIndex = 7;
			   this->txtBxResultTask_6_1->ScrollBars = ScrollBars::Vertical;
			   //dtgViewMatrix
			   this->dtgViewMatrix->RowCount = countRowMatrix;
			   this->dtgViewMatrix->ColumnCount = countColMatrix;
			   this->dtgViewMatrix->Location = System::Drawing::Point(8, 100);
			   this->dtgViewMatrix->Size = System::Drawing::Size(1320, 240);
			   //настройка колонок
			   DataGridViewColumnCollection^ columns = dtgViewMatrix->Columns;
			   for each (DataGridViewColumn ^ col in columns)
			   {
				   col->Width = 80;
				   col->DefaultCellStyle->Format = "N0";
			   }
			   // btnFillArrValueTask_6_1			
			   this->btnFillArrValueTask_6_1->Location = System::Drawing::Point(5, 20);
			   this->btnFillArrValueTask_6_1->Name = L"btnFillArrValueTask_6_1";
			   this->btnFillArrValueTask_6_1->Size = System::Drawing::Size(148, 23);
			   this->btnFillArrValueTask_6_1->TabIndex = 6;
			   this->btnFillArrValueTask_6_1->Text = L"Заполнить матрицу";
			   this->btnFillArrValueTask_6_1->UseVisualStyleBackColor = true;
			   this->btnFillArrValueTask_6_1->Click += gcnew System::EventHandler(this, &Form1::btnFillArrValueTask_6_1_Click);
			   // btnGetSumValueRowWithNegativeTask_6_1			
			   this->btnGetSumValueRowWithNegativeTask_6_1->Location = System::Drawing::Point(5, 50);
			   this->btnGetSumValueRowWithNegativeTask_6_1->Name = L"btnGetSumValueRowWithNegativeTask_6_1";
			   this->btnGetSumValueRowWithNegativeTask_6_1->Size = System::Drawing::Size(180, 50);
			   this->btnGetSumValueRowWithNegativeTask_6_1->TabIndex = 6;
			   this->btnGetSumValueRowWithNegativeTask_6_1->Text = L"Найти сумму элементов в строках, содержащих хотя бы один отрицательный элемент";
			   this->btnGetSumValueRowWithNegativeTask_6_1->UseVisualStyleBackColor = true;
			   this->btnGetSumValueRowWithNegativeTask_6_1->Click += gcnew System::EventHandler(this, &Form1::btnGetSumValueRowWithNegativeTask_6_1_Click);
			   // btnGetMinValueInMatrixTask_6_1			
			   this->btnGetMinValueInMatrixTask_6_1->Location = System::Drawing::Point(180, 20);
			   this->btnGetMinValueInMatrixTask_6_1->Name = L"btnGetMinValueInMatrixTask_6_1";
			   this->btnGetMinValueInMatrixTask_6_1->Size = System::Drawing::Size(250, 22);
			   this->btnGetMinValueInMatrixTask_6_1->TabIndex = 6;
			   this->btnGetMinValueInMatrixTask_6_1->Text = L"Найти минимальный элемент матрицы";
			   this->btnGetMinValueInMatrixTask_6_1->UseVisualStyleBackColor = true;
			   this->btnGetMinValueInMatrixTask_6_1->Click += gcnew System::EventHandler(this, &Form1::btnGetMinValueInMatrixTask_6_1_Click);
			   // btnGetAverageEvenValueTask_6_1			
			   this->btnGetAverageEvenValueTask_6_1->Location = System::Drawing::Point(180, 50);
			   this->btnGetAverageEvenValueTask_6_1->Name = L"btnGetAverageEvenValueTask_6_1";
			   this->btnGetAverageEvenValueTask_6_1->Size = System::Drawing::Size(250, 50);
			   this->btnGetAverageEvenValueTask_6_1->TabIndex = 6;
			   this->btnGetAverageEvenValueTask_6_1->Text = L"Найти среднее арифметическое значение четных элементов строк и столбцов матрицы";
			   this->btnGetAverageEvenValueTask_6_1->UseVisualStyleBackColor = true;
			   this->btnGetAverageEvenValueTask_6_1->Click += gcnew System::EventHandler(this, &Form1::btnGetAverageEvenValueTask_6_1_Click);
			   // groupBoxDescriptionTask_6_1			
			   this->groupBoxDescriptionTask_6_1->BackColor = System::Drawing::Color::Transparent;
			   this->groupBoxDescriptionTask_6_1->Controls->Add(this->txtBxDescriptionTask_6_1);
			   this->groupBoxDescriptionTask_6_1->Location = System::Drawing::Point(8, 6);
			   this->groupBoxDescriptionTask_6_1->Name = L"groupBox1";
			   this->groupBoxDescriptionTask_6_1->Size = System::Drawing::Size(823, 95);
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
			   this->txtBxDescriptionTask_6_1->Size = System::Drawing::Size(811, 70);
			   this->txtBxDescriptionTask_6_1->TabIndex = 0;
			   this->txtBxDescriptionTask_6_1->Text = L"Дана целочисленная прямоугольная матрица A [9*16]. Написать программу, определяющую величины : "
				   + "\r\n1) суммы элементов в строках, которые содержат хотя бы один отрицательный элемент;"
				   + "\r\n2) минимальный элемент матрицы;"
				   + "\r\n3) среднее арифметическое значение четных элементов строк и столбцов матрицы;"
				   + "\r\n4) средние арифметические значения четных элементов строк и столбцов матрицы упорядочить по убыванию методом вставки.";
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
			   // labelStrTask_6_4			 
			   this->labelStrTask_6_4->AutoSize = true;
			   this->labelStrTask_6_4->Location = System::Drawing::Point(280, 15);
			   this->labelStrTask_6_4->Name = L"label4";
			   this->labelStrTask_6_4->Size = System::Drawing::Size(207, 13);
			   this->labelStrTask_6_4->TabIndex = 0;
			   this->labelStrTask_6_4->Text = L"Введите строку-предложение на русском языке";
			   // labelKTask_6_4			 
			   this->labelKTask_6_4->AutoSize = true;
			   this->labelKTask_6_4->Location = System::Drawing::Point(5, 90);
			   this->labelKTask_6_4->Name = L"labelKTask_6_4";
			   this->labelKTask_6_4->Size = System::Drawing::Size(207, 13);
			   this->labelKTask_6_4->TabIndex = 0;
			   this->labelKTask_6_4->Text = L"Введите число k (0 < k < 10)";
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
			   // tabPageTask_6_4	
			   this->tabPageTask_6_4->Controls->Add(this->groupBoxDescriptionTask_6_4);
			   this->tabPageTask_6_4->Controls->Add(this->groupBoxSolutionTask_6_4);
			   this->tabPageTask_6_4->Location = System::Drawing::Point(4, 22);
			   this->tabPageTask_6_4->Name = L"tabPageTask_6_4";
			   this->tabPageTask_6_4->Padding = System::Windows::Forms::Padding(3);
			   this->tabPageTask_6_4->Size = System::Drawing::Size(840, 442);
			   this->tabPageTask_6_4->TabIndex = 1;
			   this->tabPageTask_6_4->Text = L"Task_6.4";
			   this->tabPageTask_6_4->UseVisualStyleBackColor = true;
			   //groupBoxDescriptionTask_6_3
			   this->groupBoxDescriptionTask_6_3->BackColor = System::Drawing::Color::Transparent;
			   this->groupBoxDescriptionTask_6_3->Controls->Add(this->txtBxDescriptionTask_6_3);
			   this->groupBoxDescriptionTask_6_3->Location = System::Drawing::Point(3, 0);
			   this->groupBoxDescriptionTask_6_3->Name = L"groupBox";
			   this->groupBoxDescriptionTask_6_3->Size = System::Drawing::Size(834, 60);
			   this->groupBoxDescriptionTask_6_3->TabIndex = 0;
			   this->groupBoxDescriptionTask_6_3->TabStop = false;
			   this->groupBoxDescriptionTask_6_3->Text = L"Описание задачи";
			   //groupBoxDescriptionTask_6_4
			   this->groupBoxDescriptionTask_6_4->BackColor = System::Drawing::Color::Transparent;
			   this->groupBoxDescriptionTask_6_4->Controls->Add(this->txtBxDescriptionTask_6_4);
			   this->groupBoxDescriptionTask_6_4->Location = System::Drawing::Point(3, 0);
			   this->groupBoxDescriptionTask_6_4->Name = L"groupBox";
			   this->groupBoxDescriptionTask_6_4->Size = System::Drawing::Size(834, 70);
			   this->groupBoxDescriptionTask_6_4->TabIndex = 0;
			   this->groupBoxDescriptionTask_6_4->TabStop = false;
			   this->groupBoxDescriptionTask_6_4->Text = L"Описание задачи";
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
			   //txtBxDescriptionTask_6_4				 
			   this->txtBxDescriptionTask_6_4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			   this->txtBxDescriptionTask_6_4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->txtBxDescriptionTask_6_4->Location = System::Drawing::Point(6, 19);
			   this->txtBxDescriptionTask_6_4->Multiline = true;
			   this->txtBxDescriptionTask_6_4->Name = L"textBoxDescriptionTask6_3";
			   this->txtBxDescriptionTask_6_4->ReadOnly = true;
			   this->txtBxDescriptionTask_6_4->Size = System::Drawing::Size(811, 40);
			   this->txtBxDescriptionTask_6_4->TabIndex = 0;
			   this->txtBxDescriptionTask_6_4->Text = L"Дана строка-предложение на русском языке и число k (0 < k < 10)."
				   + " Зашифровать строку, выполнив циклическую замену каждой буквы на букву"
				   + " того же регистра, расположенную в алфавите на k - й позиции после шифруемой"
				   + " буквы(например, для k = 2 «А» перейдет в «В», «а» — в «в», «Б» — в «Г», «я»"
				   + " — в «б» и т.д.).Букву «ё» в алфавите не учитывать, знаки препинания и"
				   + " пробелы не изменять.";
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
			   //groupBoxSolutionTask_6_4
			   this->groupBoxSolutionTask_6_4->Controls->Add(this->labelStrTask_6_4);
			   this->groupBoxSolutionTask_6_4->Controls->Add(this->txtBxInputStrTask_6_4);
			   this->groupBoxSolutionTask_6_4->Controls->Add(this->txtBxInputKTask_6_4);
			   this->groupBoxSolutionTask_6_4->Controls->Add(this->labelKTask_6_4);
			   this->groupBoxSolutionTask_6_4->Controls->Add(this->txtBxResultTask_6_4);
			   this->groupBoxSolutionTask_6_4->Controls->Add(this->btnEncryptStrTask_6_4);
			   this->groupBoxSolutionTask_6_4->Location = System::Drawing::Point(3, 70);
			   this->groupBoxSolutionTask_6_4->Name = L"groupBox4";
			   this->groupBoxSolutionTask_6_4->Size = System::Drawing::Size(834, 380);
			   this->groupBoxSolutionTask_6_4->TabIndex = 1;
			   this->groupBoxSolutionTask_6_4->TabStop = false;
			   this->groupBoxSolutionTask_6_4->Text = L"Решение";
			   //labelMTask_6_3
			   this->labelStringWithSpacesTask_6_3->AutoSize = true;
			   this->labelStringWithSpacesTask_6_3->Location = System::Drawing::Point(260, 20);
			   this->labelStringWithSpacesTask_6_3->Name = L"label4";
			   this->labelStringWithSpacesTask_6_3->Size = System::Drawing::Size(207, 13);
			   this->labelStringWithSpacesTask_6_3->TabIndex = 0;
			   this->labelStringWithSpacesTask_6_3->Text = L"Введите строку, содержащую избыточные пробелы";
			   //txtBxInputStringWithSpacesTask_6_3				
			   this->txtBxInputStringWithSpacesTask_6_3->Location = System::Drawing::Point(7, 35);
			   this->txtBxInputStringWithSpacesTask_6_3->Name = L"txtBxInputStringWithSpacesTask_6_3";
			   this->txtBxInputStringWithSpacesTask_6_3->Size = System::Drawing::Size(820, 50);
			   this->txtBxInputStringWithSpacesTask_6_3->TabIndex = 3;
			   this->txtBxInputStringWithSpacesTask_6_3->AcceptsReturn = true;
			   this->txtBxInputStringWithSpacesTask_6_3->Multiline = true;
			   //txtBxInputStrTask_6_4				
			   this->txtBxInputStrTask_6_4->Location = System::Drawing::Point(7, 35);
			   this->txtBxInputStrTask_6_4->Name = L"txtBxInputStrTask_6_4";
			   this->txtBxInputStrTask_6_4->Size = System::Drawing::Size(820, 50);
			   this->txtBxInputStrTask_6_4->TabIndex = 3;
			   this->txtBxInputStrTask_6_4->AcceptsReturn = true;
			   this->txtBxInputStrTask_6_4->Multiline = true;
			   //txtBxInputKTask_6_4				
			   this->txtBxInputKTask_6_4->Location = System::Drawing::Point(7, 110);
			   this->txtBxInputKTask_6_4->Name = L"txtBxInputKTask_6_4";
			   this->txtBxInputKTask_6_4->Size = System::Drawing::Size(140, 50);
			   this->txtBxInputKTask_6_4->TabIndex = 3;
			   //txtBxResultTask_6_3				
			   this->txtBxResultTask_6_3->Location = System::Drawing::Point(6, 138);
			   this->txtBxResultTask_6_3->Multiline = true;
			   this->txtBxResultTask_6_3->Name = L"txtBxResultTask_6_3";
			   this->txtBxResultTask_6_3->Size = System::Drawing::Size(822, 237);
			   this->txtBxResultTask_6_3->TabIndex = 4;
			   //txtBxResultTask_6_4				
			   this->txtBxResultTask_6_4->Location = System::Drawing::Point(6, 140);
			   this->txtBxResultTask_6_4->Multiline = true;
			   this->txtBxResultTask_6_4->Name = L"txtBxResultTask_6_4";
			   this->txtBxResultTask_6_4->Size = System::Drawing::Size(822, 230);
			   this->txtBxResultTask_6_4->TabIndex = 4;
			   //btnDeleteSpacesTask_6_3
			   this->btnDeleteSpacesTask_6_3->Location = System::Drawing::Point(5, 100);
			   this->btnDeleteSpacesTask_6_3->Name = L"btnDeleteSpacesTask_6_3";
			   this->btnDeleteSpacesTask_6_3->Size = System::Drawing::Size(229, 23);
			   this->btnDeleteSpacesTask_6_3->TabIndex = 3;
			   this->btnDeleteSpacesTask_6_3->Text = L"Удалить лишние пробелы";
			   this->btnDeleteSpacesTask_6_3->UseVisualStyleBackColor = true;
			   this->btnDeleteSpacesTask_6_3->Click += gcnew System::EventHandler(this, &Form1::btnDeleteSpacesTask_6_3_Click);
			   //btnEncryptStrTask_6_4
			   this->btnEncryptStrTask_6_4->Location = System::Drawing::Point(180, 108);
			   this->btnEncryptStrTask_6_4->Name = L"btnEncryptStrTask_6_4";
			   this->btnEncryptStrTask_6_4->Size = System::Drawing::Size(200, 23);
			   this->btnEncryptStrTask_6_4->TabIndex = 3;
			   this->btnEncryptStrTask_6_4->Text = L"Зашифровать строку";
			   this->btnEncryptStrTask_6_4->UseVisualStyleBackColor = true;
			   this->btnEncryptStrTask_6_4->Click += gcnew System::EventHandler(this, &Form1::btnEncryptStrTask_6_4_Click);
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1380, 669);
			   this->Controls->Add(this->tabControl_lab_1);
			   this->Name = L"Form1";
			   this->Text = L"Лабораторная № 4";
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
			   this->MinimumSize = System::Drawing::Size(1380, 708);
			   this->MaximumSize = System::Drawing::Size(1380, 708);
			   this->ResumeLayout(false);

		   }

			#pragma region Task_6_1

		   //заполнение матрицы
		   System::Void btnFillArrValueTask_6_1_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   //снимаем все выделения ячеек
			   ClearSelectedDtgViewMatrix();

			   Random^ rand = gcnew Random();

			   for (int row = 0; row < countRowMatrix; row++)
			   {
				   for (int col = 0; col < countColMatrix; col++)
				   {
					   matrixRundomValue[row, col] = rand->Next(int::MinValue, int::MaxValue);
				   }
			   }

			   for (int row = 0; row < countRowMatrix; row++)
			   {
				   for (int col = 0; col < countColMatrix; col++)
				   {
					   //заполняем датагрид
					   dtgViewMatrix[col, row]->Value = matrixRundomValue[row, col];
					   //нумеруем строки
					   dtgViewMatrix->Rows[row]->HeaderCell->Value = String::Format("{0}", dtgViewMatrix->Rows[row]->Index + 1);
					   //нумеруем столбцы
					   dtgViewMatrix->Columns[col]->HeaderCell->Value = String::Format("{0}", dtgViewMatrix->Columns[col]->Index + 1);
				   }
			   }
		   }

		   //поиск минмального элемента
		   System::Void btnGetMinValueInMatrixTask_6_1_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   //проверяем заполнена ли матрица
			   if (!isFillMatrix())
				   return;

			   //лист для минимальных элементов в строках матрицы
			   System::Collections::Generic::List<int>^ minValues = gcnew System::Collections::Generic::List<int>();

			   for (int row = 0; row < countRowMatrix; row++)
			   {
				   System::Collections::Generic::List<int>^ rowValues = gcnew System::Collections::Generic::List<int>();

				   for (int col = 0; col < countColMatrix; col++)
				   {
					   //добавляе мвсе элементы строки в лист
					   rowValues->Add(matrixRundomValue[row, col]);
				   }

				   //сортируем лист с элементами строки, чтобы минимальный элемент был в самом начале
				   rowValues->Sort();
				   //добавляем минимальный элемент в лист
				   minValues->Add(rowValues[0]);
			   }

			   //сортируем, чтобы минимальный элемент из минимальных элементов строк был в самом начале
			   minValues->Sort();
			   int minValue = minValues[0];



			   for (int row = 0; row < countRowMatrix; row++)
			   {
				   for (int col = 0; col < countColMatrix; col++)
				   {
					   //снимаем дефолтное выделение ячейки
					   dtgViewMatrix->Rows[row]->Cells[col]->Selected = false;

					   //выделяем ячейку с минимальным значением
					   if (matrixRundomValue[row, col] == minValue)
						   dtgViewMatrix->Rows[row]->Cells[col]->Selected = true;
				   }
			   }

			   txtBxResultTask_6_1->Text = "Минимальный элемент матрицы: " + minValue;
		   }

		   //проверка, что матрица заполнена
		   Boolean isFillMatrix()
		   {
			   for (int row = 0; row < countRowMatrix; row++)
			   {
				   for (int col = 0; col < countColMatrix; col++)
				   {
					   if (matrixRundomValue[row, col] != 0)
					   {
						   return true;
					   }

				   }
			   }

			   MessageBox::Show("Необходимо заполнить матрицу", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   return false;
		   }

		   System::Void btnGetSumValueRowWithNegativeTask_6_1_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   if (!isFillMatrix())
				   return;

			   txtBxResultTask_6_1->Clear();

			   System::Collections::Generic::List<int>^ rowNumbersWithNegative = GetNumRowWithNegativeValue();

			   for (int i = 0; i < rowNumbersWithNegative->Count; i++)
			   {
				   dtgViewMatrix->Rows[rowNumbersWithNegative[i]]->Selected = true;

				   int sum = GetSumValueInRow(rowNumbersWithNegative[i]);
				   txtBxResultTask_6_1->Text += "Сумма элементов в строке " + (rowNumbersWithNegative[i] + 1) + " равна: " + sum + "\r\n";
			   }
		   }

		   private: int GetSumValueInRow(int numberRow)
		   {
			   int sum = 0;

			   for (int col = 0; col < countColMatrix; col++)
			   {				
				   sum += matrixRundomValue[numberRow, col];
			   }

			   return sum;
		   }

		   private: System::Collections::Generic::List<int>^ GetNumRowWithNegativeValue()
	       {
		       System::Collections::Generic::List<int>^ rowNumbers = gcnew System::Collections::Generic::List<int>();

		       for (int row = 0; row < countRowMatrix; row++)
		       {
			       for (int col = 0; col < countColMatrix; col++)
			       {
				       //снимаем дефолтное выделение ячейки
				       dtgViewMatrix->Rows[row]->Cells[col]->Selected = false;

				      if (matrixRundomValue[row, col] < 0)
				      {
					      rowNumbers->Add(row);
						  break;
				      }
			       }
		       }

		       return rowNumbers;
	       }

		   System::Void btnGetAverageEvenValueTask_6_1_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   if (!isFillMatrix())
				   return;

			   txtBxResultTask_6_1->Clear();
			   //снимаем все выделения ячеек
			   ClearSelectedDtgViewMatrix();			  
			   
			   System::Collections::Generic::List<double>^ averagesRow = GetAverageInRow();			  
			   System::Collections::Generic::List<double>^ averagesCol = GetEvenValueInCol();

			   System::Collections::Generic::List<double>^ averagesRowSorted = SortInsertion(averagesRow);
			   System::Collections::Generic::List<double>^ averagesColSorted = SortInsertion(averagesCol);

			   txtBxResultTask_6_1->Text += "Средние арифметические значения четных элементов строк, отсортированных по убыванию: \r\n";

			   for (int i = 0; i < averagesRowSorted->Count; i++)
			   {
				   txtBxResultTask_6_1->Text += Math::Round(averagesRowSorted[i], 2) + "\r\n";
			   }

			   txtBxResultTask_6_1->Text += "\r\nСредние арифметические значения четных элементов столбцов, отсортированных по убыванию: \r\n";

			   for (int i = 0; i < averagesColSorted->Count; i++)
			   {
				   txtBxResultTask_6_1->Text += Math::Round(averagesColSorted[i], 2) + "\r\n";
			   }
		   }

			private: double GetAverage(System::Collections::Generic::List<int>^ values)
			{
				int sum = 0;

				for (int i = 0; i < values->Count; i++)
				{
					sum += values[i];
				}

				return (double)sum / values->Count;				
			}

			private: System::Collections::Generic::List<double>^ SortInsertion(System::Collections::Generic::List<double>^ values) 
			{
				for (int i = 1; i < values->Count; i++)
				{
					double value = values[i];
					int j = i - 1;
					while ((j >= 0) && (values[j].CompareTo(value) < 0))
					{
						values[j + 1] = values[j];
						j--;
					}
					values[j + 1] = value;
				}

				return values;
			}

		   //возвращаем список средних арифметических по строкам для сортировки
		   private: System::Collections::Generic::List<double>^ GetAverageInRow()
		   {
			   System::Collections::Generic::List<double>^ averagesRow = gcnew System::Collections::Generic::List<double>();
			   System::Collections::Generic::List<int>^ evenValue = gcnew System::Collections::Generic::List<int>();

			   for (int row = 0; row < countRowMatrix; row++)
			   {
				   //на каждой итерации строки очищается список
				   evenValue->Clear();

				   for (int col = 0; col < countColMatrix; col++)
				   {	   
					   if (matrixRundomValue[row, col] %  2 == 0)
					   {
						   //подсвкечиваем четные числа 
						   dtgViewMatrix->Rows[row]->Cells[col]->Selected = true;
						   evenValue->Add(matrixRundomValue[row, col]);						   
					   }
				   }

				   averagesRow->Add(GetAverage(evenValue));				  
			   }

			   return averagesRow;
		   }

			//возвращаем список средних арифметических по столбцам для сортировки
			private: System::Collections::Generic::List<double>^ GetEvenValueInCol()
			{
				System::Collections::Generic::List<double>^ averagesCol = gcnew System::Collections::Generic::List<double>();
				System::Collections::Generic::List<int>^ evenValue = gcnew System::Collections::Generic::List<int>();

				for (int col = 0; col < countColMatrix; col++)
				{
					//на каждой итерации столбца очищается список
					evenValue->Clear();

					for (int row = 0; row < countRowMatrix; row++)
					{			
						if (matrixRundomValue[row, col] % 2 == 0)
						{
							//подсвкечиваем четные числа 
							dtgViewMatrix->Rows[row]->Cells[col]->Selected = true;
							evenValue->Add(matrixRundomValue[row, col]);
						}
					}

					averagesCol->Add(GetAverage(evenValue));
				}

				return averagesCol;
			}

			private: void ClearSelectedDtgViewMatrix() 
			{
				for (int row = 0; row < countRowMatrix; row++)
				{
					for (int col = 0; col < countColMatrix; col++)
					{
						//снимаем дефолтное выделение ячейки
						dtgViewMatrix->Rows[row]->Cells[col]->Selected = false;						
					}
				}
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

			   cli::array<System::String^>^ strArray = str->Split(' ');

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

#pragma region Task_6_4
		   System::Void btnEncryptStrTask_6_4_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   if (!isValidateK(txtBxInputKTask_6_4->Text))
				   return;

			   int k = Convert::ToInt32(txtBxInputKTask_6_4->Text);
			   String^ str = txtBxInputStrTask_6_4->Text;

			   if (!isValidateStr(str))
				   return;

			   cli::array<Char>^ arrayChar = str->ToCharArray();

			   for (int i = 0; i < arrayChar->Length; i++)
			   {
				   //отсекаем символы
				   if (arrayChar[i] >= 32 && arrayChar[i] <= 64)
					   continue;

				   //строчные буквы если переполнение
				   if (arrayChar[i] >= 1072 && arrayChar[i] <= 1103)
				   {
					   if ((arrayChar[i] + k) > 1103)
					   {
						   arrayChar[i] = 1071 + Math::Abs(1103 - arrayChar[i] + k);
						   continue;
					   }
				   }

				   //заглавные буквы если переполнение
				   if (arrayChar[i] >= 1040 && arrayChar[i] <= 1071)
				   {
					   if ((arrayChar[i] + k) > 1071)
					   {
						   arrayChar[i] = 1039 + Math::Abs(1071 - arrayChar[i] + k);
						   continue;
					   }
				   }

				   arrayChar[i] = arrayChar[i] + k;
			   }

			   String^ result = gcnew String(arrayChar);
			   txtBxResultTask_6_4->Text = result;
		   }

		   Boolean isValidateK(String^ k)
		   {
			   int parseResult;

			   if (String::IsNullOrWhiteSpace(k))
			   {
				   MessageBox::Show("Необходимо ввести число k", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }

			   if (!int::TryParse(k, parseResult))
			   {
				   MessageBox::Show("Число k должно быть целым числом", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }

			   if (parseResult < 0 || parseResult > 10)
			   {
				   MessageBox::Show("Число k должно быть больше 0  и меньше 10", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }

			   return true;
		   }

		   Boolean isValidateStr(String^ str)
		   {
			   if (String::IsNullOrWhiteSpace(str))
			   {
				   MessageBox::Show("Нужно ввести строку", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }

			   for (int i = 0; i < str->Length; i++)
			   {
				   int code = Convert::ToInt64(str[i]);

				   if ((code > 65 && code < 1040) || code > 1103)
				   {
					   MessageBox::Show("Нужно ввести строку на русском языке без буквы \"ё\"", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   return false;
				   }
			   }

			   return true;
		   }
#pragma endregion
	};
};

