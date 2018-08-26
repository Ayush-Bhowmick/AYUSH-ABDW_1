
# ***C++ PROGRAMMING XX***


## GENERAL INFO AND TRICKS

- String input via char array 
    ```
    char filename[100];
    cout << "Enter file name to compile ";
    cin.getline(filename, 100);
    printf(file,100);

    ```
- `exit(EXIT_FAILURE/SUCCESS)`
- `exit(0)` - termination of program execution 
- `a=a+b-(b=a)` easy way if swapping two elements
- Using `auto` datatype the datatype of the varialble is determined during compilation
- 

----------------

## COMPILE AND OUTPUT A C++ FILE IN MAC
- `g++ -o $output_name $file_name.cpp`
-  or
     ```
    g++ $file_name.cpp 
    ./a.out
    ```
---------------

## View hexadecimal of a file
- `Xxd -b $file.cpp`

---------------
## I/O IN C++
- cin 
- cout
- NOTE: `cin` and `cout` are streams unlike `getline(cin,$var)` which is a function using stream cin as argument.
- `getline(cin,$var)` -  which is a function using stream cin as argument
- scanf
- printf
- clog 
- cerr
- std::cout
- std::cin
- 

- **stringstream() -**
The standard header `<sstream>` defines a type called stringstream that allows a **string to be treated as a stream**, and thus allowing **extraction or insertion operations from/to strings in the same way as they are performed on cin and cout**. 
- stringstrem()-
```
    #include <iostream>
    #include <string>
    #include <sstream>
    using namespace std;

    int main ()
    {
    string mystr;
    float price=0;
    int quantity=0;

    cout << "Enter price: ";
    getline (cin,mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline (cin,mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << endl;
    return 0;
    }
```
- http://www.cplusplus.com/doc/tutorial/basic_io/ 
- 



## System():-

 - `System("bash command")` // bash commands 
 - https://www.geeksforgeeks.org/system-call-in-c/
 - 
 - EXAMPLE 1 :-
     ```
     /* system example : DIR */
    #include <stdio.h>      /* printf */
    #include <stdlib.h>     /* system, NULL, EXIT_FAILURE */

    int main ()
    {
    int i;
    printf ("Checking if processor is available...");
    if (system(NULL)) puts ("Ok");
        else exit (EXIT_FAILURE);
    printf ("Executing command DIR...\n");
    i=system ("dir");
    printf ("The value returned was: %d.\n",i);
    return 0;
    }
    ```

---------------

## C++ header files
- stdio
- iostream
- string
 iomanip
- stdlib
- cstdlib
- math
- ctime
- conio
- process
- fstream
- sstream



---------------


## Pointers 

- Note that ` ap=&a;` id not possible, instead use ` &ap=&a;`

-----------------

## DATA BUFFER 
- Buffer is a generic term that refers to a block of memory that serves as a temporary placeholder.eg RAM
- Because writing data to a buffer is much faster than a direct operation
- used in moving data around
- https://www.geeksforgeeks.org/clearing-the-input-buffer-in-cc/ 
- https://stackoverflow.com/questions/5112992/why-is-buffering-in-c-important -- Cool 
- buffer in c++ 
    ```
    char* buffer = new char[length];
    delete[ ] buffer; // to flush the buffer
    ```
- buffer 2
    ```
    #include <algorithm>
    #include <fstream>
    #include <iostream>
    #include <string>
    using namespace std;

    int main()
    {
    // This is where we'll put the stuff we read from file
    char buffer[ 81 ];

    // Here's our file
    ifstream file( "80-chars.txt" );

    // Fill the buffer with zeros (char strings must be null-terminated)
    fill_n( buffer, 81, '\0' );

    // Read as many as 80 bytes (chars) from the file and stick them in our array
    file.read( buffer, 80 );

    file.close();

    // Convert that char array into a STL string, and show the user what we got.
    string s( buffer );
    cout << s << endl;

    return 0;
    }
    ```
  
-----------------------

## ACCESING MEMBER FUNCTION OR VAR OF AN OBJECT

1. For example: with a regular variable or reference, you use the "`.`" operator to access member functions or member variables.
    ```
    td::string s = "abc";
    std::cout << s.length() << std::endl;
    ```
2. Accessing through **Pointers** `->` operator
    ```
    std::string* s = new std::string("abc");
    std::cout << s->length() << std::endl;
    ```

-----------------