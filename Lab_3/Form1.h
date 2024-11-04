#pragma once

namespace CppCLRWinFormsProject {

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

			//GroupBoxes
			private: System::Windows::Forms::GroupBox^ groupBoxDescriptionTask_6;
			private: System::Windows::Forms::GroupBox^ groupBoxSolutionTask_6;
			//TextBoxes
			private: System::Windows::Forms::TextBox^ txtBxDescriptionTask_6;
			private: System::Windows::Forms::TextBox^ txtBxResultTask_6;
			private: System::Windows::Forms::TextBox^ txtBxCountArray_6;
			//Buttons
			private: System::Windows::Forms::Button^ btnCreateRandomValueArrayTask_6;
			private: System::Windows::Forms::Button^ btnGetMinValueArrayTask_6;
			private: System::Windows::Forms::Button^ btnGetSumPositiveValueArrayTask_6;	
			private: System::Windows::Forms::Button^ btnGetCountNegativeValueArrayTask_6;
			private: System::Windows::Forms::Button^ btnGetSumAbsValueArrayTask_6;
			private: System::Windows::Forms::Button^ btnSortZeroValueArrayTask_6;
			//labes
			private: System::Windows::Forms::Label^ labelCountArrayTask_6;
			//array
			private: array<int>^ arrayRundom;		

			protected:

			protected:

			private:			
				System::ComponentModel::Container ^components;

	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void)
			{			
				//GroupBoxes
				this->groupBoxDescriptionTask_6 = (gcnew System::Windows::Forms::GroupBox());
				this->groupBoxDescriptionTask_6->SuspendLayout();
				this->groupBoxSolutionTask_6 = (gcnew System::Windows::Forms::GroupBox());
				this->groupBoxSolutionTask_6->SuspendLayout();
				//TextBoxes
				this->txtBxDescriptionTask_6 = (gcnew System::Windows::Forms::TextBox());
				this->txtBxResultTask_6 = (gcnew System::Windows::Forms::TextBox());
				this->txtBxCountArray_6 = (gcnew System::Windows::Forms::TextBox());
				//Buttons
				this->btnCreateRandomValueArrayTask_6 = (gcnew System::Windows::Forms::Button());
				this->btnGetMinValueArrayTask_6 = (gcnew System::Windows::Forms::Button());
				this->btnGetSumPositiveValueArrayTask_6 = (gcnew System::Windows::Forms::Button());
				this->btnGetCountNegativeValueArrayTask_6 = (gcnew System::Windows::Forms::Button());
				this->btnGetSumAbsValueArrayTask_6 = (gcnew System::Windows::Forms::Button());
				this->btnSortZeroValueArrayTask_6 = (gcnew System::Windows::Forms::Button());
				//Labels
				this->labelCountArrayTask_6 = (gcnew System::Windows::Forms::Label());

				this->SuspendLayout();
				// 
				// groupBoxDescription
				// 
				this->groupBoxDescriptionTask_6->Controls->Add(this->txtBxDescriptionTask_6);
				this->groupBoxDescriptionTask_6->Location = System::Drawing::Point(12, 12);
				this->groupBoxDescriptionTask_6->Name = L"groupBoxDescriptionTask_6";
				this->groupBoxDescriptionTask_6->Size = System::Drawing::Size(849, 120);
				this->groupBoxDescriptionTask_6->TabIndex = 0;
				this->groupBoxDescriptionTask_6->TabStop = false;
				this->groupBoxDescriptionTask_6->Text = L"Задача";
				//groupBoxSolutionTask_6
				this->groupBoxSolutionTask_6->Controls->Add(this->txtBxCountArray_6);
				this->groupBoxSolutionTask_6->Controls->Add(this->txtBxResultTask_6);
				this->groupBoxSolutionTask_6->Controls->Add(this->btnCreateRandomValueArrayTask_6);
				this->groupBoxSolutionTask_6->Controls->Add(this->btnGetMinValueArrayTask_6);
				this->groupBoxSolutionTask_6->Controls->Add(this->btnGetSumPositiveValueArrayTask_6);
				this->groupBoxSolutionTask_6->Controls->Add(this->btnGetCountNegativeValueArrayTask_6);
				this->groupBoxSolutionTask_6->Controls->Add(this->btnGetSumAbsValueArrayTask_6);
				this->groupBoxSolutionTask_6->Controls->Add(this->btnSortZeroValueArrayTask_6);
				this->groupBoxSolutionTask_6->Controls->Add(this->labelCountArrayTask_6);
				this->groupBoxSolutionTask_6->Location = System::Drawing::Point(12, 130);
				this->groupBoxSolutionTask_6->Name = L"groupBoxSolutionTask_6";
				this->groupBoxSolutionTask_6->Size = System::Drawing::Size(849, 300);
				this->groupBoxSolutionTask_6->TabIndex = 0;
				this->groupBoxSolutionTask_6->TabStop = false;
				this->groupBoxSolutionTask_6->Text = L"Решение";
				//label
				this->labelCountArrayTask_6->AutoSize = true;
				this->labelCountArrayTask_6->Location = System::Drawing::Point(6, 18);
				this->labelCountArrayTask_6->Name = L"label1";
				this->labelCountArrayTask_6->Size = System::Drawing::Size(172, 13);
				this->labelCountArrayTask_6->TabIndex = 0;
				this->labelCountArrayTask_6->Text = L"Введите количество элементов массива";
				//btnCreateRandomValueArray
				this->btnCreateRandomValueArrayTask_6->Location = System::Drawing::Point(230, 34);
				this->btnCreateRandomValueArrayTask_6->Name = L"btnCreateRandomValueArray";
				this->btnCreateRandomValueArrayTask_6->Size = System::Drawing::Size(229, 23);
				this->btnCreateRandomValueArrayTask_6->TabIndex = 3;
				this->btnCreateRandomValueArrayTask_6->Text = L"Заполнить массив случайными числами";
				this->btnCreateRandomValueArrayTask_6->UseVisualStyleBackColor = true;
				this->btnCreateRandomValueArrayTask_6->Click += gcnew System::EventHandler(this, &Form1::btnCreateRandomValueArrayTask_6_Click);
				//btnGetMinValueArrayTask_6
				this->btnGetMinValueArrayTask_6->Location = System::Drawing::Point(470, 34);
				this->btnGetMinValueArrayTask_6->Name = L"btnGetMinValueArrayTask_6";
				this->btnGetMinValueArrayTask_6->Size = System::Drawing::Size(229, 23);
				this->btnGetMinValueArrayTask_6->TabIndex = 3;
				this->btnGetMinValueArrayTask_6->Text = L"Найти минимальный элемент в массиве";
				this->btnGetMinValueArrayTask_6->UseVisualStyleBackColor = true;
				this->btnGetMinValueArrayTask_6->Click += gcnew System::EventHandler(this, &Form1::btnGetMinValueArrayTask_6_Click);
				//btnGetSumPositiveValueArrayTask_6
				this->btnGetSumPositiveValueArrayTask_6->Location = System::Drawing::Point(5, 60);
				this->btnGetSumPositiveValueArrayTask_6->Name = L"btnGetSumPositiveValueArrayTask_6";
				this->btnGetSumPositiveValueArrayTask_6->Size = System::Drawing::Size(212, 60);
				this->btnGetSumPositiveValueArrayTask_6->TabIndex = 3;
				this->btnGetSumPositiveValueArrayTask_6->Text = L"Найти сумму элементов массива, расположенных между первым и последним положительными элементами";
				this->btnGetSumPositiveValueArrayTask_6->UseVisualStyleBackColor = true;
				this->btnGetSumPositiveValueArrayTask_6->Click += gcnew System::EventHandler(this, &Form1::btnGetSumPositiveValueArrayTask_6_Click);
				//btnGetCountNegativeValueArrayTask_6
				this->btnGetCountNegativeValueArrayTask_6->Location = System::Drawing::Point(230, 60);
				this->btnGetCountNegativeValueArrayTask_6->Name = L"btnGetCountNegativeValueArrayTask_6";
				this->btnGetCountNegativeValueArrayTask_6->Size = System::Drawing::Size(229, 60);
				this->btnGetCountNegativeValueArrayTask_6->TabIndex = 3;
				this->btnGetCountNegativeValueArrayTask_6->Text = L"Найти количество отрицательных элементов массива";
				this->btnGetCountNegativeValueArrayTask_6->UseVisualStyleBackColor = true;
				this->btnGetCountNegativeValueArrayTask_6->Click += gcnew System::EventHandler(this, &Form1::btnGetCountNegativeValueArrayTask_6_Click);
				//btnGetSumAbsValueArrayTask_6
				this->btnGetSumAbsValueArrayTask_6->Location = System::Drawing::Point(470, 60);
				this->btnGetSumAbsValueArrayTask_6->Name = L"btnGetSumAbsValueArrayTask_6";
				this->btnGetSumAbsValueArrayTask_6->Size = System::Drawing::Size(229, 60);
				this->btnGetSumAbsValueArrayTask_6->TabIndex = 3;
				this->btnGetSumAbsValueArrayTask_6->Text = L"Найти сумму модулей элементов массива, расположенных после " 
															+ "минимального по модулю элемента";
				this->btnGetSumAbsValueArrayTask_6->UseVisualStyleBackColor = true;
				this->btnGetSumAbsValueArrayTask_6->Click += gcnew System::EventHandler(this, &Form1::btnGetSumAbsValueArrayTask_6_Click);
				//btnSortZeroValueArrayTask_6
				this->btnSortZeroValueArrayTask_6->Location = System::Drawing::Point(708, 34);
				this->btnSortZeroValueArrayTask_6->Name = L"btnSortZeroValueArrayTask_6";
				this->btnSortZeroValueArrayTask_6->Size = System::Drawing::Size(135, 86);
				this->btnSortZeroValueArrayTask_6->TabIndex = 3;
				this->btnSortZeroValueArrayTask_6->Text = L"Преобразовать массив, чтобы сначала располагались все " 
															+ "элементы, равные нулю, а потом — все остальные";
				this->btnSortZeroValueArrayTask_6->UseVisualStyleBackColor = true;
				this->btnSortZeroValueArrayTask_6->Click += gcnew System::EventHandler(this, &Form1::btnSortZeroValueArrayTask_6_Click);				
				// txtBxDescriptionTask_6				
				this->txtBxDescriptionTask_6->AcceptsReturn = true;
				this->txtBxDescriptionTask_6->BorderStyle = System::Windows::Forms::BorderStyle::None;
				this->txtBxDescriptionTask_6->Cursor = System::Windows::Forms::Cursors::IBeam;
				this->txtBxDescriptionTask_6->Location = System::Drawing::Point(6, 19);
				this->txtBxDescriptionTask_6->Multiline = true;
				this->txtBxDescriptionTask_6->Name = L"textBox1";
				this->txtBxDescriptionTask_6->ReadOnly = true;
				this->txtBxDescriptionTask_6->Size = System::Drawing::Size(837, 90);
				this->txtBxDescriptionTask_6->TabIndex = 0;
				this->txtBxDescriptionTask_6->Text = L"В одномерном массиве, состоящем из п вещественных элементов, вычислить: "
													+ "\r\n1) минимальный элемент массива;"
													+ "\r\n2) сумму элементов массива, расположенных между первым и последним "
													+ "положительными элементами; "
													+ "\r\n3) количество отрицательных элементов массива; "
													+ "\r\n4)сумму модулей элементов массива, расположенных после "
													+ "минимального по модулю элемента. "
													+ "\r\n\r\nПреобразовать массив таким образом, чтобы сначала располагались все "
													+ "элементы, равные нулю, а потом — все остальные.";

				
				//txtBxCountArray_6
				this->txtBxCountArray_6->AcceptsReturn = true;
				this->txtBxCountArray_6->Cursor = System::Windows::Forms::Cursors::IBeam;
				this->txtBxCountArray_6->Location = System::Drawing::Point(6, 35);				
				this->txtBxCountArray_6->Name = L"txtBxCountArray_6";				
				this->txtBxCountArray_6->Size = System::Drawing::Size(210, 130);
				this->txtBxCountArray_6->TabIndex = 0;			
				//txtBxResultTask_6
				this->txtBxResultTask_6->AcceptsReturn = true;				
				this->txtBxResultTask_6->Cursor = System::Windows::Forms::Cursors::IBeam;
				this->txtBxResultTask_6->Location = System::Drawing::Point(6, 140);
				this->txtBxResultTask_6->Multiline = true;
				this->txtBxResultTask_6->Name = L"textBox1";
				this->txtBxResultTask_6->ReadOnly = true;
				this->txtBxResultTask_6->Size = System::Drawing::Size(837, 150);
				this->txtBxResultTask_6->TabIndex = 0;
				this->txtBxResultTask_6->ScrollBars = ScrollBars::Vertical;
				// 
				// Form1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(873, 448);
				this->Controls->Add(this->groupBoxDescriptionTask_6);
				this->Controls->Add(this->groupBoxSolutionTask_6);
				this->Name = L"Lab_3";
				this->Text = L"Лабораторная работа № 3";
				this->groupBoxDescriptionTask_6->ResumeLayout(false);
				this->groupBoxDescriptionTask_6->PerformLayout();
				this->groupBoxSolutionTask_6->ResumeLayout(false);
				this->groupBoxSolutionTask_6->PerformLayout();
				this->MaximumSize = System::Drawing::Size(873, 448);
				this->MinimumSize = System::Drawing::Size(873, 448);
				this->ResumeLayout(false);
			}
	#pragma endregion

			private: System::Void btnCreateRandomValueArrayTask_6_Click(System::Object^ sender, System::EventArgs^ e)
			{			
				if (!isValidateCountArray(txtBxCountArray_6->Text))
					return;

				txtBxResultTask_6->Clear();

				arrayRundom = gcnew array<int>(Convert::ToInt64(txtBxCountArray_6->Text));
				System::Random^ rand = gcnew System::Random();
				
				for (int i = 0; i < arrayRundom->Length; i++)
				{
					arrayRundom[i] = rand->Next(int::MinValue, int::MaxValue);
				}	

				PrintArray(arrayRundom);
			}	

			private: System::Boolean isValidateCountArray(String^ countArray) 
			{
				int resultParse;;

				if (String::IsNullOrWhiteSpace(countArray))
				{
					MessageBox::Show("Введите количество элеметов массива", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return false;
				}			

				if(!int::TryParse(countArray, resultParse))
				{
					MessageBox::Show("Количество должно быть целым числом", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return false;
				}	

				if (resultParse <= 0) 
				{
					MessageBox::Show("Количество не может быть отрицательным и равным 0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return false;
				}

				return true;
			}

			private: System::Void btnGetMinValueArrayTask_6_Click(System::Object^ sender, System::EventArgs^ e)
			{
				if (arrayRundom == nullptr) 
				{	
					MessageBox::Show("Необходимо заполнить массив", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}	

				txtBxResultTask_6->Clear();

				arrayRundom->Sort(arrayRundom);

				txtBxResultTask_6->Text = "Минимальный элемент массива " +  arrayRundom[0].ToString();
			}

			private: System::Void btnGetSumPositiveValueArrayTask_6_Click(System::Object^ sender, System::EventArgs^ e)
			{
				if (arrayRundom == nullptr)
				{
					MessageBox::Show("Необходимо заполнить массив", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				//найдем индексы первого и последнего положительного элемента в массиве
				int firstPositiveInd = 0;
				int lastPositiveInd = 0;
				int sum = 0;

				for (int i = 0; i < arrayRundom->Length; i++)
				{
					if (arrayRundom[i] > 0)
					{
						firstPositiveInd = i;
						break;
					}
				}

				for (int i = 0; i < arrayRundom->Length; i++)
				{
					if (arrayRundom[i] > 0)
						lastPositiveInd = i;
				}

				for (int i = firstPositiveInd + 1; i < lastPositiveInd; i++)
				{
					sum += arrayRundom[i];
				}

				if (arrayRundom->Length < 3)
				{
					txtBxResultTask_6->Text = "Для нахождения суммы в массиве должно быть хотя 3 элемента";
					return;
				}

				if (firstPositiveInd == 0 && lastPositiveInd == 0) 
				{
					txtBxResultTask_6->Text = "Нет данных для расчета";
					return;
				}					

				txtBxResultTask_6->Text = sum.ToString();
			}

			private: System::Void btnGetCountNegativeValueArrayTask_6_Click(System::Object^ sender, System::EventArgs^ e)
			{
				if (arrayRundom == nullptr)
				{
					MessageBox::Show("Необходимо заполнить массив", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				int countNegativeValue = 0;

				for (int i = 0; i < arrayRundom->Length; i++)
				{
					if (arrayRundom[i] < 0)
						countNegativeValue++;
				}

				txtBxResultTask_6->Text = "Количество отрицательных элементов в массиве " + countNegativeValue;
			}

			private: System::Void btnGetSumAbsValueArrayTask_6_Click(System::Object^ sender, System::EventArgs^ e)
			{
				if (arrayRundom == nullptr)
				{
					MessageBox::Show("Необходимо заполнить массив", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}		

				if (arrayRundom->Length < 2) 
				{
					MessageBox::Show("Для расчета необходимо хотя бы 2 элемента массива", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;				
				}

				array<int>^ absArray = gcnew array<int>(arrayRundom->Length);
				int minValueInd = -1;
				int sum = 0;				

				for (int  i = 0; i < arrayRundom->Length; i++)
				{
					absArray[i] = Math::Abs(arrayRundom[i]);
				}
				
				for (int i = 0; i < arrayRundom->Length; i++)
				{
					for (int j = i+1; j < arrayRundom -> Length; j++)
					{
						if (arrayRundom[i] < arrayRundom[j])
							minValueInd = i;
					}
				}
			
				for (int i = minValueInd + 1; i < arrayRundom->Length; i++)
				{
					sum += absArray[i];
				}


				txtBxResultTask_6->Text = "Сумма модулей элементов массива, расположенных после минимального по модулю элемента равна " + sum;
			}

			private: System::Void btnSortZeroValueArrayTask_6_Click(System::Object^ sender, System::EventArgs^ e)
			{
				if (arrayRundom == nullptr)
				{
					MessageBox::Show("Необходимо заполнить массив", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}				

				System::Collections::Generic::List<int>^ valuesFromArray = gcnew System::Collections::Generic::List<int>(arrayRundom);
				System::Predicate<int>^ zeroPredicate = gcnew System::Predicate<int>(this, &Form1::IsZero);
			
				int countZero = valuesFromArray->RemoveAll(zeroPredicate);

				if (countZero == 0)
				{
					MessageBox::Show("Нет нулевых элементов в массие", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				for (int i = 0; i < countZero; i++)
				{
					valuesFromArray->Insert(0, 0);
				}

				PrintArray(valuesFromArray->ToArray());
			}

			private: void PrintArray(array<int>^ array) 
			{
				txtBxResultTask_6->Clear();

				for (int i = 0; i < array->Length; i++)
				{
					i == array->Length - 1 ? txtBxResultTask_6->Text += array[i] : txtBxResultTask_6->Text += array[i] + ", ";
				}
			}

			private: System::Boolean IsZero(int x) 
			{
				return x == 0;
			}
	};
}
