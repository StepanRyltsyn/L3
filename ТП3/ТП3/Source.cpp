#include <iostream>
#include <fstream>
#include "Shape.h"
#include "Parallelepiped.h"
#include "Pyramid.h"
#include "Sphere.h"
#include "Tetrad.h"
using namespace std;
ostream& operator<<(ostream&out, const Parallelepiped&p)
{
	out << "�������������� (w: " << p.w << ", h: " << p.h << ", l: " << p.l << ")" << endl;
	return out;
}
ostream& operator<<(ostream&out, const Pyramid&p)
{
	out << "�������� (h: " << p.h << ", size: " << p.size << ")" << endl;
	return out;
}

ostream& operator<<(ostream&out, const Sphere&p)
{
	out << "��� (r: " << p.r << ")" << endl;
	return out;
}

ostream& operator<<(ostream&out, const Tetrad&p)
{
	out << "��������(a: " << p.a << ")" << endl;
	return out;
}
void Print(Shape**shapes, int size)
{
	for (int i = 0; i <size; i++)
	{
		cout << shapes[i] << endl;
	}
}
Shape** LoadFile()
{
	Shape**s;
	int size;
	ifstream in("Data.bin", ios::binary);
	//in.read();
}
void SaveFile(Shape**shapes, int size)
{
	ofstream out("Data.bin", ios::binary);
	out.write((char*)&size, sizeof(size));
	for (int i = 0; i < size; i++)
	{
		out.write((char*)&shapes[i], sizeof(Shape));
	}
	out.close();
}

int main()
{
	Shape**shapes = nullptr;
	int size;
	int i=0;
	double v1, v2, v3;
	setlocale(0, "RU");
	bool isrun = true;
	int action;
	while (isrun)
	{
		cout <<"1.������ ���������� �����"<<endl;
		cout <<"2.�������� ��������������" << endl;
		cout <<"3.�������� ��������" << endl;
		cout <<"4.�������� ���" << endl;
		cout <<"5.�������� ��������" << endl;
		cout <<"6.������� �� �����" << endl;
		cout <<"7.��������� � ����" << endl;
		cout <<"8.����� �� �����" << endl;
		cout <<"9.�����" << endl;
		cin >> action;
		switch (action)
		{
		case 1:
			cout << "������� ���������� ����� ";
			cin >> size;
			shapes = new Shape*[size];
			break;
		case 2:
			if (i<size)
			{
				cout << "������� ������: ";
				cin >> v1;
				cout << "������� �����: ";
				cin >> v2;
				cout << "������� ������: ";
				cin >> v3;
				shapes[i++]=new Parallelepiped(v1, v2, v3);

			}
			break;
		case 3:
			if (i < size)
			{
				cout << "������� ������: ";
				cin >> v1;
				cout << "������� ������ ���������: ";
				cin >> v2;
				shapes[i++] = new Pyramid(v1, v2);
			}
			break;
		case 4:
			if (i<size)
			{
				cout << "������� ������ �����: ";
				cin >> v1;
				shapes[i++] = new Sphere(v1);
			}
			break;
		case 5:
			if (i < size)
			{
				cout << "������� ������ ���������: ";
				cin >> v1;
				shapes[i++] = new Tetrad(v1);
			}
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			Print(shapes, i);
			break;
		case 9:
			isrun = false;
			break;
		}
	}
}