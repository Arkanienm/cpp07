#include <iostream>
#include <ostream>
#include "../includes/iter.hpp"

template<typename T>
void printElement(const T& element)
{
	std::cout << element << std::endl;
}

int main()
{
	std::cout << "-----Char tests-----" << std:: endl<< std::endl;
	char str[3] = {	'o', 'u', 'i' };
	unsigned int len = 3;
	::iter(str, len, printElement<char>);

	std::cout << "-----Int tests-----" << std:: endl<< std::endl;
	int arr[5] = {	5, 42, 54 , 18, -26};
	len = 5;
	::iter(arr, len, printElement<int>);

	std::cout << "-----Bool tests-----" << std:: endl<< std::endl;
	bool bArr[4] = { false, false, true, false};
	len = 4;
	::iter(bArr, len, printElement<bool>);
}