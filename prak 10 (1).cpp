//Nama : Durotun Nafisah A. A.
//NIM : 20051397041
//Kelas : D4 MI 2020A
//Praktikum 10 (1) 

#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
for(int i=0;i<20;i++){
 cout<<A[i]<<" ";
}
cout<<"Durotun Nafisah Amalia Ahli\n";
cout<<"20051397041\n";
cout<<"MI_A_2020\n";
cout<<"\nData yang ingin dicari : ";
cin>>c;
i=0;
posisi=0;
while(i<19 && A[i]!=c){
 i++;
}
if (A[i]!=c){
 cout<<"Maaf data yang dicari tidak ada";
}else if(posisi=i+1)
   cout<<"ditemukan pada posisi ke "<<posisi;
getch();
}
