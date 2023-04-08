#include <iostream>
#include <string>

// Кодировка UTF-8

bool tr_fal(std::string text) {
	for (int i{}; i < text.length(); i++)
		text[i] = toupper(text[i]);
	for (int i{}; i < text.length() / 2; i++)
		if (text[i] != text[text.length() - i - 1])
			return false;
	return true; 
}

int signs(std::string txt) {
	int counter = 0;
	char s1 = ' ', s2 = '.', s3 = ',', s4 = '!', s5 = '?';
	for (int i{}; i < txt.length(); i++)
		if (txt[i] == s1 || txt[i] == s2 || txt[i] == s3 || txt[i] == s4 || txt[i] == s5)
			counter++;
	return counter;
}

std::string sub_str(const std::string txt, char sym) {
	int l_p = txt.rfind(sym);
	std::string str;
	if (l_p < 0 && l_p > txt.length())
		return str = " ";
	return str = txt.substr(l_p);
}


int main() {
	setlocale(LC_ALL, "Russian");

	int n;
	char m;

	std::string str = "Hasta siempre comandante!";
	char sym = 'a';
	std::string str_a;
	std::cout << "Задача 1.\nВ " << str << " ищем все символы 'a' и выводим строку: ";

	for (int i{}; i < str.length(); i++) 
		if (str[i] == sym)
			str_a += sym;
	std::cout << str_a << std::endl;

	std::cout << "Задача 2.\nВведите слово: ";
	std::string word;
	std::cin >> word;
	std::cout << tr_fal(word) << std::endl;

	std::cout << "\nЗадача 3.\n";
	std::string txt = "Привет! Как дела? Какие новости? Я,вот, домашку делаю по плюсам.";
	std::cout << "Колличество знаков препинания и пробелов в тексте: " << txt << " = " << signs(txt) << std::endl;


	// Не до конца разобрался с std::getline из-за чего не смог реализовать ввод символа от пользователя
	std::cout << "\nЗадача 4.\nИзначальная строка: ";
	std::string text = "Привет! Как твои дела?";
	std::cout << text << std::endl;
	m = 'и';
	std::cout << "Подстрока: " << sub_str(text, m) << std::endl;
	m = 'у';
	std::cout << "Подстрока: " << sub_str(text, m) << std::endl;

	return 0;
}