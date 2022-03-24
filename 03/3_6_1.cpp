#include <iostream>

int main(void)
{
	int number_of_words = 0;
	std::string previous = " ";
	std::string current;
	while (std::cin>>current) {
		++number_of_words;
		if (previous == current)
			std::cout << "단어 번호 " << number_of_words
				<< " 반복 단어: " << current << '\n';
		previous = current;
	}
}
