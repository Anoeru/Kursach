#include "MyForm2.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main2(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project4::MyForm2 form;
	Application::Run(%form);
}