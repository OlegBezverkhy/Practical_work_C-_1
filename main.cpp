#include <iostream>
int fibonachi(int num)
{
    if (num<=1) {
        return num;
    }
    return fibonachi(num-1)+fibonachi(num-2);
}

int main()
{
int number;
std::cout<<"Enter a number to generate the Fibonacci sequence: ";
std::cin>>number;
std::cout<<"The Fibonacci sequence for number: "<<number<<std::endl;
for (int i=0; i<number; i++) {
    std::cout<<fibonachi(i)<<" "<<std::endl;
}
std::cout<<"The calculation is finished"<<std::endl;
return 0;
}