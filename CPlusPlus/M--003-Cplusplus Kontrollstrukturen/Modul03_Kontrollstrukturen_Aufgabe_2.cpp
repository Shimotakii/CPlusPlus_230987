#include <iostream>
int main()
{
	int jahr;
	std::cout << "Jahr: " << std::endl;
	std::cin >> jahr;

	bool istSchaltjahr = false;

	if (jahr % 400 == 0)
		istSchaltjahr = true;
	else if (jahr % 100 == 0)
		istSchaltjahr = false;
	else if (jahr % 4 == 0)
		istSchaltjahr = true;

	std::cout << jahr << " ist " << (istSchaltjahr ? "k" : "") << "ein Schaltjahr" << std::endl;
}