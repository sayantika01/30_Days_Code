#include<iostream>
using namespace std;

class Employee{
    int Id;
    static int count;
public:
    void setData(void){
        cout<<"Enter the Id"<<endl;
        cin>>Id;
        count++;
 }
 void getData(void){
    cout<<"The Id of the employee is "<<Id<<" and this is employee number"<< count<<endl;
 }
};
int Employee::count;
int main(){
    Employee Sayantika, Arkaprabha,Subho, Diya;
    Sayantika.setData();
    Sayantika.getData();

    Arkaprabha.setData();
    Arkaprabha.getData();

    Subho.setData();
    Subho.getData();

    Diya.setData();
    Diya.getData();

    return 0;
}