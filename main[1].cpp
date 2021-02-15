#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Classhw(char, ofstream&);
char translation(char);
void WriteTranslatedChar( char, ofstream&);
int main() {
 
 char orginal;
 string translated;
 string infile;
ifstream fin;
ofstream out;
out.open("output.rot13");
cout << "Enter the name of the file" <<endl;
cin  >> infile;

fin.open("infile.txt");

getline(fin,infile);
//cout << infile.length();
int size = infile.length();
for (int i = 0; i < size-1 ; i++)
{
  

  translated[i] = infile[i];

char orignal = translated[i];
char variable = translation(orignal);
translated[i] = variable; 
 cout << translated << endl;
   
WriteTranslatedChar(translated[i], out);
//myFile_Handler << "This is the second line of the file. " << endl;
   
}




fin.close(); 
  out.close();
 /* 1 input file
    2 calculation funtion
    3 print out funtion
*/ 
return 0;
}

char translation(char x){
/*
  1 is it not a space?
  2 is it less then n
  3 is it less then a
  4 is it less then N 
  5 is it less then A 
  */ 
  
  if ( x != ' ')
  {
    if ( x >= 'n' )
  {
    return  x = x - 13; 
  }
        else if ( x >= 'a' )
    {
        return  x = x + 13; 
    }
         else if ( x >= 'N' )
    {
        return  x = x - 13; 
    }
           else if ( x >= 'A' )
    {
        return  x = x + 13; 
    }
  }
    else {
      return x; 
    }
  
}
void WriteTranslatedChar(char x, ofstream& out){

  out << x;
}