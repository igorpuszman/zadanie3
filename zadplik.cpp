#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i=0
	string a;
	ifstream plik;
    plik.open("c:\\zadplik\\a.txt");  
    if(plik.good())  
     while(!plik.eof())  
                         {
                         plik>>t[i++] ; 
                         cout<<endl; 
                         }
    plik.close();
	int ilosc = i;
    {
    	ofstream plik2;
    	plik2.open("c:\\zadplik\\a.txt")
    	for (int j=ilosc-1; j>=0; j++)
    	{
    		plik2<<t[j];
		}
		plik2.close();
	}
   
	return 0;
