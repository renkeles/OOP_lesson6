#include <iostream>
#include <iomanip>

template< class T1, class T2 >
std::basic_ostream<T1, T2>& endll(std::basic_ostream<T1, T2>& os)
{
    os.put(os.widen('\n'));
    os.put(os.widen('\n'));
    os.flush();

    return os;
}

void task1() {
	int num;
	std::cout << "Enter num: ";
	while (true)
	{
		std::cin >> num;
		if (std::cin.good() && std::cin.peek() == '\n')
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		}
		std::cin.clear();
		std::cout << "Wrong num, enter again: ";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "num = " << num << std::endl;
}

void task2() {
	std::cout << "Hello" << endll;
	std::cout << "world";
}

int main()
{
	task1();
	task2();

    return 0;
}
