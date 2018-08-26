
//g++ -o functions_stuff function_stuffs.cpp
#include <iostream>
using namespace std;


// ------DEFAULT VALUES FOR PARAMETERS---------
int sum(int a=20,int b=42){

    int result= a+b;
    return result;
}

int main() 
{
    cout<<endl;

    int x=24;
    int y=36;
    
    cout << sum(x,y)<<"\n\n";
    cout << sum(x)<<"\n\n";
    cout << sum()<<"\n\n";

}
//-----------------------------


