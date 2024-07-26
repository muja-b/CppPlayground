#include <iostream>
int main()
{
    int list[]  = {1,2,3,4,6};
    int size = sizeof(list)/sizeof(list[0]);
    for(int i=1;i<=size;i++)
    {
        if (i != list[i-1]){
            std::cout <<"wrong list missing " << i <<std::endl;
        }
    }
}