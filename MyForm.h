#pragma once
#include <iostream>
#include "Management_сompany.h"
#include <string>					// для работы с обычными строками C++
#include <msclr/marshal_cppstd.h>	// для перевода из System::String^ в string
#include <regex>
regex isDigit("[1-9](\\d)*");
using namespace std;

Management_сompany UC; // управ. компания - глоб. переменная 

namespace Kurs {

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
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RichTextBox^ richTextBox7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::RichTextBox^ richTextBox8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::RichTextBox^ richTextBox9;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;



	protected:










	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->richTextBox9 = (gcnew System::Windows::Forms::RichTextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 29);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(203, 27);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выберите название УК";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(238, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Выбрать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(364, 29);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(261, 27);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(375, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Название УК";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(141, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 34);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Добавить дом";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(12, 115);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(109, 31);
			this->richTextBox3->TabIndex = 6;
			this->richTextBox3->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Номер дома";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Номер дома";
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(12, 250);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(109, 31);
			this->richTextBox5->TabIndex = 10;
			this->richTextBox5->Text = L"";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(432, 250);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(193, 33);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Добавить квартиру";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(138, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 17);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Номер квартиры";
			// 
			// richTextBox6
			// 
			this->richTextBox6->Location = System::Drawing::Point(138, 250);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(120, 31);
			this->richTextBox6->TabIndex = 13;
			this->richTextBox6->Text = L"";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1326, 60);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Сообщение";
			// 
			// richTextBox7
			// 
			this->richTextBox7->Location = System::Drawing::Point(1172, 90);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->Size = System::Drawing::Size(371, 500);
			this->richTextBox7->TabIndex = 15;
			this->richTextBox7->Text = L"";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(289, 112);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 34);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Удалить дом";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(654, 250);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(203, 62);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Удалить последнюю добавленную квартиру в выбранном доме";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(654, 113);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(203, 33);
			this->button6->TabIndex = 25;
			this->button6->Text = L"Вывести все квартиры дома";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(274, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 17);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Площадь квартиры";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(274, 250);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(135, 31);
			this->richTextBox4->TabIndex = 26;
			this->richTextBox4->Text = L"";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(654, 29);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(203, 33);
			this->button7->TabIndex = 28;
			this->button7->Text = L"Вывести все дома";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(432, 112);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(203, 59);
			this->button8->TabIndex = 29;
			this->button8->Text = L"Поиск дома с указанным номером";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(880, 29);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(277, 33);
			this->button9->TabIndex = 30;
			this->button9->Text = L"Вывести все квартиры всех домов";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 358);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 17);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Номер квартиры";
			// 
			// richTextBox8
			// 
			this->richTextBox8->Location = System::Drawing::Point(12, 378);
			this->richTextBox8->Name = L"richTextBox8";
			this->richTextBox8->Size = System::Drawing::Size(120, 31);
			this->richTextBox8->TabIndex = 31;
			this->richTextBox8->Text = L"";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(175, 378);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(193, 51);
			this->button10->TabIndex = 33;
			this->button10->Text = L"Найти все квартиры с указанным номером";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// richTextBox9
			// 
			this->richTextBox9->Location = System::Drawing::Point(12, 458);
			this->richTextBox9->Name = L"richTextBox9";
			this->richTextBox9->Size = System::Drawing::Size(120, 31);
			this->richTextBox9->TabIndex = 34;
			this->richTextBox9->Text = L"";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(164, 458);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(193, 51);
			this->button11->TabIndex = 36;
			this->button11->Text = L"Найти все квартиры с указанной площадью";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 438);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(135, 17);
			this->label9->TabIndex = 37;
			this->label9->Text = L"Площадь квартиры";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(948, 378);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(193, 51);
			this->button12->TabIndex = 38;
			this->button12->Text = L"Сохранить";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(948, 458);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(193, 51);
			this->button13->TabIndex = 39;
			this->button13->Text = L"Загрузить";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1555, 602);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->richTextBox9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->richTextBox8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->richTextBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->richTextBox6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



// выбор названия УК
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	string umya_company = msclr::interop::marshal_as <std::string>(richTextBox1->Text);
	UC.change_name(umya_company);
	richTextBox2->Text = msclr::interop::marshal_as <System::String^>(UC.get_name());
}

// добавление дома
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	string nomer_doma = msclr::interop::marshal_as <std::string>(richTextBox3->Text);
	if (regex_match(nomer_doma, isDigit)) // проверка на полож. число
	{
		int int_nomer_doma = stoi(nomer_doma);
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>(UC.push_house(int_nomer_doma));
	}
	else
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>("Номер дома должен быть положительным целым числом!");
}

// вывод всех номеров домов
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	richTextBox7->Text = msclr::interop::marshal_as <System::String^>(UC.show_all_houses());
}

// поиск дома с определенным номером
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	string nomer_doma = msclr::interop::marshal_as <std::string>(richTextBox3->Text);
	if (regex_match(nomer_doma, isDigit)) // проверка на полож. число
	{
		int int_nomer_doma = stoi(nomer_doma);

		richTextBox7->Text = msclr::interop::marshal_as <System::String^>(UC.search_house_test(int_nomer_doma));
	}
	else
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>("Номер дома должен быть положительным целым числом!");
}

// удаление дома с заданным номером
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	string nomer_doma = msclr::interop::marshal_as <std::string>(richTextBox3->Text);
	if (regex_match(nomer_doma, isDigit)) // проверка на полож. число
	{
		int int_nomer_doma = stoi(nomer_doma);	
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>(UC.pop_house(int_nomer_doma));
	}
	else
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>("Номер дома должен быть положительным целым числом!");
}

// Вывод квартир указанного дома
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	string nomer_doma = msclr::interop::marshal_as <std::string>(richTextBox3->Text);
	if (regex_match(nomer_doma, isDigit)) // проверка на полож. число
	{
		int int_nomer_doma = stoi(nomer_doma);
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>(UC.show_flat_house(int_nomer_doma));
	}
	else
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>("Номер дома должен быть положительным целым числом!");
}

// Вывод всех квартир всех дома
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	richTextBox7->Text = msclr::interop::marshal_as <System::String^>(UC.show_all_flat_house());
}

// Добавление квартиры
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	string nomer_doma = msclr::interop::marshal_as <std::string>(richTextBox5->Text);
	string nomer_kvartiry = msclr::interop::marshal_as <std::string>(richTextBox6->Text);
	string ploshad_kvartiry = msclr::interop::marshal_as <std::string>(richTextBox4->Text);
	if ((regex_match(nomer_doma, isDigit) && (regex_match(nomer_kvartiry, isDigit)) && (regex_match(ploshad_kvartiry, isDigit))))
	{
		int int_nomer_doma = stoi(nomer_doma);
		int int_nomer_kvartiry = stoi(nomer_kvartiry);
		int int_ploshad_kvartiry = stoi(ploshad_kvartiry);
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>(UC.push_flat(int_nomer_doma, int_nomer_kvartiry, int_ploshad_kvartiry));
	}
	else
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>("Номер дома, квартиры и площадь должны быть положительными целыми числами!");
}

// Удаление квартиры 
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	string nomer_doma = msclr::interop::marshal_as <std::string>(richTextBox5->Text);
	if (regex_match(nomer_doma, isDigit))
	{
		int int_nomer_doma = stoi(nomer_doma);
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>(UC.pop_flat(int_nomer_doma));
	}
	else
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>("Номер дома должен быть положительным целым числом!");
}

// поиск всех квартир с указанным номером
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
{
	string nomer_kvartiry = msclr::interop::marshal_as <std::string>(richTextBox8->Text);
	if (regex_match(nomer_kvartiry, isDigit))
	{
		int int_nomer_kvartiry = stoi(nomer_kvartiry);
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>(UC.search_flats_by_num(int_nomer_kvartiry));
	}
	else
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>("Номер квартиры должен быть положительным целым числом!");
}

// поиск всех квартир с указанной площадью
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e)
{
	string ploshad_kvartiry = msclr::interop::marshal_as <std::string>(richTextBox9->Text);
	if (regex_match(ploshad_kvartiry, isDigit))
	{
		int int_ploshad_kvartiry = stoi(ploshad_kvartiry);
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>(UC.search_flats_by_sq(int_ploshad_kvartiry));
	}
	else
		richTextBox7->Text = msclr::interop::marshal_as <System::String^>("Площадь должна быть положительным целым числом!");
}

private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {}



private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog1_FileOk);
	saveFileDialog1->ShowDialog();
	//saveFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
	string filename = msclr::interop::marshal_as <std::string>(saveFileDialog1->FileName);
	// сохраняем текст в файл
	System::IO::File::WriteAllText(msclr::interop::marshal_as <System::String^>(filename), msclr::interop::marshal_as <System::String^>(UC.show_all_flat_house()));
	richTextBox7->Text = msclr::interop::marshal_as <System::String^>("Файл сохранен");
}


private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
	openFileDialog1->ShowDialog();
	//openFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
	string filename = msclr::interop::marshal_as <std::string>(openFileDialog1->FileName);
	// читаем файл в строку
	String^ fileText = System::IO::File::ReadAllText(msclr::interop::marshal_as <System::String^>(filename));
	richTextBox7->Text = fileText;
}
};
}
