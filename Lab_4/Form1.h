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
			   //group_boxes
		private: System::Windows::Forms::GroupBox^ groupBoxDescriptionTask_6_1;
		private: System::Windows::Forms::GroupBox^ groupBoxSolutionTask_6_1;
		private: System::Windows::Forms::GroupBox^ groupBoxDescriptionTask_6_2;
		private: System::Windows::Forms::GroupBox^ groupBoxSolutionTask_6_2;
			   //text_boxes
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxResultTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_2;
		private: System::Windows::Forms::TextBox^ txtBxResultTask_6_2;
			   //buttons
		private: System::Windows::Forms::Button^ btnFillArrValueTask_6_1;
		private: System::Windows::Forms::Button^ btnGetSumValueRowWithNegativeTask_6_1;
		private: System::Windows::Forms::Button^ btnGetMinValueInMatrixTask_6_1;
		private: System::Windows::Forms::Button^ btnGetAverageEvenValueTask_6_1;
		private: System::Windows::Forms::Button^ btnFillArrValueTask_6_2;
		private: System::Windows::Forms::Button^ btnCountPrimeValueTask_6_2;
		private: System::Windows::Forms::Button^ btnMaxMainSideDiagonalTask_6_2;
		private: System::Windows::Forms::Button^ btnAverageQuadraticTask_6_2;
			   //datagridView
		private: System::Windows::Forms::DataGridView^ dtgViewMatrixTask_6_1;
		private: System::Windows::Forms::DataGridView^ dtgViewMatrixTask_6_2;
			   //matrix
		private: cli::array<int, 2>^ matrixRundomValueTask_6_1;
		private: cli::array<int, 2>^ matrixRundomValueTask_6_2;
		private: int countRowMatrixTask_6_1 = 9;
		private: int countColMatrixTask_6_1 = 16;
		private: int countRowMatrixTask_6_2 = 12;
		private: int countColMatrixTask_6_2 = 12;

		protected:

		protected:

		private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {
			   matrixRundomValueTask_6_1 = gcnew cli::array<int, 2>(countRowMatrixTask_6_1, countColMatrixTask_6_1);
			   matrixRundomValueTask_6_2 = gcnew cli::array<int, 2>(countRowMatrixTask_6_2, countColMatrixTask_6_2);
			   this->dtgViewMatrixTask_6_1 = (gcnew System::Windows::Forms::DataGridView());
			   this->dtgViewMatrixTask_6_1->SuspendLayout();
			   this->dtgViewMatrixTask_6_2 = (gcnew System::Windows::Forms::DataGridView());
			   this->dtgViewMatrixTask_6_2->SuspendLayout();
			   //tab_control
			   this->tabControl_lab_1 = (gcnew System::Windows::Forms::TabControl());
			   this->tabControl_lab_1->SuspendLayout();
			   //tab_pages
			   this->tabPageTask_6_1 = (gcnew System::Windows::Forms::TabPage());
			   this->tabPageTask_6_1->SuspendLayout();
			   this->tabPageTask_6_2 = (gcnew System::Windows::Forms::TabPage());
			   this->tabPageTask_6_2->SuspendLayout();
			   //group_boxes
			   this->groupBoxDescriptionTask_6_1 = (gcnew System::Windows::Forms::GroupBox());
			   this->groupBoxDescriptionTask_6_1->SuspendLayout();
			   this->groupBoxSolutionTask_6_1 = (gcnew System::Windows::Forms::GroupBox());
			   this->groupBoxSolutionTask_6_1->SuspendLayout();
			   this->groupBoxDescriptionTask_6_2 = (gcnew System::Windows::Forms::GroupBox());
			   this->groupBoxDescriptionTask_6_2->SuspendLayout();
			   this->groupBoxSolutionTask_6_2 = (gcnew System::Windows::Forms::GroupBox());
			   this->groupBoxSolutionTask_6_2->SuspendLayout();
			   //text_boxes
			   this->txtBxDescriptionTask_6_1 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxResultTask_6_1 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxDescriptionTask_6_2 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxResultTask_6_2 = (gcnew System::Windows::Forms::TextBox());
			   //buttons
			   this->btnFillArrValueTask_6_1 = (gcnew System::Windows::Forms::Button());
			   this->btnGetSumValueRowWithNegativeTask_6_1 = (gcnew System::Windows::Forms::Button());
			   this->btnGetMinValueInMatrixTask_6_1 = (gcnew System::Windows::Forms::Button());
			   this->btnGetAverageEvenValueTask_6_1 = (gcnew System::Windows::Forms::Button());
			   this->btnFillArrValueTask_6_2 = (gcnew System::Windows::Forms::Button());
			   this->btnCountPrimeValueTask_6_2 = (gcnew System::Windows::Forms::Button());
			   this->btnMaxMainSideDiagonalTask_6_2 = (gcnew System::Windows::Forms::Button());
			   this->btnAverageQuadraticTask_6_2 = (gcnew System::Windows::Forms::Button());

			   this->SuspendLayout();

			   //tabControls			
			   this->tabControl_lab_1->Controls->Add(this->tabPageTask_6_1);
			   this->tabControl_lab_1->Controls->Add(this->tabPageTask_6_2);
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
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->dtgViewMatrixTask_6_1);
			   this->groupBoxSolutionTask_6_1->Location = System::Drawing::Point(8, 100);
			   this->groupBoxSolutionTask_6_1->Name = L"groupBox2";
			   this->groupBoxSolutionTask_6_1->Size = System::Drawing::Size(1330, 540);
			   this->groupBoxSolutionTask_6_1->TabIndex = 1;
			   this->groupBoxSolutionTask_6_1->TabStop = false;
			   this->groupBoxSolutionTask_6_1->Text = L"Решение";
			   // txtBxResultTask_6_1				
			   this->txtBxResultTask_6_1->AcceptsReturn = true;
			   this->txtBxResultTask_6_1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			   this->txtBxResultTask_6_1->Location = System::Drawing::Point(5, 350);
			   this->txtBxResultTask_6_1->Multiline = true;
			   this->txtBxResultTask_6_1->Name = L"txtBxResultTask_6_1";
			   this->txtBxResultTask_6_1->ReadOnly = true;
			   this->txtBxResultTask_6_1->Size = System::Drawing::Size(1320, 180);
			   this->txtBxResultTask_6_1->TabIndex = 7;
			   this->txtBxResultTask_6_1->ScrollBars = ScrollBars::Vertical;
			   //dtgViewMatrixTask_6_1
			   this->dtgViewMatrixTask_6_1->RowCount = countRowMatrixTask_6_1;
			   this->dtgViewMatrixTask_6_1->ColumnCount = countColMatrixTask_6_1;
			   this->dtgViewMatrixTask_6_1->Location = System::Drawing::Point(5, 100);
			   this->dtgViewMatrixTask_6_1->Size = System::Drawing::Size(1320, 240);
			   //настройка колонок
			   DataGridViewColumnCollection^ columns = dtgViewMatrixTask_6_1->Columns;
			   for each (DataGridViewColumn ^ col in columns)
			   {
				   col->Width = 80;
				   col->DefaultCellStyle->Format = "N0";
			   }
			   this->dtgViewMatrixTask_6_2->RowCount = countRowMatrixTask_6_2;
			   this->dtgViewMatrixTask_6_2->ColumnCount = countColMatrixTask_6_2;
			   this->dtgViewMatrixTask_6_2->Location = System::Drawing::Point(5, 100);
			   this->dtgViewMatrixTask_6_2->Size = System::Drawing::Size(1320, 240);
			   // btnFillArrValueTask_6_1			
			   this->btnFillArrValueTask_6_1->Location = System::Drawing::Point(5, 20);
			   this->btnFillArrValueTask_6_1->Name = L"btnFillArrValueTask_6_1";
			   this->btnFillArrValueTask_6_1->Size = System::Drawing::Size(148, 23);
			   this->btnFillArrValueTask_6_1->TabIndex = 6;
			   this->btnFillArrValueTask_6_1->Text = L"Заполнить матрицу";
			   this->btnFillArrValueTask_6_1->UseVisualStyleBackColor = true;
			   this->btnFillArrValueTask_6_1->Click += gcnew System::EventHandler(this, &Form1::btnFillArrValueTask_6_1_Click);
			   // btnGetSumValueRowWithNegativeTask_6_1			
			   this->btnGetSumValueRowWithNegativeTask_6_1->Location = System::Drawing::Point(170, 20);
			   this->btnGetSumValueRowWithNegativeTask_6_1->Name = L"btnGetSumValueRowWithNegativeTask_6_1";
			   this->btnGetSumValueRowWithNegativeTask_6_1->Size = System::Drawing::Size(148, 70);
			   this->btnGetSumValueRowWithNegativeTask_6_1->TabIndex = 6;
			   this->btnGetSumValueRowWithNegativeTask_6_1->Text = L"Найти сумму элементов в строках, содержащих хотя бы один отрицательный элемент";
			   this->btnGetSumValueRowWithNegativeTask_6_1->UseVisualStyleBackColor = true;
			   this->btnGetSumValueRowWithNegativeTask_6_1->Click += gcnew System::EventHandler(this, &Form1::btnGetSumValueRowWithNegativeTask_6_1_Click);
			   // btnGetMinValueInMatrixTask_6_1			
			   this->btnGetMinValueInMatrixTask_6_1->Location = System::Drawing::Point(5, 45);
			   this->btnGetMinValueInMatrixTask_6_1->Name = L"btnGetMinValueInMatrixTask_6_1";
			   this->btnGetMinValueInMatrixTask_6_1->Size = System::Drawing::Size(148, 45);
			   this->btnGetMinValueInMatrixTask_6_1->TabIndex = 6;
			   this->btnGetMinValueInMatrixTask_6_1->Text = L"Найти минимальный элемент матрицы";
			   this->btnGetMinValueInMatrixTask_6_1->UseVisualStyleBackColor = true;
			   this->btnGetMinValueInMatrixTask_6_1->Click += gcnew System::EventHandler(this, &Form1::btnGetMinValueInMatrixTask_6_1_Click);
			   // btnGetAverageEvenValueTask_6_1			
			   this->btnGetAverageEvenValueTask_6_1->Location = System::Drawing::Point(320, 20);
			   this->btnGetAverageEvenValueTask_6_1->Name = L"btnGetAverageEvenValueTask_6_1";
			   this->btnGetAverageEvenValueTask_6_1->Size = System::Drawing::Size(160, 70);
			   this->btnGetAverageEvenValueTask_6_1->TabIndex = 6;
			   this->btnGetAverageEvenValueTask_6_1->Text = L"Найти среднее арифметическое значение четных элементов строк и столбцов матрицы";
			   this->btnGetAverageEvenValueTask_6_1->UseVisualStyleBackColor = true;
			   this->btnGetAverageEvenValueTask_6_1->Click += gcnew System::EventHandler(this, &Form1::btnGetAverageEvenValueTask_6_1_Click);
			   // groupBoxDescriptionTask_6_1			
			   this->groupBoxDescriptionTask_6_1->BackColor = System::Drawing::Color::Transparent;
			   this->groupBoxDescriptionTask_6_1->Controls->Add(this->txtBxDescriptionTask_6_1);
			   this->groupBoxDescriptionTask_6_1->Location = System::Drawing::Point(8, 6);
			   this->groupBoxDescriptionTask_6_1->Name = L"groupBox1";
			   this->groupBoxDescriptionTask_6_1->Size = System::Drawing::Size(1330, 95);
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
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->btnFillArrValueTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->btnCountPrimeValueTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->btnMaxMainSideDiagonalTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->btnAverageQuadraticTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->dtgViewMatrixTask_6_2);
			   this->groupBoxSolutionTask_6_2->Location = System::Drawing::Point(8, 100);
			   this->groupBoxSolutionTask_6_2->Name = L"groupBox4";
			   this->groupBoxSolutionTask_6_2->Size = System::Drawing::Size(1330, 540);
			   this->groupBoxSolutionTask_6_2->TabIndex = 1;
			   this->groupBoxSolutionTask_6_2->TabStop = false;
			   this->groupBoxSolutionTask_6_2->Text = L"Решение";
			   // txtBxResultTask_6_2				
			   this->txtBxResultTask_6_2->Location = System::Drawing::Point(5, 350);
			   this->txtBxResultTask_6_2->Multiline = true;
			   this->txtBxResultTask_6_2->Name = L"txtBxResultTask_6_2";
			   this->txtBxResultTask_6_2->Size = System::Drawing::Size(1320, 180);
			   this->txtBxResultTask_6_2->TabIndex = 4;
			   this->txtBxResultTask_6_2->ScrollBars = ScrollBars::Vertical;
			   // btnGetPerimeterTask_6_2				
			   this->btnFillArrValueTask_6_2->Location = System::Drawing::Point(5, 15);
			   this->btnFillArrValueTask_6_2->Name = L"btnFillArrValueTask_6_2";
			   this->btnFillArrValueTask_6_2->Size = System::Drawing::Size(229, 23);
			   this->btnFillArrValueTask_6_2->TabIndex = 3;
			   this->btnFillArrValueTask_6_2->Text = L"Заполнить матрицу";
			   this->btnFillArrValueTask_6_2->UseVisualStyleBackColor = true;
			   this->btnFillArrValueTask_6_2->Click += gcnew System::EventHandler(this, &Form1::btnFillArrValueTask_6_2_Click);
			   // btnCountPrimeValueTask_6_2				
			   this->btnCountPrimeValueTask_6_2->Location = System::Drawing::Point(5, 45);
			   this->btnCountPrimeValueTask_6_2->Name = L"btnCountPrimeValueTask_6_2";
			   this->btnCountPrimeValueTask_6_2->Size = System::Drawing::Size(229, 50);
			   this->btnCountPrimeValueTask_6_2->TabIndex = 3;
			   this->btnCountPrimeValueTask_6_2->Text = L"Найти количество элементов матрицы содержащих простые числа";
			   this->btnCountPrimeValueTask_6_2->UseVisualStyleBackColor = true;
			   this->btnCountPrimeValueTask_6_2->Click += gcnew System::EventHandler(this, &Form1::btnCountPrimeValueTask_6_2_Click);
			   // btnMaxMainSideDiagonalTask_6_2				
			   this->btnMaxMainSideDiagonalTask_6_2->Location = System::Drawing::Point(240, 15);
			   this->btnMaxMainSideDiagonalTask_6_2->Name = L"btnMaxMainSideDiagonalTask_6_2";
			   this->btnMaxMainSideDiagonalTask_6_2->Size = System::Drawing::Size(229, 50);
			   this->btnMaxMainSideDiagonalTask_6_2->TabIndex = 3;
			   this->btnMaxMainSideDiagonalTask_6_2->Text = L"Найти максимум среди элементов главной и побочной диагоналей матрицы";
			   this->btnMaxMainSideDiagonalTask_6_2->UseVisualStyleBackColor = true;
			   this->btnMaxMainSideDiagonalTask_6_2->Click += gcnew System::EventHandler(this, &Form1::btnMaxMainSideDiagonalTask_6_2_Click);
			   // btnAverageQuadraticTask_6_2				
			   this->btnAverageQuadraticTask_6_2->Location = System::Drawing::Point(475, 15);
			   this->btnAverageQuadraticTask_6_2->Name = L"btnAverageQuadraticTask_6_2";
			   this->btnAverageQuadraticTask_6_2->Size = System::Drawing::Size(229, 50);
			   this->btnAverageQuadraticTask_6_2->TabIndex = 3;
			   this->btnAverageQuadraticTask_6_2->Text = L"Найти средние квадратичные значения четных столбцов нечентных строек матрицы";
			   this->btnAverageQuadraticTask_6_2->UseVisualStyleBackColor = true;
			   this->btnAverageQuadraticTask_6_2->Click += gcnew System::EventHandler(this, &Form1::btnAverageQuadraticTask_6_2_Click);
			   // groupBoxDescriptionTask_6_2				
			   this->groupBoxDescriptionTask_6_2->Controls->Add(this->txtBxDescriptionTask_6_2);
			   this->groupBoxDescriptionTask_6_2->Location = System::Drawing::Point(8, 6);
			   this->groupBoxDescriptionTask_6_2->Name = L"groupBox3";
			   this->groupBoxDescriptionTask_6_2->Size = System::Drawing::Size(1330, 95);
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
			   this->txtBxDescriptionTask_6_2->Size = System::Drawing::Size(811, 70);
			   this->txtBxDescriptionTask_6_2->TabIndex = 0;
			   this->txtBxDescriptionTask_6_2->Text = L"Дана целочисленная квадратная матрица A[12*12]. Написать программу,  определяющую величины: "
				   + "\r\n1) количество элементов матрицы, содержащих простые числа; "
				   + "\r\n2) максимум среди элементов главной и побочной диагоналей матрицы; "
				   + "\r\n3) средние квадратичные значения четных столбцов и нечетных строк матрицы; "
				   + "\r\n4) средние квадратичные значения четных столбцов и нечетных строк "
				   + "матрицы, упорядочить по возрастанию простым методом обмена.";


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
			   this->MinimumSize = System::Drawing::Size(1380, 708);
			   this->MaximumSize = System::Drawing::Size(1380, 708);
			   this->ResumeLayout(false);
		   }

			#pragma region Task_6_1
		   //заполнение матрицы
		   System::Void btnFillArrValueTask_6_1_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   //снимаем все выделения ячеек
			   ClearSelectedDtgViewMatrixTask_6_1();

			   Random^ rand = gcnew Random();

			   for (int row = 0; row < countRowMatrixTask_6_1; row++)
			   {
				   for (int col = 0; col < countColMatrixTask_6_1; col++)
				   {
					   matrixRundomValueTask_6_1[row, col] = rand->Next(int::MinValue, int::MaxValue);
				   }
			   }

			   for (int row = 0; row < countRowMatrixTask_6_1; row++)
			   {
				   for (int col = 0; col < countColMatrixTask_6_1; col++)
				   {
					   //заполняем датагрид
					   dtgViewMatrixTask_6_1[col, row]->Value = matrixRundomValueTask_6_1[row, col];
					   //нумеруем строки
					   dtgViewMatrixTask_6_1->Rows[row]->HeaderCell->Value = String::Format("{0}", dtgViewMatrixTask_6_1->Rows[row]->Index + 1);
					   //нумеруем столбцы
					   dtgViewMatrixTask_6_1->Columns[col]->HeaderCell->Value = String::Format("{0}", dtgViewMatrixTask_6_1->Columns[col]->Index + 1);
				   }
			   }
		   }

		   //поиск минмального элемента
		   System::Void btnGetMinValueInMatrixTask_6_1_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   //проверяем заполнена ли матрица
			   if (!isFillMatrixTask_6_1())
				   return;

			   //лист для минимальных элементов в строках матрицы
			   System::Collections::Generic::List<int>^ minValues = gcnew System::Collections::Generic::List<int>();

			   for (int row = 0; row < countRowMatrixTask_6_1; row++)
			   {
				   System::Collections::Generic::List<int>^ rowValues = gcnew System::Collections::Generic::List<int>();

				   for (int col = 0; col < countColMatrixTask_6_1; col++)
				   {
					   //добавляе мвсе элементы строки в лист
					   rowValues->Add(matrixRundomValueTask_6_1[row, col]);
				   }

				   //сортируем лист с элементами строки, чтобы минимальный элемент был в самом начале
				   rowValues->Sort();
				   //добавляем минимальный элемент в лист
				   minValues->Add(rowValues[0]);
			   }

			   //сортируем, чтобы минимальный элемент из минимальных элементов строк был в самом начале
			   minValues->Sort();
			   int minValue = minValues[0];



			   for (int row = 0; row < countRowMatrixTask_6_1; row++)
			   {
				   for (int col = 0; col < countColMatrixTask_6_1; col++)
				   {
					   //снимаем дефолтное выделение ячейки
					   dtgViewMatrixTask_6_1->Rows[row]->Cells[col]->Selected = false;

					   //выделяем ячейку с минимальным значением
					   if (matrixRundomValueTask_6_1[row, col] == minValue)
						   dtgViewMatrixTask_6_1->Rows[row]->Cells[col]->Selected = true;
				   }
			   }

			   txtBxResultTask_6_1->Text = "Минимальный элемент матрицы: " + minValue;
		   }

		   //проверка, что матрица заполнена
		   Boolean isFillMatrixTask_6_1()
		   {
			   for (int row = 0; row < countRowMatrixTask_6_1; row++)
			   {
				   for (int col = 0; col < countColMatrixTask_6_1; col++)
				   {
					   if (matrixRundomValueTask_6_1[row, col] != 0)
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
			   if (!isFillMatrixTask_6_1())
				   return;

			   txtBxResultTask_6_1->Clear();

			   System::Collections::Generic::List<int>^ rowNumbersWithNegative = GetNumRowWithNegativeValue();

			   for (int i = 0; i < rowNumbersWithNegative->Count; i++)
			   {
				   dtgViewMatrixTask_6_1->Rows[rowNumbersWithNegative[i]]->Selected = true;

				   int sum = GetSumValueInRow(rowNumbersWithNegative[i]);
				   txtBxResultTask_6_1->Text += "Сумма элементов в строке " + (rowNumbersWithNegative[i] + 1) + " равна: " + sum + "\r\n";
			   }
		   }

		private: int GetSumValueInRow(int numberRow)
		{
			int sum = 0;

			for (int col = 0; col < countColMatrixTask_6_1; col++)
			{
				sum += matrixRundomValueTask_6_1[numberRow, col];
			}

			return sum;
		}

		private: System::Collections::Generic::List<int>^ GetNumRowWithNegativeValue()
		{
			System::Collections::Generic::List<int>^ rowNumbers = gcnew System::Collections::Generic::List<int>();

			for (int row = 0; row < countRowMatrixTask_6_1; row++)
			{
				for (int col = 0; col < countColMatrixTask_6_1; col++)
				{
					//снимаем дефолтное выделение ячейки
					dtgViewMatrixTask_6_1->Rows[row]->Cells[col]->Selected = false;

					if (matrixRundomValueTask_6_1[row, col] < 0)
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
			   if (!isFillMatrixTask_6_1())
				   return;

			   txtBxResultTask_6_1->Clear();
			   //снимаем все выделения ячеек
			   ClearSelectedDtgViewMatrixTask_6_1();

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

				for (int row = 0; row < countRowMatrixTask_6_1; row++)
				{
					//на каждой итерации строки очищается список
					evenValue->Clear();

					for (int col = 0; col < countColMatrixTask_6_1; col++)
					{
						if (matrixRundomValueTask_6_1[row, col] % 2 == 0)
						{
							//подсвкечиваем четные числа 
							dtgViewMatrixTask_6_1->Rows[row]->Cells[col]->Selected = true;
							evenValue->Add(matrixRundomValueTask_6_1[row, col]);
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

				for (int col = 0; col < countColMatrixTask_6_1; col++)
				{
					//на каждой итерации столбца очищается список
					evenValue->Clear();

					for (int row = 0; row < countRowMatrixTask_6_1; row++)
					{
						if (matrixRundomValueTask_6_1[row, col] % 2 == 0)
						{
							//подсвкечиваем четные числа 
							dtgViewMatrixTask_6_1->Rows[row]->Cells[col]->Selected = true;
							evenValue->Add(matrixRundomValueTask_6_1[row, col]);
						}
					}

					averagesCol->Add(GetAverage(evenValue));
				}

				return averagesCol;
			}

		private: void ClearSelectedDtgViewMatrixTask_6_1()
		{
			for (int row = 0; row < countRowMatrixTask_6_1; row++)
			{
				for (int col = 0; col < countColMatrixTask_6_1; col++)
				{
					//снимаем дефолтное выделение ячейки
					dtgViewMatrixTask_6_1->Rows[row]->Cells[col]->Selected = false;
				}
			}
		}

		#pragma endregion

		#pragma region Task_6_2
		   //заполнение матрицы
		   System::Void btnFillArrValueTask_6_2_Click(System::Object^ sender, System::EventArgs^ e)
		   {			   
			   //снимаем все выделения ячеек
			   ClearSelectedDtgViewMatrixTask_6_2();

			   Random^ rand = gcnew Random();

			   for (int row = 0; row < countRowMatrixTask_6_2; row++)
			   {
				   for (int col = 0; col < countColMatrixTask_6_2; col++)
				   {
					   matrixRundomValueTask_6_2[row, col] = rand->Next(int::MinValue, int::MaxValue);
				   }
			   }

			   for (int row = 0; row < countRowMatrixTask_6_2; row++)
			   {
				   for (int col = 0; col < countColMatrixTask_6_2; col++)
				   {
					   //заполняем датагрид
					   dtgViewMatrixTask_6_2[col, row]->Value = matrixRundomValueTask_6_2[row, col];
					   //нумеруем строки
					   dtgViewMatrixTask_6_2->Rows[row]->HeaderCell->Value = String::Format("{0}", dtgViewMatrixTask_6_2->Rows[row]->Index + 1);
					   //нумеруем столбцы
					   dtgViewMatrixTask_6_2->Columns[col]->HeaderCell->Value = String::Format("{0}", dtgViewMatrixTask_6_2->Columns[col]->Index + 1);
				   }
			   }
		   }

		   System::Void btnCountPrimeValueTask_6_2_Click(System::Object^ sender, System::EventArgs^ e) 
		   {
			   if (!isFillMatrixTask_6_2())
				   return;

			   ClearSelectedDtgViewMatrixTask_6_2();

			   int countPrimeValue = 0;

			   for (int row = 0; row < countRowMatrixTask_6_2; row++)
			   {
				   for (int col = 0; col < countColMatrixTask_6_2; col++)
				   {
					   if (isPrime(matrixRundomValueTask_6_2[row, col]))
					   {		
						   //выдеояфем ячейку
						   dtgViewMatrixTask_6_2->Rows[row]->Cells[col]->Selected = true;
						   countPrimeValue++;
					   }
				   }
			   }

			   txtBxResultTask_6_2->Clear();
			   txtBxResultTask_6_2->Text = "Количество элементов матрицы, содержащих простые числа равно: " + countPrimeValue;
		   }

		   //проверка, что матрица заполнена
		   Boolean isFillMatrixTask_6_2()
		   {
			   for (int row = 0; row < countRowMatrixTask_6_2; row++)
			   {
				   for (int col = 0; col < countColMatrixTask_6_2; col++)
				   {
					   if (matrixRundomValueTask_6_2[row, col] != 0)
					   {
						   return true;
					   }

				   }
			   }

			   MessageBox::Show("Необходимо заполнить матрицу", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   return false;
		   }

		   //является ли число простым
		   private: Boolean isPrime(int value) 
		   {
			   for (int i = 2; i <= value / 2; i++)
			   {
			      if (value % i == 0)
				  {
					  return false;					
			      }
			   }

			   return true;
		   }

		   //снимаем выделение ячеек
		   private: void ClearSelectedDtgViewMatrixTask_6_2()
		   {
			   for (int row = 0; row < countRowMatrixTask_6_2; row++)
			   {
				    for (int col = 0; col < countColMatrixTask_6_2; col++)
					{
						//снимаем дефолтное выделение ячейки
						dtgViewMatrixTask_6_2->Rows[row]->Cells[col]->Selected = false;
					}
			   }
		   }

			System::Void btnMaxMainSideDiagonalTask_6_2_Click(System::Object^ sender, System::EventArgs^ e)
			{
				if (!isFillMatrixTask_6_2())
					return;

				ClearSelectedDtgViewMatrixTask_6_2();
				txtBxResultTask_6_2->Clear();

				//получаем элементы главной диагонали
				System::Collections::Generic::List<int>^ valuesMainDiagonal = GetValueMainDiagonal();
				//сортируем по возрастнаию, для получения максимального элементов
				valuesMainDiagonal->Sort();
				txtBxResultTask_6_2->Text += "Максимальный элемент главной диагонали матрицы равен : " + valuesMainDiagonal[valuesMainDiagonal->Count - 1] + "\r\n";

				//получаем элементы побочной диагонали
				System::Collections::Generic::List<int>^ valuesSaidDiagonal = GetValueSaidDiagonal();
				//сортируем по возрастнаию, для получения максимального элементов
				valuesSaidDiagonal->Sort();
				txtBxResultTask_6_2->Text += "Максимальный элемент побочной диагонали матрицы равен : " + valuesSaidDiagonal[valuesSaidDiagonal->Count - 1] + "\r\n";
			}

			//получить элементы главной диагонали
			private: System::Collections::Generic::List<int>^ GetValueMainDiagonal() 
			{
				System::Collections::Generic::List<int>^ valuesMainDiagonal = gcnew System::Collections::Generic::List<int>();
				
				//i - индекс строки и столбца, индексы в диагонали равны
				for (int i = 0; i < countColMatrixTask_6_2; i++)
				{
					dtgViewMatrixTask_6_2->Rows[i]->Cells[i]->Selected = true;
					valuesMainDiagonal->Add(matrixRundomValueTask_6_2[i, i]);
				}				

				return valuesMainDiagonal;
			}

			//получить элементы побочной диагонали
			private: System::Collections::Generic::List<int>^ GetValueSaidDiagonal()
			{
				System::Collections::Generic::List<int>^ valuesSaidDiagonal = gcnew System::Collections::Generic::List<int>();

				//i - индекс строки и столбца, индексы в диагонали равны
				for (int col = countColMatrixTask_6_2 - 1, row = 0; col >= 0; col--, row++)
				{
					dtgViewMatrixTask_6_2->Rows[row]->Cells[col]->Selected = true;
					valuesSaidDiagonal->Add(matrixRundomValueTask_6_2[row, col]);
				}

				return valuesSaidDiagonal;
			}

			System::Void btnAverageQuadraticTask_6_2_Click(System::Object^ sender, System::EventArgs^ e) 
			{
				if (!isFillMatrixTask_6_2())
					return;

				ClearSelectedDtgViewMatrixTask_6_2();
				txtBxResultTask_6_2->Clear();

				System::Collections::Generic::List<double>^ averagesQuaraticEvenCol = BubbleSort(GetAverageEvenCol());
				System::Collections::Generic::List<double>^ averagesQuaraticNotEvenRow = BubbleSort(GetAverageNotEvenRow());

				txtBxResultTask_6_2->Text += "Средние квадратичные значения четных столбцов матрицы, отсортированные по возрастнаю: \r\n";

				for (int i = 0; i < averagesQuaraticEvenCol->Count; i++)
				{
					txtBxResultTask_6_2->Text += Math::Round(averagesQuaraticEvenCol[i], 2) + "\r\n";
				}

				txtBxResultTask_6_2->Text += "\r\nСредние квадратичные значения нечетных строк матрицы, отсортированные по возрастнаю: \r\n";

				for (int i = 0; i < averagesQuaraticNotEvenRow->Count; i++)
				{
					txtBxResultTask_6_2->Text += Math::Round(averagesQuaraticNotEvenRow[i], 2) + "\r\n";
				}
			}

			private: System::Collections::Generic::List<double>^ GetAverageEvenCol()
			{
				System::Collections::Generic::List<double>^ averageValues = gcnew System::Collections::Generic::List<double>();
				
				for (int col = 1; col < countColMatrixTask_6_2; col=col+2)
				{
					double sumPowEvenCol = 0;
					//количество элементов равно количеству строк
					int countValue = 12;

					for (int row = 0; row < countRowMatrixTask_6_2; row++)
					{
						//выделяем ячейки
						dtgViewMatrixTask_6_2->Rows[row]->Cells[col]->Selected = true;
						//сумма квадратов элементов четных столбцов
						sumPowEvenCol += Math::Pow(matrixRundomValueTask_6_2[row, col], 2);						
					}

					averageValues->Add(Math::Sqrt(sumPowEvenCol / countValue));
				}			

				return averageValues;
			}

			private: System::Collections::Generic::List<double>^ GetAverageNotEvenRow()
			{
				System::Collections::Generic::List<double>^ averageValues = gcnew System::Collections::Generic::List<double>();

				for (int row = 0; row < countColMatrixTask_6_2; row = row + 2)
				{
					double sumPowNotEvenRow = 0;
					//количество элементов равно количеству строк
					int countValue = 12;

					for (int col = 0; col < countColMatrixTask_6_2; col++)
					{
						//выделяем ячейки
						dtgViewMatrixTask_6_2->Rows[row]->Cells[col]->Selected = true;
						//сумма квадратов элементов четных столбцов
						sumPowNotEvenRow += Math::Pow(matrixRundomValueTask_6_2[row, col], 2);
					}

					averageValues->Add(Math::Sqrt(sumPowNotEvenRow / countValue));
				}

				return averageValues;
			}

			private: System::Collections::Generic::List<double>^ BubbleSort(System::Collections::Generic::List<double>^ values) 
			{
				for (int i = 0; i < values->Count; i++)
				{
					for (int j = 0; j < values->Count - 1; j++)
					{
						if (values[j] > values[j + 1])
						{
							int temp = values[j];
							values[j] = values[j + 1];
							values[j + 1] = temp;
						}
					}
				}

				return values;
			}
		  
		#pragma endregion
	};
}

