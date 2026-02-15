#include <iostream>
using namespace std;

	
	int add(int a,int b){
	return a+b;
}
     int subtract(int a, int b) {
     return a-b;
 }
 
     int multiply(int a,int b){
     return a*b;
 }
     int divide(double a, double b){
     return a/b ;
 }
     
     int main(){
     	int choice;
     	double num1, num2;
     	
     	cout << "1.Add\n";
     	cout << "2.Subtract\n";
     	cout << "3.Multiply\n";
     	cout << "4.Divide\n";
     	cout <<"Choose Operation: ";
     	cin >> choice;
     	
     	cout << "Enter two numbers:";
     	cin >> num1 >> num2;
     	
     	if(choice== 1)
     	cout << "Result:" << add(num1, num2);
     	else if(choice == 2)
     	cout << "Result:" << subtract(num1, num2);
     	else if(choice==3)
     	cout << "Result:" << multiply(num1, num2);
     	else if(choice==4)
     	cout << "Result:"  << divide(num1, num2);
     	else
     	cout << "Invalid choice";
     	
     	return 0;
	 }
     	
     	
     	
    
	 
