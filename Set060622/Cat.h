#include <iostream>
using namespace std;


class Cat
{
	// поля:
private:
	string name; // кличка кота
	string color; // цвет шёрстки
	int age; // возраст в годах
	double weight; // вес
	bool is_hungry; // голодный или нет?
	int energy = 80;//запас енергии 0-100 0- умерла, 100 полна энергии
	int percent;
	// методы:
public: // модификатор доступа, если не указать public, то будет private, и компоненты класса будут недоступны.
	void Play();
	void Sleep();
	void Eat();
	void Print() const;
	void Speak();
	void Wake_up();
	void Hunting();
	void Fill();

	void Setname(string name1);
	void Setcolor(string color1);
	void Setage(int age1);
	void Setweight(double weight1);
	void Setis_hungry(bool is_hungry1);
	void Setenergy(int energy1);
	
};
