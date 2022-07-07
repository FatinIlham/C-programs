#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Winner{
    int code;
    void display(){
        cout<<"the winner is: "<<this->code<<endl;
    }
};
void displayall(struct Winner c[], int sze){
  for(int i =0;i<sze;i++){
    c[i].display();
  }
}
int main()
{
    struct Winner c[5];
    struct Winner ilham;
    ilham.code = 101102;
    struct Winner reza;
    reza.code= 101120;
    struct Winner shojib;
    shojib.code =101102;
    struct Winner oronno;
    oronno.code =100012;
    struct Winner shuvo;
    shuvo.code = 102342;

    c[0] = ilham;
    c[1] = reza;
    c[2] = shojib;
    c[3] = oronno;
    c[4] = shuvo;

    displayall(c,5);
}
