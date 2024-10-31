// DZ от 29-10-24 Меню - Функции в работе.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
void menu2(int num1);
void menu1(int num);
void menu3(int num2);
//template<typename T> T* max(T*, T*); // max

enum T {
	LG, //Long
	IT, //Int
	DL, //Double
	CR, //Char
	ST, //Short
};


template <typename T>
T arr(T a, T b) {
	srand(time(0));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << "  ";
		}
		std::cout << "\n";
	}
}

void menu3(int num2) {
	do {
		std::cout << "\n\n3 шаг: Выберите действие: \n\n";
		std::cout << " * Заполнения массива случайными данными - 1\n";
		std::cout << " * Вывод массива на экран - 2\n";
		std::cout << " * Поиск максимального элемента - 3\n";
		std::cout << " * Поиск минимального элемента - 4\n";
		std::cout << " * Поиск среднего арифметического - 5\n";
		std::cout << " * Линейный поиск элемента - 6\n";
		std::cout << " * Вывод на экран суммы элементов каждой строки - 7\n";
		std::cout << " * Вывод на экран суммы элементов каждого столбца - 8\n";
		std::cout << " * Вывод на экран суммы элементов всего массива - 9\n";
		std::cout << " * Главное меню - 10\n";
		std::cout << "\n\nВаш выбор: ";
		std::cin >> num2;
		system("cls");

		switch (num2)
		{
		case 1:
		{
			std::cout << "Заполнения массива случайными данными\n";
			menu3(1);
			return;
		}
		case 2:
		{	std::cout << "Вывод массива на экран\n"; return; }
		case 3:
		{	std::cout << "Поиск максимального элемента\n"; return; }
		case 4:
		{	std::cout << "Поиск минимального элемента\n"; return; }
		case 5:
		{	std::cout << "Поиск среднего арифметического\n"; return; }
		case 6:
		{	std::cout << "Линейный поиск элемента\n"; return; }
		case 7:
		{	std::cout << "Вывод на экран суммы элементов каждой строки\n"; return; }
		case 8:
		{	std::cout << "Вывод на экран суммы элементов каждого столбца\n"; return; }
		case 9:
		{	std::cout << "Вывод на экран суммы элементов всего массива\n"; return; }
		case 10:
		{	std::cout << "Главное меню\n"; system("cls"); menu1(1); return; }
		default:
			if (num2 > 10) {
				std::cout << "Ошибка! Проверти верность ввода.\n";
				std::cout << "\n";
			}
		}
	} while (num2 != 10);
}


void menu2(int type) {
	do {
		std::cout << "\n2 шаг: Выберите тип данных: \n";
		std::cout << "\nLong - 0;\nInt - 1;\nDouble - 2;\nChar - 3;\nShort - 4;\n\n";
		std::cout << "\nВаш выбор: ";
		std::cin >> type;

		system("cls");
		switch (type)
		{
		case LG:
		{
			std::cout << "Выбран тип данных Long. ";
			menu3(1);
			return;
		}
		case IT:
		{
			std::cout << "Выбран тип данных Int. ";
			menu3(1);
			return;
		}
		case DL:
		{
			std::cout << "Выбран тип данных Double. ";
			menu3(1);
			return;
		}
		case CR:
		{
			std::cout << "Выбран тип данных Char. ";
			menu3(1);
			return;
		}
		case ST:
		{
			std::cout << "Выбран тип данных Short. ";
			menu3(1);
			return;
		}
		default:
			if (type > 4) {
				std::cout << "Ошибка! Проверти верность ввода.\n";
				std::cout << "\n";
			}
		}
	} while (type != 4);
}

void menu1(int num) {
	int answer{};
	do {
		std::cout << "\n\t\t\t\t\t* * * ГЛАВНОЕ МЕНЮ * * *\n\n";
		std::cout << " * Открыть окно для выбора типа данных - 1 \n * Выход из программы - 0";
		std::cout << "\n\nВаш выбор: ";
		cin >> answer;
		system("cls");

		switch (answer)
		{
		case 0: {
			std::cout << "\nВыход из системы.\n";
			return;
		}
		case 1:
		{
			menu2(1);
			return;
		}
		default:
			if (answer > 1) {
				std::cout << "Ошибка! Проверти верность ввода.\n";
				std::cout << "\n";
			}
		}
	} while (answer != 1);

}


//template <typename T>
//T arr(T a, T b) {
//	srand(time(0));
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			arr[i][j] = rand() % 10;
//			std::cout << arr[i][j] << "  ";
//		}
//		std::cout << "\n";
//	}
//}

//template<typename T> T* max(T* a, T* b) //max зн.
//{
//	return *a > *b ? a : b;
//}

//void swap(int* a, int* b) { //поменять местами
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//
//int multiplex(int a, int b, int* sum) {
//	*sum = a + b;
//	return (a - b);
//}
//
//void print_arr(int* arr, int size) {  //вывод массива
//	for (int i{}; i < size; ++i)
//		//std::cout << arr[i] << " ";
//		std::cout << *(arr + i) << " ";
//	std::cout << std::endl;
//}

int main() {

	srand(time(NULL));
	setlocale(LC_ALL, "Ru");
	bool answer{};
	int num{};

	cout << "Задание: \n";
	cout << "Реализовать следующий функционал для работы с двумерным массивом(размер массива определите сами):\n";
	cout << "1. Заполнения массива случайными данными\n";
	cout << "2. Вывод массива на экран\n";
	cout << "3. Поиск максимального элемента\n";
	cout << "4. Поиск минимального элемента\n";
	cout << "5. Поиск среднего арифметического\n";
	cout << "6. Линейный поиск элемента\n";
	cout << "7. Вывод на экран суммы элементов каждой строки\n";
	cout << "8. Вывод на экран суммы элементов каждого столбца\n";
	cout << "9. Вывод на экран суммы элементов всего массива\n";
	cout << "\nПрограмму реализовать с системой пользовательских меню, \nпозволяющих осуществлять выбор типа данных массива и действия над ними.\n\n";

	cout << "\nБот: Открыть главное меню? (да - 1/нет - 0): ";
	std::cout << "\n\nВаш выбор: ";
	cin >> answer;

	system("cls");	

	if (answer) menu1(1);
	else cout << "Выход из системы.\n\n";

	

	//short value{ 7 }; // &value = 0012FF60
	//short otherValue{ 3 }; // &otherValue = 0012FF54
	//short* ptr{ &value };
	//std::cout << &value << '\n'; // addr val
	//std::cout << value << '\n'; // 7
	//std::cout << ptr << '\n'; // addr val
	//std::cout << *ptr << '\n'; // 7
	//std::cout << '\n';
	//*ptr = 9; // value = 9
	//std::cout << &value << '\n'; // addr val
	//std::cout << value << '\n'; // 9
	//std::cout << ptr << '\n'; // addr val
	//std::cout << *ptr << '\n'; //9
	//std::cout << '\n';
	//ptr = &otherValue; // adrr otherValue
	//std::cout << &otherValue << '\n'; // adrr otherValue
	//std::cout << otherValue << '\n'; // 3
	//std::cout << ptr << '\n'; // adrr otherValue
	//std::cout << *ptr << '\n'; // 3
	//std::cout << '\n';
	//std::cout << sizeof(ptr) << '\n'; // 8
	//std::cout << sizeof(*ptr) << '\n'; // 2
	//int value{ 45 };
	//int* ptr{ &value };
	//
	//std::cout << value << std::endl; // значение
	//std::cout << &value << std::endl; // адрес
	//std::cout << ptr << std::endl; // адрес
	//std::cout << *ptr << std::endl; // значение
	//
	//return 0;

	//int arr[10]{ 1,2,3,4,5,6,7,8,9,10 };

	/*for (int i{}; i < 10; ++i)
	std::cout << arr[i] << " ";
	std::cout << std::endl;
	for (int i{}; i < 10; ++i)
	std::cout << *(arr+i) << " ";
	std::cout << std::endl;*/

	/*int* ptr = arr + 9;
	for (int i{}; i < 10; ++i, --ptr)
		std::cout << *ptr << " ";
	std::cout << std::endl;
	ptr = arr + 9;
	for (int i{}; i < 10; ++i, --ptr)
		std::cout << (*ptr)-- << " ";
	std::cout << std::endl;
	ptr = arr + 9;
	for (int i{}; i < 10; ++i, --ptr)
		std::cout << *ptr << " ";
	std::cout << std::endl;*/

	/*ptr = &arr[9];
	std::cout << *ptr << "\n";
	ptr = arr + 9;
	std::cout << *ptr << "\n";
	(*ptr) -= 15;
	std::cout << *ptr << "\n\n\n\n\n";
	print_arr(arr, 10);*/
	/*std::cout << arr[0] << std::endl;
	std::cout << &arr[0] << std::endl;
	std::cout << &arr[1] << std::endl;
	std::cout << &arr[2] << std::endl;
	std::cout << arr << std::endl;*/
	//std::cout << (char*) & arr[1] - (char*) & arr[0] << std::endl;
	//arr[0];
	//arr[1];
	//arr[2];
	//int s{ 10 };
	//int s1{ 20 };
	//std::cout << "s = " << s << " s1 = " << s1 << std::endl;
	//swap(&s, &s1);
	//std::cout << "s = " << s << " s1 = " << s1 << std::endl;
	//int sum{};
	//int diff = multiplex(s, s1, &sum);
	//std::cout << "diff = " << diff << " sum = " << sum << std::endl;
	//return 0;
	////int *a = new int[5000000]{};
	//int a{ 100 };
	//double d{ 99.99 };
	//std::cout << "a = " << a << std::endl;
	//std::cout << "d = " << d << std::endl;
	//int* ptr_a{};
	//std::cout << "ptr_a = " << ptr_a << std::endl;
	//
	//ptr_a = &a;
	//std::cout << "ptr_a = " << ptr_a << std::endl;
	//std::cout << "ptr_a (value) = " << *ptr_a << std::endl;
	//

	//a = 500;
	//std::cout << "After a = 500\n";
	//std::cout << "ptr_a = " << ptr_a << std::endl;
	//std::cout << "ptr_a (value) = " << *ptr_a << std::endl;
	//

	//*ptr_a = 999;
	//std::cout << "*ptr_a = 999\n";
	//std::cout << "ptr_a = " << ptr_a << std::endl;
	//std::cout << "ptr_a (value) = " << *ptr_a << std::endl;

	//std::cout << "a = " << a << std::endl;
	//int a1{ 33 };
	//ptr_a = &a1;
	//std::cout << "ptr_a = &a1\n";
	//std::cout << "ptr_a = " << ptr_a << std::endl;
	//std::cout << "ptr_a (value) = " << *ptr_a << std::endl;
	//std::cout << "a = " << a << std::endl;
	//std::cout << "a1 = " << a1 << std::endl;
	//int v1;

	//double v2;
	//char v3;
	//std::cout << sizeof(v1) << std::endl;
	//std::cout << sizeof(v2) << std::endl;
	//std::cout << sizeof(v3) << std::endl;

	//int* pv1{ &v1 };
	//double* pv2{ &v2 };
	//char* pv3{ &v3 };
	//std::cout << sizeof(pv1) << std::endl;
	//std::cout << sizeof(pv2) << std::endl;
	//std::cout << sizeof(pv3) << std::endl;

	return 0;

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
