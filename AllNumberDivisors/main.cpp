#include <iostream>
#include <list>
#include <cmath>

int userInput()
{
	std::cout << "Please enter a number\n";
	
	int number;
	std::cin >> number;

	return number;
}

std::list<int> findDivisors(int number)
{
	std::list<int> divisors;

	for (int i = 1; i <= std::sqrt(number); i++)
	{
		if (number % i == 0)
		{
			if (number / i == i)
			{
				divisors.push_back(i);
			}
			else
			{
				divisors.push_back(i);
				divisors.push_back(number / i);
			}
		}
	}

	return divisors;
}

void showList(std::list<int> list)
{
	for (auto it = list.begin(); it != list.end(); it++)
	{
		std::cout << *it << ' ';
	}
}

int main(void)
{
	showList(findDivisors(userInput()));

	return 0;
}