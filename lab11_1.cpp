#include<iostream>
using namespace std;

int main(){
	int count[5] = {};
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	int students = 0;
	do{
		cout << "Student [" << students + 1 << "]: ";
		char grade;
		cin >> grade;
		if(grade == '0'){
			break;
		}else if(grade == 'A'){
			count[0]++;
			students++;
		}else if(grade == 'B'){
			count[1]++;
			students++;
		}else if(grade == 'C'){
			count[2]++;
			students++;
		}else if(grade == 'D'){
			count[3]++;
			students++;
		}else if(grade == 'F'){
			count[4]++;
			students++;
		}else{
			cout << "Wrong input. Please input again.\n";
			}
	}while(2);
	
	
	cout << "In total " << students << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	
	return 0;
}
