#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	setlocale(0, "");
	char num_zad;
	cout << "\033[32m"<< "Введите номер задания или \"q\" для завершения работы: " << "\33[0m";
	cin >> num_zad;
	if (num_zad != '1' && num_zad != '2' && num_zad != '3' && num_zad != '4' && num_zad != 'q')
		num_zad = 'e';
	while (num_zad != 'q') {
		// 1 задание
		if (num_zad=='1')
		{
			string h, n;
			int t;
			int mark=0;
			cout << "\033[33m"<<"Введите тип данных: " << "\033[31m";
			cin >> h;
			if (h == "short" || h == "long") {
				cin >> n;
				t = 1;
			}
			else
				t = 0;
			if (t) {
				if (n == "int" && h == "short") {
					cout << "short int " << "\033[0m" << "- " << sizeof(short int) << " байт\n";
					mark = 1;
				}
				if (n == "int" && h == "long") {
					cout << "long int " << "\033[0m" << "- " << sizeof(long int) << " байт\n";
					mark = 1;
				}
				if (n == "double" && h == "long") {
					cout << "long double " << "\033[0m" << "- " << sizeof(long double) << " байт\n";
					mark = 1;
				}

			}
			else {
				if (h == "int") {
					cout << "int " << "\033[0m" << "- " << sizeof(int) << " байт\n";
					mark = 1;
				}
				if (h == "float") {
					cout << "float " << "\033[0m" << "- " << sizeof(float) << " байт\n";
					mark = 1;
				}
				if (h == "double") {
					cout << "double " << "\033[0m" << "- " << sizeof(double) << " байт\n";
					mark = 1;
				}
				if (h == "char") {
					cout << "char " << "\033[0m" << "- " << sizeof(char) << " байт\n";
					mark = 1;
				}
				if (h == "bool") {
					cout << "bool " << "\033[0m" << "- " << sizeof(bool) << " байт\n";
					mark = 1;
				}
				if (mark==0)
					cout << "\033[31mНекорректный ввод!\033[0m";
			}
			cout << endl;
			cout << "\033[32m" << "Введите номер задания или \"q\" для завершения работы: " << "\33[0m";
			cin >> num_zad;
			if (num_zad != '1' && num_zad != '2' && num_zad != '3' && num_zad != '4' && num_zad != 'q')
				num_zad = 'e';
		}
		// 2 задание
		if (num_zad == '2')
		{
			int answer2;
			int bit_number2;
			char bit_value2;
			int number1;
			int mas2;
			cout << "\033[33m" << "Введите целое число: "<<"\033[0m";
			cin >> number1;
			cout << endl;
			unsigned int(mask1) = 1 << 31;
			cout << "Двоичное представление в памяти: " << "\033[31m";
			for (int i = 32; i != 0; --i) {
				putchar(number1 & mask1 ? '1' : '0');
				if (i == 32 || i % 8 == 1) {
					cout << " ";
					if (i == 32)
						cout << "\033[35m";
				}

				mask1 >>= 1;
			}
			cout << endl << endl;
			cout << "\033[0mЕсли хотите заменить бит, введите \033[33m1\033[0m, иначе введите \033[31m0\033[0m: ";
			cin >> answer2;

			while (answer2 == 1) {
				cout << endl << "Введите номер бита: ";
				cin >> bit_number2;
				cout << endl;
				cout << "Введите на что заменить бит: ";
				cin >> bit_value2;
				cout << endl;
				mask1 = 1 << 31;
				if ((bit_value2 == '1') or (bit_value2 == '0')) {
					if (bit_value2 == '1') {
						mas2 = 1 << 32 - 1 - bit_number2;
						number1 = number1 ^ mas2;
						cout << number1 << endl;
						for (int i = 32; i != 0; --i) {
							putchar(number1 & mask1 ? '1' : '0');
							if (i == 32 || i % 8 == 1) {
								cout << " ";
								if (i == 32)
									cout << "\033[35m";
							}

							mask1 >>= 1;
						}
						cout << "\033[31m";
					}
					else {
						mas2 = ~(1 << 32 - 1- bit_number2);
						number1 = (number1 & mas2);
						cout  << number1 << endl;
						for (int i = 32; i != 0; --i) {
							putchar(number1 & mask1 ? '1' : '0');
							if (i == 32 || i % 8 == 1) {
								cout << " ";
								if (i == 32)
									cout << "\033[35m";
							}

							mask1 >>= 1;
						}
						cout << "\033[31m";
					}

				}
				else {
					cout << "\033[31mНекорректный ввод!\033[0m";
					break;
				}
				cout << endl << endl << "Если хотите ещё раз заменить бит, введите 1, иначе введите \033[31m0\033[0m: ";
				cin >> answer2;
			}
			cout << endl<<endl;
			cout << "\033[32m" << "Введите номер задания или \"q\" для завершения работы: " << "\33[0m";
			cin >> num_zad;
			if (num_zad != '1' && num_zad != '2' && num_zad != '3' && num_zad != '4' && num_zad != 'q')
				num_zad = 'e';
		}

		// 3 задание
		if (num_zad == '3')
		{
			char mas3[33]{};
			int answer3;
			int bit_number3;
			char bit_value3;
			union {
				int b;
				float number2;
			};
			cout << "\033[33m" << "Введите вещественное число: "<<"\033[0m";
			cin >> number2;
			cout << endl;
			unsigned int(mask2) = 1 << 31;
			cout << "Двоичное представление в памяти: "<<"\033[31m";
			for (int i = 32; i != 0; --i) {
				putchar(b & mask2 ? '1' : '0');
				if (b & mask2)
					mas3[32 - i] = '1';
				else
					mas3[32- i] = '0';
				if (i == 32 || i == 32 - 8 || i == 32 - 8 * 2 || i == 32 - 8 * 3) {
					cout << " ";
					if (i == 32)
						cout << "\033[36m";
					if (i==32-8)
						cout << "\033[35m";

				}
				mask2 >>= 1;
			}
			cout << endl << endl;
			cout << "\033[0mЕсли хотите заменить бит, введите \033[33m1\033[0m, иначе введите \033[31m0\033[0m: ";
			cin >> answer3;

			while (answer3 == 1) {
				cout << endl << "Введите номер бита: ";
				cin >> bit_number3;
				cout << endl;
				cout << "Введите на что заменить бит: ";
				cin >> bit_value3;
				cout << endl;
				if ((bit_value3 == '1') or (bit_value3 == '0')) {
					mas3[bit_number3 - 1] = bit_value3;
					cout << "\033[31m";
					for (int i = 0; i <= 32; ++i) {
						cout << mas3[i];
						if (i == 0 || i ==  8 || i ==  8 * 2 || i ==  8 * 3) {
							if (i == 0)
								cout << "\033[36m";
							if (i == 8)
								cout << "\033[35m";
							cout << " ";
						}
					}
				}
				else {
					cout << "\033[31mНекорректный ввод!\033[0m";
					break;
				}
				cout << endl <<endl<< "Если хотите ещё раз заменить бит, введите 1, иначе введите \033[31m0\033[0m: ";
				cin >> answer3;
			}
			cout << endl << endl;
			cout << "\033[32m" << "Введите номер задания или \"q\" для завершения работы: " << "\33[0m";
			cin >> num_zad;
			if (num_zad != '1' && num_zad != '2' && num_zad != '3' && num_zad != '4' && num_zad != 'q')
				num_zad = 'e';
		}
		//4 задание
		if (num_zad == '4') {
			cout << endl;
			char mas4[64];
			int answer4;
			int bit_number4;
			char bit_value4;
			union {
				double c;
				int d[2];
			};
			cout << "\033[33m" << "Введите вещественное число: " << "\033[0m";
			cin >> c;
			cout << endl<<"Двоичное представление в памяти: " << "\033[31m";
			int db = 0;
			for (int j = 1; j >= 0; --j) {
				unsigned int mask3 = 1 << 31;
				for (int i = 32; i != 0; --i) {
					db++;
					putchar(d[j] & mask3 ? '1' : '0');
					if (d[j] & mask3)
						mas4[32 + 32 * (1 - j) - i] = '1';
					else
						mas4[32 + 32 * (1 - j) - i] = '0';
					if (db == 1 || db == 12) {
						cout << " ";
						if (db==1)
							cout << "\033[36m";
						if (db == 12)
							cout << "\033[35m";
					}
					mask3 >>= 1;
				}
			}
			cout << endl<<endl;
			cout << "\033[0mЕсли хотите заменить бит, введите \033[33m1\033[0m, иначе введите \033[31m0\033[0m: ";
			cin >> answer4;

			while (answer4 == 1) {
				cout <<endl<< "Введите номер бита: ";
				cin >> bit_number4;
				cout << endl;
				cout << "Введите на что заменить бит: ";
				cin >> bit_value4;
				cout << endl;
				if ((bit_value4 == '1') or (bit_value4 == '0')) {
					mas4[bit_number4 - 1] = bit_value4;
					cout << "\033[31m";
					for (int i = 0; i != 64; ++i) {
						if (i == 1 || i == 12) {
							cout << " ";
							if (i == 1)
								cout << "\033[36m";
							if (i == 12)
								cout << "\033[35m";
						}
						cout << mas4[i];
					}
				}
				else {
					cout << "\033[31mНекорректный ввод!\033[0m";
					break;
				}
				cout << endl << endl<<"Если хотите ещё раз заменить бит, введите 1, иначе введите \033[31m0\033[0m: ";
				cin >> answer4;
			}
			cout << endl << endl;
			cout << "\033[32m" << "Введите номер задания или \"q\" для завершения работы: " << "\33[0m";
			cin >> num_zad;
			if (num_zad != '1' && num_zad != '2' && num_zad != '3' && num_zad != '4' && num_zad != 'q')
				num_zad = 'e';
		}
		if (num_zad =='e') {
			cout << "\033[31mНекорректный ввод!\033[0m";
			cout << endl << endl;
			cout << "\033[32m" << "Введите номер задания или \"q\" для завершения работы: " << "\33[0m";
			cin >> num_zad;
			if (num_zad != '1' && num_zad != '2' && num_zad != '3' && num_zad != '4' && num_zad != 'q')
				num_zad = 'e';
			cin.sync();
		}
	}
		return(0);
}