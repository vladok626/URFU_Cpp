
#include <iostream>


int main()
{
	int i, k, ex;
	int power(int, int);
	int base;
	std::cout << "base - "; // ввод числа
	std::cin >> base;
	std::cout << "pow - "; // ввод степени
	std::cin >> ex;
	for (i = 0; i < ex; i++) // цикл для степени
	{
		k = power(base, i);
		std::cout << "i=" << i << ", k = " << k << std::endl; // вывод в консоль
	}
}



int power(int x, int n) {
	int i, p = 1;
	for (i = 0; i < n; i++) { // цикл для вычисления степени
		p *= x; // возведение в степень
	}
	return p;
}

