//Nama : Durotun Nafisah A. A.
//NIM : 20051397041
//Kelas : D4 MI 2020A
//Praktikum 6 (4)

#include <cstdlib>
#include <iostream>
 
using namespace std;
 
void balik(char *s){
     if(*s !='\0'){
           balik(&s[1]);
           cout<<s[0];
           }
           }
int main(){
    char *kata="ataD rutkurtS";
    balik(kata);
    cout<<endl;
    system("PAUSE");
    return 0;
}

