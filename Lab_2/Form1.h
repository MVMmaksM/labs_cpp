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
			   //text_boxes
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_1;	
		private: System::Windows::Forms::TextBox^ txtBxInputXTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxYTask_6_1;
		private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6_2;
		private: System::Windows::Forms::TextBox^ txtBxResultTask_6_2;
			   //buttons
		private: System::Windows::Forms::Button^ btnGetValueFuncTask_6_1;	
		private: System::Windows::Forms::Button^ btnFillArrValueTask_6_2;
		private: System::Windows::Forms::Button^ btnCountPrimeValueTask_6_2;
		private: System::Windows::Forms::Button^ btnMaxMainSideDiagonalTask_6_2;
		private: System::Windows::Forms::Button^ btnAverageQuadraticTask_6_2;	
			   //pictureBox
		private: PictureBox^ pctBoxTask_6_1;
			   //labels
		private: System::Windows::Forms::Label^ labelInputXTask_6_1;
		private: System::Windows::Forms::Label^ labelYTask_6_1;

		protected:

		protected:

		private: System::ComponentModel::Container^ components;

		#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {			  
			   this->pctBoxTask_6_1 = (gcnew PictureBox());
			   this->pctBoxTask_6_1->SuspendLayout();
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
			   //text_boxes
			   this->txtBxDescriptionTask_6_1 = (gcnew System::Windows::Forms::TextBox());			
			   this->txtBxInputXTask_6_1 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxYTask_6_1 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxDescriptionTask_6_2 = (gcnew System::Windows::Forms::TextBox());
			   this->txtBxResultTask_6_2 = (gcnew System::Windows::Forms::TextBox());
			   //buttons
			   this->btnGetValueFuncTask_6_1 = (gcnew System::Windows::Forms::Button());
			   this->btnFillArrValueTask_6_2 = (gcnew System::Windows::Forms::Button());
			   this->btnCountPrimeValueTask_6_2 = (gcnew System::Windows::Forms::Button());
			   this->btnMaxMainSideDiagonalTask_6_2 = (gcnew System::Windows::Forms::Button());
			   this->btnAverageQuadraticTask_6_2 = (gcnew System::Windows::Forms::Button());
			   //labels
			   this->labelInputXTask_6_1 = (gcnew System::Windows::Forms::Label());
			   this->labelYTask_6_1 = (gcnew System::Windows::Forms::Label());

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
			   this->tabPageTask_6_1->Text = L"Task_6.1";
			   this->tabPageTask_6_1->UseVisualStyleBackColor = true;
			   // groupBoxSolutionTask_6_1	
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->btnGetValueFuncTask_6_1);
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->labelInputXTask_6_1);
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->labelYTask_6_1);
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->txtBxInputXTask_6_1);
			   this->groupBoxSolutionTask_6_1->Controls->Add(this->txtBxYTask_6_1);
			   this->groupBoxSolutionTask_6_1->Location = System::Drawing::Point(8, 310);
			   this->groupBoxSolutionTask_6_1->Name = L"groupBox2";
			   this->groupBoxSolutionTask_6_1->Size = System::Drawing::Size(1330, 140);
			   this->groupBoxSolutionTask_6_1->TabIndex = 1;
			   this->groupBoxSolutionTask_6_1->TabStop = false;
			   this->groupBoxSolutionTask_6_1->Text = L"Решение";
			   // labelInputXTask_6_1				
			   this->labelInputXTask_6_1->AutoSize = true;
			   this->labelInputXTask_6_1->Location = System::Drawing::Point(6, 20);
			   this->labelInputXTask_6_1->Name = L"labelInputXTask_6_1";
			   this->labelInputXTask_6_1->Size = System::Drawing::Size(172, 13);
			   this->labelInputXTask_6_1->TabIndex = 0;
			   this->labelInputXTask_6_1->Text = L"Введите значение X";
			   // labelYTask_6_1				
			   this->labelYTask_6_1->AutoSize = true;
			   this->labelYTask_6_1->Location = System::Drawing::Point(320, 20);
			   this->labelYTask_6_1->Name = L"labelYTask_6_1";
			   this->labelYTask_6_1->Size = System::Drawing::Size(172, 13);
			   this->labelYTask_6_1->TabIndex = 0;
			   this->labelYTask_6_1->Text = L"Значение функции Y равно";
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
			   this->groupBoxDescriptionTask_6_1->Size = System::Drawing::Size(600, 300);
			   this->groupBoxDescriptionTask_6_1->TabIndex = 0;
			   this->groupBoxDescriptionTask_6_1->TabStop = false;
			   this->groupBoxDescriptionTask_6_1->Text = L"Описание задачи";
			   //pctBoxTask_6_1
			   this->pctBoxTask_6_1->Image = Image::FromFile(System::IO::Path::Combine(Environment::CurrentDirectory, "Task_6_1.jpg"));
			   this->pctBoxTask_6_1->Location= System::Drawing::Point(5, 50);
			   this->pctBoxTask_6_1->Size = System::Drawing::Size(1000, 300);
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
			   this->tabPageTask_6_2->Text = L"Task_6.2";
			   this->tabPageTask_6_2->UseVisualStyleBackColor = true;
			   //tabPageTask_6_3				 
			   this->tabPageTask_6_3->Location = System::Drawing::Point(4, 22);
			   this->tabPageTask_6_3->Name = L"tabPageTask_6_3";
			   this->tabPageTask_6_3->Padding = System::Windows::Forms::Padding(3);
			   this->tabPageTask_6_3->Size = System::Drawing::Size(840, 442);
			   this->tabPageTask_6_3->TabIndex = 1;
			   this->tabPageTask_6_3->Text = L"Task_6.3";
			   this->tabPageTask_6_3->UseVisualStyleBackColor = true;
			   // groupBoxSolutionTask_6_2				 
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->txtBxResultTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->btnFillArrValueTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->btnCountPrimeValueTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->btnMaxMainSideDiagonalTask_6_2);
			   this->groupBoxSolutionTask_6_2->Controls->Add(this->btnAverageQuadraticTask_6_2);
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
			   //this->btnFillArrValueTask_6_2->Click += gcnew System::EventHandler(this, &Form1::btnFillArrValueTask_6_2_Click);
			   // btnCountPrimeValueTask_6_2				
			   this->btnCountPrimeValueTask_6_2->Location = System::Drawing::Point(5, 45);
			   this->btnCountPrimeValueTask_6_2->Name = L"btnCountPrimeValueTask_6_2";
			   this->btnCountPrimeValueTask_6_2->Size = System::Drawing::Size(229, 50);
			   this->btnCountPrimeValueTask_6_2->TabIndex = 3;
			   this->btnCountPrimeValueTask_6_2->Text = L"Найти количество элементов матрицы содержащих простые числа";
			   this->btnCountPrimeValueTask_6_2->UseVisualStyleBackColor = true;
			   //this->btnCountPrimeValueTask_6_2->Click += gcnew System::EventHandler(this, &Form1::btnCountPrimeValueTask_6_2_Click);
			   // btnMaxMainSideDiagonalTask_6_2				
			   this->btnMaxMainSideDiagonalTask_6_2->Location = System::Drawing::Point(240, 15);
			   this->btnMaxMainSideDiagonalTask_6_2->Name = L"btnMaxMainSideDiagonalTask_6_2";
			   this->btnMaxMainSideDiagonalTask_6_2->Size = System::Drawing::Size(229, 50);
			   this->btnMaxMainSideDiagonalTask_6_2->TabIndex = 3;
			   this->btnMaxMainSideDiagonalTask_6_2->Text = L"Найти максимум среди элементов главной и побочной диагоналей матрицы";
			   this->btnMaxMainSideDiagonalTask_6_2->UseVisualStyleBackColor = true;
			   //this->btnMaxMainSideDiagonalTask_6_2->Click += gcnew System::EventHandler(this, &Form1::btnMaxMainSideDiagonalTask_6_2_Click);
			   // btnAverageQuadraticTask_6_2				
			   this->btnAverageQuadraticTask_6_2->Location = System::Drawing::Point(475, 15);
			   this->btnAverageQuadraticTask_6_2->Name = L"btnAverageQuadraticTask_6_2";
			   this->btnAverageQuadraticTask_6_2->Size = System::Drawing::Size(229, 50);
			   this->btnAverageQuadraticTask_6_2->TabIndex = 3;
			   this->btnAverageQuadraticTask_6_2->Text = L"Найти средние квадратичные значения четных столбцов нечентных строек матрицы";
			   this->btnAverageQuadraticTask_6_2->UseVisualStyleBackColor = true;
			  // this->btnAverageQuadraticTask_6_2->Click += gcnew System::EventHandler(this, &Form1::btnAverageQuadraticTask_6_2_Click);
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

			   if (x < -5 || x == -4 || (x >= -2 && x <= - 1) || x == 1 || x == 3 || x > 4) 
			   {
				   txtBxYTask_6_1->Text = Convert::ToString(0);
			   }
			   else if(x == -5)
			   {
				   txtBxYTask_6_1->Text = Convert::ToString(-2);
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
	};
}

