#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stdlib.h>

using namespace std;

// int main() { // WITHOUT BUFFER 
//         int count = 0;
//         std::ios_base::sync_with_stdio(false);
//         for(int i = 1; i < 200000; i++)
//         {       
//                 cout << "Hello world!\n";
//                 count++;
//         }
//                 cout<<"Count:%d\n"<<count;
// return 0;
// }




int main() { // USING BUFFER 
        int count = 0;
        std::ios_base::sync_with_stdio(false);
        char buffer[1024];
        cout.rdbuf()->pubsetbuf(buffer, 1024);
        for(int i = 1; i < 200000; i++)
        {       
                cout << "Hello world!\n";
                count++;
        }
                cout<<"Count:%d\n"<<count;
 
return 0;

}