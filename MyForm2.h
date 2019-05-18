#pragma once
#include "Basic.h"
#include "MyForm2.h"
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <algorithm>
#include <iterator>
namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;
	private: System::Windows::Forms::Button^  button2;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(173, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Return";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(57, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(167, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"num";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->infoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(262, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->infoToolStripMenuItem->Text = L"Info";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::infoToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(85, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Apply";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(262, 168);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm2";
			this->Text = L"Delete";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		bool remove_line(const char *filename, size_t index)
		{
			std::vector<std::string> vec;
			std::ifstream file(filename);
			if (file.is_open())
			{
				std::string str;
				while (std::getline(file, str))
					vec.push_back(str);
				file.close();
				if (vec.size() < index)
					return false;
				vec.erase(vec.begin() + index);
				std::ofstream outfile(filename);
				if (outfile.is_open())
				{
					std::copy(vec.begin(), vec.end(),
						std::ostream_iterator<std::string>(outfile, "\n"));
					outfile.close();
					return true;
				}
				return false;
			}
			return false;
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void infoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("To delete something just enter it's number and wait.");
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	int found = 0;
	int sch = 1;
	Basic st;
	std::string g;
	int n = System::Convert::ToInt32(textBox1->Text);
	std::fstream File;
	File.open("req.txt", std::ios::in | std::ios::out);
	if (!File) {
		MessageBox::Show("File could not be open !! Press any Key...");
		return;
	}
	do {
		st.Load(sch);
		std::ofstream out;
		out.open("req1.txt", std::ios::app);
		out << st.getNum() << "\n";
		if (st.getNum() == n) {
			MessageBox::Show("Record Deleted");
			found = remove_line("req.txt", sch);
			break;
		}
		else
		{
			std::getline(File, g);
			g.clear();
		}
		sch++;
	} while (!File.eof());
	File.close();
	if (found == 0)
		MessageBox::Show("\n\n Record Not Found ");
}
};
}
