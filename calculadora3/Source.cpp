#include "matriz.h"

using namespace calculadora3;
[STAThreadAttribute]
int main(array <System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	calculadora3::matriz frm;
	Application::Run(% frm);
	return 0;

}
