#include <iostream>
#include <iomanip>

int get_integer(const char* msg) {
    char answer[256];
    int n = 0;

    while (1) {
        std::cin >> std::setw(256) >> answer;
        for (int i = 0; i < 256; i++) {
            if (answer[i] == '\0') break;
            if (!isdigit(answer[i])) {
                break;
            }

        }
    }
   

    return n;
}

template< class T1, class T2 >
std::basic_ostream<T1, T2>& endll(std::basic_ostream<T1, T2>& os)
{
    os.put(os.widen('\n'));
    os.put(os.widen('\n'));
    os.flush();

    return os;
}

int main()
{
    //char msg[256];
    //int num = get_integer(msg);
    //std::cout << "num = " << num << std::endl;

    std::cout << "A" << endll;
    std::cout << "B";

    return 0;
}
