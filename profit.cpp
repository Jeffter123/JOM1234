#include<iostream>
#include<string>
using namespace std;
int main(){
    int b_price;
    int s_price;
    int profit;
    cout<<"Enter your buying price: "<<endl;
    cin>>b_price;
    cout<<"Enter your selling price: "<<endl;
    cin>>s_price;
    profit = s_price - b_price;
    cout<<"Your profit is: "<<profit<<endl;
}