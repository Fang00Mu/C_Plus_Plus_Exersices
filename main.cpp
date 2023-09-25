#include <iostream>
#include <string>
using namespace std ;

int  main()
{
    string str ;
    cout << "what's your name ?" <<endl;

    getline(cin, str);
    cout << "my name is " << str << endl;
    cout.flush();
    return 0;
}
