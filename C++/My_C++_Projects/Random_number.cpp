#include <iostream>
#include <cstdlib> //for rand() and srand()
#include <ctime>
using namespace std;

// int main(){ ------SIZEOF----------

// // cout<<sizeof(char)<<endl;
// // cout<<sizeof(int)<<endl;
// // cout<<sizeof(double)<<endl;
// // cout<<sizeof(float)<<endl;
// // cout<<sizeof(long)<<endl;

// }


int main(){ // -------------- RANDOM NUMBER------------

// // basic random number
// cout<<"\n\n";
// for (int x=1;x<=10;x++){


//     cout<<1+(rand()%6)<<endl;//range is from 1 to 6 and starts from 1 

// }

// random numbers with srand()
srand(time(0));
for (int x=0;x<=10;x++){


    cout<<1+(rand()%6)<<endl;//range is from 1 to 6 and starts from 1 


}



}