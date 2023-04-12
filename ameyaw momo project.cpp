#include <iostream>
using namespace std;
int main(){
    float score,b,km,B;
    int num1,num2;
    int pin=0000;//Default Pin
    int balance=1000;//Default balance
    cout<<"             AUTHENTICATION\n";
    cout<<" Enter Default Pin For Authentication\n";
    cin>>pin;
    if(pin!=0000)
	{
    cout<<" Incorrect pin; 2nd attempt\n";
    cin>>pin;}
    if(pin!=0000){
	cout<<" Incorrect pin; 3rd attempt\n";
	cin>>pin;}
	if(pin!=0000){
    {return 0;}
}
    else if (pin==0000){
    cout<<"   WELCOME TO MTN MOMO\n";
    cout<<"			MENU\n";   
    cout<<" 1. Transfer Money\n";
    cout<<" 2. Allow Cash Out\n";
    cout<<" 3. Check Balance\n";
    cout<<" 4. Resetting/Change Pin\n";
    cout<<" Choose From Menu Options:\n";}
    cin>>score;
    if(score==1) {
	cout<<"  Transfer Money\n";
    cout<<"1. MTN\n";
    cout<<"2. OTHER NETWORK\n";
    cout<<"  Select Network\n";
    cin>>B;
    if(B==1)
    {cout<<" Enter Momo Number\n";
    cin>>num1;
    cout<<"Confirm number\n";
    cin>>num2;
	if(num2!=num1){
	cout<<"Number don't match'"<<endl;
	cout<<" Try again another time"<<endl;
	return 0;}
	}
    else if(B==2)
    {cout<<" Choose Network by entering Number\n";
    cout<<"Enter Number\n";
    cin>>num1;
    cout<<"confirm Number\n";
    cin>>num1;
	if(num2!=num1){
	cout<<"Number don't match'"<<endl;
	cout<<" Try again another time"<<endl;
	return 0;}
	}
    {
    cout<<" Enter Amount\n";
    cin>>b;}
    {
    cout<<" You have choose to send an amount of "<<b <<"ghc to "<<num1;
    cout <<" Enter Momo Pin To Confirm\n";}
    cin>>pin;
    //this line is a single line comment
    //Welcome user comment
    printf("You have successfully transfer an amount of ");
    cout<<b <<"ghc to " <<num1 <<endl;
    if(b<=balance)
    balance-=b;
    cout<<"Your New balamce is:"<<balance<<endl;}
    else if(b>=balance)
	{
    cout<<" Insufficient balance to complete transaction\n";
	}
    if(score==2){
    cout<<"1. Allow Cash Out\n";
    cin>>km;
    cout<<" Cash Out Is Allowed\n";
	}
    if(score==3){
    cout<<" Check Balance\n";
    cout<<" Enter Your Pin\n";
    cin>>pin;
    if(pin!=0000){
    cout<<" Incorrect pin.\n";
    cout<<"Try again next time.\n";
    cout<<"Thank you for using MTN Momo\n";
	return 0;}
    cout<<" Your balance is 1,000\n";
	}
    if(score==4){
    cout<<"1. Change Pin\n";
    cout<<"2. Reset Pin\n";
    cin>>km;
    if(km==1){
    cout<<" Enter Default Pin:";
    cin>>pin;
    cout<<" Enter New Pin:";
    cin>>pin;
    cout<<" You have successfully change your Momo pin\n";}
    else if(km==2){
    cout<<"1. Reset Pin\n";
    cin>>km;
    cout<<" You have successfully Reset your pin\n";}
}
    cout<<"Thank you for using MTN Momo\n";
    cout<<" We dey for you\n";
    cout<<"\nMTN:WELCOME TO THE NEW WORLD"; 
}