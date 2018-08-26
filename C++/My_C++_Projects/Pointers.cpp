#include <iostream>
using namespace std;

int main(){ // UNDER CONSTRUCTION




} 


class one{
void pointer_basics() //------------------------------------- POINTER BASICS-----------------------------
{

cout<<"\n\n";
  int a=5;//variables
  int b=18;//variables
//  cout<<"use of & operator"<<&a<<endl;


int *sp=&a; //pointer storing location of var a (init with * operator)
int *dp=&b; //pointer storing location of var b (init with * operator)

cout<<"location : "<<sp<<"\t"<<dp<<"\n\n"; //usage of sp and dp pointers

cout<<"value : "<<*sp<<"\t"<<*dp<<"\n\n"; // usage of sp and dp pointers with * operator

// cout<<sp<<endl;
// if(sp==&a){ cout<<"true"<<endl;} //checking values wrt * and & operator

*sp += *dp;

cout<<"location "<<*sp<<"\n\n";
cout<<"value "<<sp<<"\n\n";



}

};

class two{
void dynamic_memory(){ //---------------------------------------- DYNAMIC MEMORY--------------------------------------



    // int *p=new int; // requesting new memory
    // *p=5;// allocation
    // cout<<*p<<endl;
    // delete p; //deallocation of pointers


    //-------------------end workspace 1---------------------
    
    // int *pt=new int;  //dangling pointer pointing to non exixtent momory
    // *pt=NULL;
    // cout<<*pt<<endl;
    
     //-------------------end workspace 2---------------------

}
};

class three{
//----------------------------------------------PASSING AS POINTER-----------------------------------------
void pass_pointer_1(){
int var=20;

int pass_pointer_2(var); // pass by value
pass_pointer_2(&var);//pass by reference

}
pass_pointer_2(int var){ 

cout << var << endl;

}
};











