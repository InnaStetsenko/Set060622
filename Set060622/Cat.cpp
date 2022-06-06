#include "Cat.h"

void Cat::Play()
{
	if (is_hungry == 1) cout << "�� ���� ������ ��� ��� �������\n";
	if (energy > 25) energy -= 20;
	cout << name << " is playing\n";
}
void Cat::Sleep()
{
	cout << name << " is sleeping\n";
	is_hungry == 1;
}
void Cat::Eat()
{
	cout << name << " is eating\n";
	weight += 0.2;
	is_hungry = false;
	energy += 10;
	if (energy > 100) energy = 100;
}
void Cat::Print() const
{
	cout << name << " Name\n";
	cout << color << " color\n";
	cout << age << " age\n";
	cout << weight << " weight\n";
	if (is_hungry == 1)
		cout << " is_hungry\n";
	else cout << " is not hungry";
}
void Cat::Speak()
{
	cout << "Cat is saying Maow\n";
}
void Cat::Wake_up()
{
	is_hungry = 1;
	energy = 80;
	weight -= 10;
	cout << "Cat is wake up\n";
}
void Cat::Hunting()
{
	percent = rand() % 101;
	if (energy > 20)
	{
		cout << "��� �� �����\n";
		if (percent <= 30)
		{
			cout << "����� �������� � ���\n";
			energy -= 10;
			weight += 0.2;
			is_hungry = false;
		}
		else
		{
			cout << "��� ��������, �� �� ���\n";
			weight -= 0.1;
		}
	}
	else cout << "��� �����, �� �� ��������\n";
}
void Cat::Fill()
{
	cout << "������� ��� ����:\n ";
	cin >> name;
	cout << "������� ������� ���� � �����:\n ";
	cin >> age;
	cout << "������� ��� ���� � �����������:\n ";
	cin >> weight;
}

void Cat::Setname(string name1)
{
	name = name1;
}

void Cat::Setcolor(string color1)
{
	color = color1;
}
void Cat::Setage(int age1)
{
	if (age1 >= 0 || age1 <= 35) age = age1;
	else 
		cout << "Incorrect value for parametr age\n";
}
void Cat::Setweight(double weight1)
{
	if (weight1 >= 0 || weight1 <= 20) weight = weight1;
	else
		cout << "Incorrect value for parametr weight\n";
}
void Cat::Setis_hungry(bool is_hungry1)
{
	if (is_hungry1 == 0 || is_hungry1 == 1) is_hungry = is_hungry1;
	else
		is_hungry = 1;
}
void Cat::Setenergy(int energy1)
{
	if (energy1 >= 0 || energy1 <= 100) energy = energy1;
	else
		cout << "Incorrect value for parametr energy\n";
}