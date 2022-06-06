#include "Cat.h"
#include < windows.h > 

int main()
{
	setlocale(0, "");
	srand(0);

	Cat cat;
	cat.Fill();
	while (true)
	{
		cat.Print();
		cat.Eat();
		cat.Sleep();
		cat.Play();
		cat.Print();
		cat.Play();
		cat.Print();

		Sleep(1000);
		system("cls");
	}
}



