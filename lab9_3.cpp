#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;


int main(){
int N = 0;
float sum = 0;
float ans = 0;
float mean = 0;
float square = 0;
string score;
ifstream source("score.txt");
while (getline(source,score)){
    sum += atof(score.c_str());
    square += pow(atof(score.c_str()),2);
    N++;
}
cout<<"Number of data = "<< N<<"\n" ;
mean = mean+sum/N;
cout<<"Mean = "<< mean<<"\n";
cout<<"Standard deviation = "<<sqrt(square/N-pow(mean,2))<<"\n";
}



