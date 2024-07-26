#include <iostream>
unsigned weirdAlgo(unsigned input)
    {
    if (input == 1){
        std::cout << "success" <<std::endl;
        return 0;
    }
    if (input % 2 == 0){
        input = input/2;
    }
    else
    {
        input = (input * 3) + 1;
    }
    std::cout << input << std::endl;
    return weirdAlgo(input);
    };
int main()
{
    unsigned input = 100000;
    unsigned out = weirdAlgo(input);
    std::cout << out <<std::endl;

}