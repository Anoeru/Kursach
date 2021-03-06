#pragma once
#include "Basic.h"
#include "MyForm1.h"
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TextBox^  textBox3;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(197, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Return";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"num";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(61, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(106, 211);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Apply";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(62, 94);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(186, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"req";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(62, 124);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(57, 20);
			this->numericUpDown1->TabIndex = 10;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(62, 150);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(57, 20);
			this->numericUpDown2->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"state";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"func";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->infoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 15;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->infoToolStripMenuItem->Text = L"Info";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::infoToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(11, 211);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 37);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(125, 124);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(123, 20);
			this->textBox2->TabIndex = 17;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(125, 149);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(123, 20);
			this->textBox4->TabIndex = 18;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(253, 38);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(19, 18);
			this->button4->TabIndex = 19;
			this->button4->Text = L"R";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->Text = L"Change";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
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
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
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
				std::string s;
				System::String^ managed = textBox3->Text;
				s = msclr::interop::marshal_as<std::string>(managed);
				if (s != "")
				{
					st.setreq(s);
				}
				n = System::Convert::ToDouble(numericUpDown1->Text);
				st.setState(n);
				n = System::Convert::ToDouble(numericUpDown2->Text);
				st.setF(n);				
				st.Disk();
				MessageBox::Show("Record Updated");
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
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void infoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("To Change any file enter a number and info you need to change, then click apply.\nTo Search just add the number you need.");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Basic st;
	bool l;
	std::string g;
	int sch = 1;
	std::ifstream inFile;
	System::String^ managed = "";
	int n = System::Convert::ToInt32(textBox1->Text);
	inFile.open("req.txt", std::ios::beg);    
	if (!inFile) {
		MessageBox::Show("File could not be open !! Press any Key...");
	return; 
	}
	int flag = 0;    
	do
	{
		st.Load(sch);
		sch++;
		std::ofstream out;
		out.open("req1.txt", std::ios::app);
		out << st.getNum()<<"\n";
		if (st.getNum() == n) {		
		std::string s;
		s=st.getreq();
		managed = gcnew System::String(s.c_str());
		textBox3->Text = managed;
		l = st.getFunc();
		if (l == 0)
			textBox4->Text = "Functional";
		else
			textBox4->Text = "Not Functional";
		l = st.getState();
		if (l == 0)
			textBox2->Text = "Not done";
		else
			textBox2->Text = "Done";
		flag = 1;
		break;
		}
		else
		{
			std::getline(inFile, g);
			g.clear();
		}
	} while (!inFile.eof());
	inFile.close();     
	if (flag == 0)         
		MessageBox::Show("\n\nRecord doesn't exist");
}	 
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	numericUpDown1->Text = "0";
	numericUpDown2->Text = "0";
}
};
}
