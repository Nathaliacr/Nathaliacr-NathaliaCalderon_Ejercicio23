#include <fstream>
#include <iostream>
using namespace std;
 
void leer(string filename);

int main () {
  string filename1;
  string filename2;
  filename1 = "valores_x.txt";
  filename2 = "valores_y.txt";
  leer(filename1);
  leer(filename2);

  return 0;
}

void leer(string filename){
  ifstream infile; 
  string line;

  infile.open(filename); 
  
  cout << "Leyendo de " << filename << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    getline(infile, line);
  }

  infile.close();
}

