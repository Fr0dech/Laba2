#include <iostream>


int main()
{
	std::cout << "Program 1." << std::endl << "Enter 3 natural numbers (use enter to seperate them)." << std::endl;
	int A, B, C;
	std::cin >> A >> B >> C;
	if (A > B && B > C)
	{
		std::cout << (A - B - C) << std::endl << "Program 1 finished." << std::endl;
	}
	else if (B > A && (B % C == 0))
	{
		std::cout << (B / C + B - A) << std::endl << "Program 1 finished." << std::endl;
	}
	else
	{
		std::cout << (A + B + C) << std::endl << "Program 1 finished." << std::endl;
	}

	std::cout << "Program 2." << std::endl << "Enter error code (0-3)." << std::endl;
	int N;
	std::cin >> N;
	switch (N)
	{
	case 0: std::cout << "Everything's fine.";
		break;
	case 1: std::cout << "Error while trying to read file." << std::endl << "Program 2 finished.";
		break;
	case 2: std::cout << "Error while trying to write file." << std::endl << "Program 2 finished.";
		break;
	case 3: std::cout << "Not every feild has been defined." << std::endl << "Program 2 finished.";
		break;
	}


}