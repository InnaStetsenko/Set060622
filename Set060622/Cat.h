#include <iostream>
using namespace std;


class Cat
{
	// ����:
private:
	string name; // ������ ����
	string color; // ���� �������
	int age; // ������� � �����
	double weight; // ���
	bool is_hungry; // �������� ��� ���?
	int energy = 80;//����� ������� 0-100 0- ������, 100 ����� �������
	int percent;
	// ������:
public: // ����������� �������, ���� �� ������� public, �� ����� private, � ���������� ������ ����� ����������.
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
