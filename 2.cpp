#include <iostream>  

int main()
{
	double a,b;
	char s;
	std::cout <<"������� 2 ����� "<< '\n';
	std::cin >> a >> b;
	std::cout <<"������� �������������� �������� ";
	std::cin >> s;
	switch(s)
	{
		case '+':
			std:: cout <<"��������� �������� ("<< s<< ") = " << a+b ;
			break;
		
		case '-':
			std:: cout <<"��������� �������� ("<< s<< ") = " << a-b ;
			break;
		case '*':
			std:: cout <<"��������� �������� ("<< s<< ") = " << a*b;
			break;
		case '/':
			std:: cout <<"��������� �������� ("<< s<< ") = " << a/b;
			break;
		default:
			std:: cout << "������ �������� ������";
			break;
	}
	return 0;
}
