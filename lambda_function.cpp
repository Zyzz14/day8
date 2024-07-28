#include <iostream>
using namespace std;

/*
    syntax:

    [capture](parameters) -> return_type{
            //function body
    }

    capture: Specifies which variable from the surrounding cope are capture and how(by value or by refernce).

    parameters: The paramteres for the lambda function(similar to regular function parameters).

    Return type: The return type of kambda function. This is optional and can often be inferred by the compiler

    Function Body: The actual code that gete executed when the lambda is called.
*/

int main() {
    auto sum = [](int a, int b) {
        return a + b;
    };

    int result = sum(5, 3);
    cout << "Sum: " << result << std::endl;

    return 0;
}


