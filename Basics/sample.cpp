#include <iostream>
using namespace std;

int add(int a, int b){

    return a+b;
}

class Calculator{
    public:
    int multiply(int a, int b){
        return a*b;
    }
};

int main(){
    int x=5;
    int y=3;

    int sum = add(x,y);
    cout << "Sum:"<< sum << endl;

    Calculator calc;
    int product = calc.multiply(x,y);
    cout<<"The product is s"<< product<< endl;

    return 0;
}