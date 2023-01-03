#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;
int main(){
    ifstream source;
    source.open("score.txt");
    string numline;
    double amount;
    double total;
    double totalfordev;
    while(getline(source,numline)){
        total += atof(numline.c_str());
        totalfordev += pow(atof(numline.c_str()),2);
        amount++;
    }
    double Mean = total/amount;
    double deviation = sqrt((totalfordev/amount)-(pow(Mean,2)));
    cout << "Number of data = " << amount << "\n";
    cout << setprecision(3);
    cout << "Mean = " << Mean << "\n";
    cout << "Standard deviation = " << deviation  << "\n";
return 0;
}