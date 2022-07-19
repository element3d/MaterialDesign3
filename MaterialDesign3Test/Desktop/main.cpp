#include "MainWindow.h"

int main()
{
	e3::WindowCreateInfo info;
	info.Name = "MaterialDesign3Test";
	info.Size.Width = 1280;
	info.Size.Height = 720;
	info.Resoluction.Width = 1280;
	info.Resoluction.Height = 720;

	MainWindow manWindow(&info);
	manWindow.Show();

	return 0;
}
