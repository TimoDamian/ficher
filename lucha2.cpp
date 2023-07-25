#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string a;
    ofstream fich ("Pablo.txt");
    cout<<"ingrese una oracion";
    getline(cin,a);
    fich<<a;
}
