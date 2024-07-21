#include <iostream>

using namespace std;

int main(){
   double num1,num2;
   //Prompt user for two numbers
   cout <<"Enter the first number: ";
   cin >> num1;

   cout <<"Enter the second number: ";
   cin >> num2;
   //Compare the two numbers
   int comparison;
   if (num1>num2){
    comparison = 1;
   } else if (num1 < num2){
    comparison = 2;
   } else {
    comparison = 3;
   }
   //Determine the maxixmum number using switchcase
   switch (comparison)
   {
   case 1:
    cout <<"The maximum number is: " << num1 << endl;
    break;
    case 2:
   cout <<"The maximum number is: " <<num2 << endl;
    break;
    case 3:
    cout << "Both numbers are equal." << endl;
    break;
    default:
    cout <<"An error occurred." << endl;
    break;
   }

return 0;

}