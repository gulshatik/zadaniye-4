#include<iostream>
#include<ctime>
#include"zadaniye4.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int mass[10], razn, first_el;
	cout << "¬ведите первый элемент арифметической прогрессии" << endl;
	cin >> first_el;
	cout << "¬ведите разность арифметической прогрессии" << endl;
	cin >> razn;
	ar_pr(razn, first_el, mass, 10);
	print_array(mass, 10);
	cout << endl;
	array_(mass, 10);
	rand_array(mass, 10);
	print_array(mass, 10);
	two_th(mass, 10);
	print_array(mass, 10);
	return 0;
}

