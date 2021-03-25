#include "FuzzyNumber.h"


FuzzyNumber::FuzzyNumber() {  //конструктор за умовчанням(без параметрів)
	x = 0;
	l = 0;
	r = 0;
}

FuzzyNumber::FuzzyNumber(double value_x = 0, double value_l = 0, double value_r = 0) {  //конструктор ініціалізації
	x = value_x;
	l = value_l;
	r = value_r;
}

FuzzyNumber::FuzzyNumber(FuzzyNumber& obj, int) {  //конструктор копіювання
	x = obj.x;
	l = obj.l;
	r = obj.r;
}

void FuzzyNumber::set_x(double value_x) { x = value_x; } //встановлення значення поля "x"
void FuzzyNumber::set_l(double value_l) { l = value_l; } //встановлення значення поля "l" 
void FuzzyNumber::set_r(double value_r) { r = value_r; } //встановлення значення поля "r"

double FuzzyNumber::get_x()const { return x; } //отримання значення поля "x" 
double FuzzyNumber::get_l()const { return l; }  //отримання значення поля "l"  
double FuzzyNumber::get_r()const { return r; } //отримання значення поля "r"

//вивід на екран(перевантаженння операції "виводу")
std::ostream& operator << (std::ostream& out, const FuzzyNumber& obj) {
	out << "\nZnachenuya danoho nechitkoho chusla: ( " << obj.x - obj.l << ", " << obj.x << ", " << obj.x + obj.r << " )";
	return out;
}

//введення з клавіатури(перевантаженння операції "вводу")
std::istream& operator >> (std::istream& in, FuzzyNumber& obj) {
	double a{}, b{}, c{};
	bool perevirka{};
	do {
		std::cout << "\nVvedit dani(value) object : ";
		std::cout << "\n\nVvedit znachenie x: "; in >> a;
		std::cout << "Vvedit znachenie l: "; in >> b;
		std::cout << "Vvedit znachenie r: "; in >> c;

		if (((a - b) < a) && (a < (a + c)))
			perevirka = true;
		else {
			std::cout << "\nNe chitko vvedeni dani(value)!!!";
			perevirka = false;
		}
	} while (!perevirka);

	obj.x = a;
	obj.l = b;
	obj.r = c;

	return in;
}