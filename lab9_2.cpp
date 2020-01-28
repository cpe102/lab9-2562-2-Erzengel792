#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream cheerbook_copy;
    cheerbook_copy.open("cheerbook_copy.txt");
    cheerbook_copy << "-------------------- SOTUS ---------------------"<<"\n";
    ifstream source;
    source.open("cheerbook.txt");
    string textline;
    bool havetext;
    havetext = getline(source, textline);
    while (havetext)
    {
        cheerbook_copy<< textline <<"\n";
        havetext = getline(source, textline); 
    }
    cheerbook_copy << "-------------------- SOTUS ---------------------";
    cheerbook_copy.close();
   

}

