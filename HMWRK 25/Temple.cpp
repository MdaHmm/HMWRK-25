#include <iostream>
#include <string>

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
	std::cout << "������ 1.\n� " << str << " ���� ��� ������� 'a' � ������� ������: ";

	for (int i{}; i < str.length(); i++) 
		if (str[i] == sym)
			str_a += sym;
	std::cout << str_a << std::endl;

	std::cout << "������ 2.\n������� �����: ";
	std::string word;
	std::cin >> word;
	std::cout << tr_fal(word) << std::endl;

	std::cout << "\n������ 3.\n";
	std::string txt = "������! ��� ����? ����� �������? �,���, ������� ����� �� ������.";
	std::cout << "����������� ������ ���������� � �������� � ������: " << txt << " = " << signs(txt) << std::endl;


	// �� �� ����� ���������� � std::getline ��-�� ���� �� ���� ����������� ���� ������� �� ������������
	std::cout << "\n������ 4.\n����������� ������: ";
	std::string text = "������! ��� ���� ����?";
	std::cout << text << std::endl;
	m = '�';
	std::cout << "���������: " << sub_str(text, m) << std::endl;
	m = '�';
	std::cout << "���������: " << sub_str(text, m) << std::endl;

	return 0;
}