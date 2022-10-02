#pragma once
#include <deque>
#include "Metods.h"
//#include <algorithm>
#include "GenAlgorithms.h"

namespace LabContSTL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Metod* metod = new Metod();
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;

		   GenAlgorithms* genalg = new GenAlgorithms();

	public:
		MyForm(void)
		{
			InitializeComponent();

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;




	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;



	private: System::Windows::Forms::ComboBox^ comboBox5;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;










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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Location = System::Drawing::Point(528, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(120, 323);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Состояние очереди";
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(6, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(108, 290);
			this->listBox1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(519, 323);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->comboBox5);
			this->tabPage1->Controls->Add(this->numericUpDown4);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->comboBox4);
			this->tabPage1->Controls->Add(this->comboBox3);
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(511, 297);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Лабораторная 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(350, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Вывод";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(291, 112);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 23;
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"показать", L"изменить" });
			this->comboBox5->Location = System::Drawing::Point(146, 230);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 21);
			this->comboBox5->TabIndex = 22;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(397, 112);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(69, 20);
			this->numericUpDown4->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(406, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Позиция";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(315, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Значение";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"по индексу [i]", L"по индексу at()", L"первый элемент",
					L"последний элемент"
			});
			this->comboBox4->Location = System::Drawing::Point(146, 182);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 9;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"замена N элем-ми", L"элем-ми другого списка" });
			this->comboBox3->Location = System::Drawing::Point(146, 134);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 8;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"все элементы", L"последний элемент", L"первый элемент",
					L"элемент по индексу"
			});
			this->comboBox2->Location = System::Drawing::Point(146, 87);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 7;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"в конец очереди", L"в начало очереди", L"по индексу" });
			this->comboBox1->Location = System::Drawing::Point(146, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(318, 162);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(119, 20);
			this->textBox1->TabIndex = 5;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(21, 229);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Размер очереди";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(21, 181);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Получить элемент";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(21, 133);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Заменить элемент";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(21, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Удалить элемент";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Добавить элемент";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Controls->Add(this->checkedListBox1);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(511, 297);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Лабораторная 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(274, 82);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(294, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Вхождение";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(294, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Значение";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(274, 36);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(395, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Результат операции";
			// 
			// listBox2
			// 
			this->listBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(397, 20);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(108, 225);
			this->listBox2->TabIndex = 3;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Поиск по параметрам (сount)", L"Перебор элементов (for_each)",
					L"Поиск по значению (find)", L"Копирование очереди (copy)", L"Присвоить заданное значение (fill)", L"Удаление элем. по уловию (remove)",
					L"Замена элементов по условию (replace)", L"Обратный порядок (reverse)", L"Удаление повторяющихся элементов (unique)", L"Сортировка (sort)"
			});
			this->checkedListBox1->Location = System::Drawing::Point(6, 6);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(262, 274);
			this->checkedListBox1->TabIndex = 2;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(416, 264);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(71, 23);
			this->button6->TabIndex = 1;
			this->button6->Text = L"OK";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(653, 328);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->groupBox1);
			this->MinimumSize = System::Drawing::Size(669, 367);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Двусторонняя очередь Deque";
			this->groupBox1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		listBox1->Items->Clear();

		int sel = comboBox1->SelectedIndex;

		metod->addItem(metod->numbers, textBox3->Text, numericUpDown4->Text, sel);

		for (int i = 0; i < metod->numbers.size(); i++)
		{
			listBox1->Items->Add(Convert::ToString(metod->numbers.at(i)));
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		listBox1->Items->Clear();

		int sel = comboBox2->SelectedIndex;

		metod->removingItem(metod->numbers, numericUpDown4->Text, sel);

		for (int i = 0; i < metod->numbers.size(); i++)
		{
			listBox1->Items->Add(Convert::ToString(metod->numbers.at(i)));
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		listBox1->Items->Clear();

		int sel = comboBox3->SelectedIndex;

		metod->values = { 6.3, 7.5, 8.1, 9.8, 10.3, 11.7 };

		metod->changingAnItem(metod->numbers, metod->values, textBox3->Text, numericUpDown4->Text, sel);

		for (int i = 0; i < metod->numbers.size(); i++)
		{
			listBox1->Items->Add(Convert::ToString(metod->numbers.at(i)));
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		int sel = comboBox4->SelectedIndex;

		double dat = metod->retrievingItem(metod->numbers, numericUpDown4->Text, sel);

		textBox1->Text = Convert::ToString(dat);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		int sel = comboBox5->SelectedIndex;

		double dat = metod->queueSize(metod->numbers, numericUpDown4->Text, sel);

		textBox1->Text = Convert::ToString(dat);

		if (sel > 0)
		{
			listBox1->Items->Clear();
			for (int i = 0; i < metod->numbers.size(); i++)
			{
				listBox1->Items->Add(Convert::ToString(metod->numbers.at(i)));
			}
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		listBox2->Items->Clear();

		int sel = checkedListBox1->SelectedIndex;
		double res = 0;
		bool r = false;
		switch (sel)
		{
		case 0:
			res = genalg->funCount(metod->numbers, textBox2->Text);
			listBox2->Items->Add(Convert::ToString(res));
			break;
		case 1:
			genalg->funForeach(metod->numbers);
			for (int i = 0; i < metod->numbers.size(); i++)
			{
				listBox2->Items->Add(Convert::ToString(metod->numbers.at(i)));
			}
			break;
		case 2:
			r = genalg->funFind(metod->numbers, textBox2->Text);
			if (r == true)
			{
				listBox2->Items->Add("содержит");
			}
			else
			{
				listBox2->Items->Add("не содержит");
			}
			break;
		case 3:
			genalg->funCopy(metod->numbers, metod->values);
			for (int i = 0; i < metod->values.size(); i++)
			{
				listBox2->Items->Add(Convert::ToString(metod->values.at(i)));
			}
			break;
		case 4:
			listBox1->Items->Clear();
			genalg->funFill(metod->numbers, textBox2->Text);
			for (int i = 0; i < metod->numbers.size(); i++)
			{
				listBox1->Items->Add(Convert::ToString(metod->numbers.at(i)));
				listBox2->Items->Add(Convert::ToString(metod->numbers.at(i)));
			}
			break;
		case 5:
			listBox1->Items->Clear();
			genalg->funRemove(metod->numbers, textBox2->Text);
			for (int i = 0; i < metod->numbers.size(); i++)
			{
				listBox1->Items->Add(Convert::ToString(metod->numbers.at(i)));
				listBox2->Items->Add(Convert::ToString(metod->numbers.at(i)));
			}
			break;
		case 6:
			listBox1->Items->Clear();
			genalg->funReplace(metod->numbers, textBox2->Text, textBox4->Text);
			for (int i = 0; i < metod->numbers.size(); i++)
			{
				listBox1->Items->Add(Convert::ToString(metod->numbers.at(i)));
				listBox2->Items->Add(Convert::ToString(metod->numbers.at(i)));
			}
			break;
		case 7:
			genalg->funReverse(metod->numbers);
			for (int i = 0; i < metod->numbers.size(); i++)
			{
				listBox2->Items->Add(Convert::ToString(metod->numbers.at(i)));
			}
			break;
		case 8:
			listBox1->Items->Clear();
			genalg->funUnique(metod->numbers);
			for (int i = 0; i < metod->numbers.size(); i++)
			{
				listBox1->Items->Add(Convert::ToString(metod->numbers.at(i)));
				listBox2->Items->Add(Convert::ToString(metod->numbers.at(i)));
			}
			break;
		case 9:
			genalg->funSort(metod->numbers);
			for (int i = 0; i < metod->numbers.size(); i++)
			{
				listBox2->Items->Add(Convert::ToString(metod->numbers.at(i)));
			}
			break;
		default:
			break;
		}
	}
};
}
