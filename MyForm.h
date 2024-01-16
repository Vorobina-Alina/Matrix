#pragma once

namespace Matrix {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxRows;
	private: System::Windows::Forms::TextBox^ textBoxColumn;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridViewResult;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxRows = (gcnew System::Windows::Forms::TextBox());
			this->textBoxColumn = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewResult = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewResult))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label1->Location = System::Drawing::Point(13, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Matrix A:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label2->Location = System::Drawing::Point(9, 298);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Rows:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label3->Location = System::Drawing::Point(96, 297);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Columns:";
			// 
			// textBoxRows
			// 
			this->textBoxRows->Location = System::Drawing::Point(54, 296);
			this->textBoxRows->Name = L"textBoxRows";
			this->textBoxRows->Size = System::Drawing::Size(36, 20);
			this->textBoxRows->TabIndex = 5;
			// 
			// textBoxColumn
			// 
			this->textBoxColumn->Location = System::Drawing::Point(163, 296);
			this->textBoxColumn->Name = L"textBoxColumn";
			this->textBoxColumn->Size = System::Drawing::Size(36, 20);
			this->textBoxColumn->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->Location = System::Drawing::Point(54, 324);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 32);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Create";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(266, 45);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(208, 196);
			this->dataGridView2->TabIndex = 9;
			// 
			// dataGridViewResult
			// 
			this->dataGridViewResult->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridViewResult->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewResult->Location = System::Drawing::Point(512, 45);
			this->dataGridViewResult->Name = L"dataGridViewResult";
			this->dataGridViewResult->Size = System::Drawing::Size(214, 193);
			this->dataGridViewResult->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label4->Location = System::Drawing::Point(262, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 23);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Matrix B:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label5->Location = System::Drawing::Point(508, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 23);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Result:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label6->Location = System::Drawing::Point(263, 296);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Rows:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(306, 295);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(36, 20);
			this->textBox1->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label7->Location = System::Drawing::Point(348, 297);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Columns:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(412, 295);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(36, 20);
			this->textBox2->TabIndex = 16;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->button2->Location = System::Drawing::Point(306, 324);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 32);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Create";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->button3->Location = System::Drawing::Point(490, 294);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 29);
			this->button3->TabIndex = 18;
			this->button3->Text = L"A+B";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->button4->Location = System::Drawing::Point(490, 327);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 30);
			this->button4->TabIndex = 19;
			this->button4->Text = L"A-B";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->button5->Location = System::Drawing::Point(577, 329);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 28);
			this->button5->TabIndex = 20;
			this->button5->Text = L"A*B";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->button6->Location = System::Drawing::Point(577, 294);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(81, 29);
			this->button6->TabIndex = 21;
			this->button6->Text = L"A*x";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label8->Location = System::Drawing::Point(664, 296);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 23);
			this->label8->TabIndex = 22;
			this->label8->Text = L"X:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(695, 298);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(42, 20);
			this->textBox3->TabIndex = 23;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(664, 331);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(49, 23);
			this->linkLabel1->TabIndex = 24;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Help";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 45);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(208, 193);
			this->dataGridView1->TabIndex = 25;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(760, 379);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridViewResult);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxColumn);
			this->Controls->Add(this->textBoxRows);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Matrix Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewResult))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	}
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = System::Convert::ToInt32(textBoxRows->Text);
		int columns = System::Convert::ToInt32(textBoxColumn->Text);
		dataGridView1->RowCount = rows;
		dataGridView1->ColumnCount = columns;
	}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int rows2 = System::Convert::ToInt32(textBox1->Text);
	int columns2 = System::Convert::ToInt32(textBox2->Text);
	dataGridView2->RowCount = rows2;
	dataGridView2->ColumnCount = columns2;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->RowCount != dataGridView2->RowCount || dataGridView1->ColumnCount != dataGridView2->ColumnCount) {
		MessageBox::Show(this, "Ошибка! Матрицы должны быть одной размерности!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		dataGridViewResult->RowCount = dataGridView1->RowCount;
		dataGridViewResult->ColumnCount = dataGridView1->ColumnCount;
		for (int i = 0; i < dataGridViewResult->RowCount; i++) {
			for (int j = 0; j < dataGridViewResult->ColumnCount; j++) {
				int value1 = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				int value2 = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
				dataGridViewResult->Rows[i]->Cells[j]->Value = value1 + value2;
			}
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->RowCount != dataGridView2->RowCount || dataGridView1->ColumnCount != dataGridView2->ColumnCount) {
		MessageBox::Show(this, "Ошибка! Матрицы должны быть одной размерности!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		dataGridViewResult->RowCount = dataGridView1->RowCount;
		dataGridViewResult->ColumnCount = dataGridView1->ColumnCount;
		for (int i = 0; i < dataGridViewResult->RowCount; i++) {
			for (int j = 0; j < dataGridViewResult->ColumnCount; j++) {
				int value1 = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				int value2 = Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
				dataGridViewResult->Rows[i]->Cells[j]->Value = value1 - value2;
			}
		}
	}
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int number = System::Convert::ToInt32(textBox3->Text);
	dataGridViewResult->RowCount = dataGridView1->RowCount;
	dataGridViewResult->ColumnCount = dataGridView1->ColumnCount;
	for (int i = 0; i < dataGridViewResult->RowCount; i++) {
		for (int j = 0; j < dataGridViewResult->ColumnCount; j++) {
			int value1 = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			dataGridViewResult->Rows[i]->Cells[j]->Value = value1 * number;
		}
	}
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->ColumnCount != dataGridView2->RowCount) {
		MessageBox::Show(this, "Ошибка! Количество столбцов первой матрицы должно быть равно количеству строк второй матрицы!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		dataGridViewResult->RowCount = dataGridView1->RowCount;
		dataGridViewResult->ColumnCount = dataGridView2->ColumnCount;
		for (int i = 0; i < dataGridView1->RowCount; i++) {
			for (int j = 0; j < dataGridView2->ColumnCount; j++) {
				int sum = 0;
				for (int k = 0; k < dataGridView2->ColumnCount; k++) {
					int value1 = Convert::ToInt32(dataGridView1->Rows[i]->Cells[k]->Value);
					int value2 = Convert::ToInt32(dataGridView2->Rows[k]->Cells[j]->Value);
					sum += value1 * value2;
				}
				dataGridViewResult->Rows[i]->Cells[j]->Value = sum;
			}
		}
	}
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	MessageBox::Show(this, "Матричный калькулятор предназначен для выполнения операций с матрицами, такими как сложение, вычитание, умножение и умножение на число.\n1. Ввод размерностей матриц: \n - Пользователь может ввести размерности матриц, например, 2x2 или 3x3, чтобы определить количество строк и столбцов в матрице.\n2. Ввод значений матриц: \n - Пользователь может ввести значения элементов матрицы в соответствии с её размерностью.\n3. Сложение матриц: \n - Калькулятор может выполнить операцию сложения двух матриц с одинаковыми размерностями. Сумма элементов каждой пары соответствующих элементов в матрицах является элементом результирующей матрицы.\n4. Вычитание матриц: \n - Калькулятор может выполнить операцию вычитания одной матрицы из другой с одинаковыми размерностями. Разность элементов каждой пары соответствующих элементов в матрицах является элементом результирующей матрицы.\n 5. Перемножение матриц: \n - - Калькулятор может выполнить операцию перемножения двух матриц, в которых количество столбцов первой матрицы равно количеству строк второй матрицы. Элементы результирующей матрицы вычисляются как сумма произведений элементов строки первой матрицы на соответствующие элементы столбца второй матрицы.\n6. Умножение матрицы на число: \n - Калькулятор может выполнить операцию умножения каждого элемента матрицы на заданное число, чтобы получить новую матрицу. \n С помощью матричного калькулятора пользователь может быстро и удобно выполнять различные операции с матрицами, что может быть полезно в образовательных и профессиональных целях. ", "Help", MessageBoxButtons::OK);
}
};
}
