#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainMenu();
class Management{
    public:
       Management(){
        mainMenu();
       }
};
class Details{
    public:
    static string name,gender;
    int phonenumber;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information(){
       cout<<"\nEnter the customer id :";
       cin>>cId;
       cout<<"\nEnter the name :";
       cin>>name;
       cout<<"Enter the age :";
       cin>>age;
       cout<<"\nEnter the Address :";
       cin>>add;
       cout<<"\n Gender : ";
       cin>>gender;
       cout<<"Your details are saved with us!\n"<<endl;
    }
};
int Details::cId;
string Details::name;
string Details::gender;

class registration{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights(){
     string flightN[]={"Dubai","canada","UK","USA","Australia","Europe"};
     for(int a=0;a<6;a++){
        cout<<(a+1)<<".flight to\t"<<flightN[a]<<endl;
     }
     cout<<"\nWELCOME to the Airlines!!"<<endl;
     cout<<"press the number of the country you want to book the flight:";
     cin>>choice;

     switch(choice){
        case 1:
        {
            cout<<"______________Welcome to Dubai Airlines_____________\n"<<endl;
            cout<<"Your comfort is our priority,enjoy the journey!"<<endl;
            cout<<"Following are the flights:-\n"<<endl;
            cout<<"1.  DUB-433"<<endl;
            cout<<"\t 20-08-24  11:00AM  10hr  Rs.14,000"<<endl;
            cout<<"2.  DUB-432"<<endl;
            cout<<"\t 20-08-24  8:00AM  12hr  Rs.12,000"<<endl;
            cout<<"3.  DUB-435"<<endl;
            cout<<"\t 20-08-24  3:00PM  15hr  Rs.17,000"<<endl;

            cout<<"select the flight:-";
            cin>>choice1;

            if(choice1 ==1){
                charges = 14000;
                cout<<"you have sucesfully booked the flight DUB-433 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
            else if(choice1==2){
                charges = 12000;
                cout<<"you have sucesfully booked the flight DUB-432 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
             else if(choice1==3){
                charges = 17000;
                cout<<"you have sucesfully booked the flight DUB-435 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
            else{
                cout<<"Invalid input,shifting to the input"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the mainMenu:"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
        }
        case 2:{
            cout<<"______________Welcome to Canadian Airlines_____________\n"<<endl;
            cout<<"Your comfort is our priority,enjoy the journey!"<<endl;
            cout<<"Following are the flights:-\n"<<endl;
            cout<<"1.  CA-198"<<endl;
            cout<<"\t 20-08-24  11:00AM  9hr  Rs.10,000"<<endl;
            cout<<"2.  CA-205"<<endl;
            cout<<"\t 20-08-24  8:00AM  11hr  Rs.12,000"<<endl;
            cout<<"3.  CA-160"<<endl;
            cout<<"\t 20-08-24  2:00PM  15hr  Rs.9,000"<<endl;

            cout<<"select the flight:-";
            cin>>choice1;

            if(choice1 ==1){
                charges = 10000;
                cout<<"you have sucesfully booked the flight CA-198 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
            else if(choice1==2){
                charges = 12000;
                cout<<"you have sucesfully booked the flight CA-205 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
             else if(choice1==3){
                charges = 9000;
                cout<<"you have sucesfully booked the flight CA-160 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
            else{
                cout<<"Invalid input,shifting to the input"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the mainMenu:"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
        }
        case 3:
        {
            cout<<"______________Welcome to UK Airways_____________\n"<<endl;
            cout<<"Your comfort is our priority,enjoy the journey!"<<endl;
            cout<<"Following are the flights:-\n"<<endl;
            cout<<"1.  UK-798"<<endl;
            cout<<"\t 12-08-24  10:00AM  14hr  Rs.44,000"<<endl;
            
            cout<<"select the flight:-";
            cin>>choice1;

            if(choice1 ==1){
                charges = 44000;
                cout<<"you have sucesfully booked the flight UK-798 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
            else{
                cout<<"Invalid input,shifting to the input"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the mainMenu:"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
        }
        case 4:
        {
            cout<<"______________Welcome to USA Airways_____________\n"<<endl;
            cout<<"Your comfort is our priority,enjoy the journey!"<<endl;
            cout<<"Following are the flights:-\n"<<endl;
            cout<<"1.  US-554"<<endl;
            cout<<"\t 15-08-24  9:00AM  12hr  Rs.15,000"<<endl;
            cout<<"2.  UK-225"<<endl;
            cout<<"\t 08-08-24  3:00PM  11hr  Rs.18,000"<<endl;
            
            cout<<"select the flight:-";
            cin>>choice1;

            if(choice1 ==1){
                charges = 15000;
                cout<<"you have sucesfully booked the flight US-554 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
            else if(choice1==2){
                charges = 18000;
                cout<<"you have sucesfully booked the flight US-225 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
            else{
                cout<<"Invalid input,shifting to the input"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the mainMenu:"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
        }
        case 5:
        {
            cout<<"______________Welcome to Australia Airlines_____________\n"<<endl;
            cout<<"Your comfort is our priority,enjoy the journey!"<<endl;
            cout<<"Following are the flights:-\n"<<endl;
            cout<<"1.  AUS-112"<<endl;
            cout<<"\t 15-6-24  5:00AM  10hr  Rs.14,000"<<endl;
            cout<<"2.  AUS-322"<<endl;
            cout<<"\t 20-08-24  7:00PM  12hr  Rs.12,000"<<endl;
            cout<<"3.  AUS-541"<<endl;
            cout<<"\t 20-08-24  5:00PM  15hr  Rs.17,000"<<endl;
            cout<<"4.  AUS-685"<<endl;
            cout<<"\t 20-08-24  10:00PM  9hr  Rs.15,000"<<endl;


            cout<<"select the flight:-";
            cin>>choice1;

            if(choice1 ==1){
                charges = 14000;
                cout<<"you have sucesfully booked the flight AUS-112"<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
            else if(choice1==2){
                charges = 12000;
                cout<<"you have sucesfully booked the flight AUS-322 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
             else if(choice1==3){
                charges = 17000;
                cout<<"you have sucesfully booked the flight AUS-541 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
            else if(choice1==4){
                charges = 15000;
                cout<<"you have sucesfully booked the flight AUS-685 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
            else{
                cout<<"Invalid input,shifting to the input"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the mainMenu:"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
        }
        case 6 :
        {
            cout<<"______________Welcome to Europian Airlines_____________\n"<<endl;
            cout<<"Your comfort is our priority,enjoy the journey!"<<endl;
            cout<<"Following are the flights:-\n"<<endl;
            cout<<"1.  EUR-102"<<endl;
            cout<<"\t 17-6-24  5:00AM  10hr  Rs.44,000"<<endl;
            cout<<"2.  EUR-302"<<endl;
            cout<<"\t 25-08-24  7:00PM  21hr  Rs.42,000"<<endl;
            cout<<"3.  EUR-501"<<endl;
            cout<<"\t 28-08-24  5:00PM  25hr  Rs.27,000"<<endl;
            cout<<"4.  EUR-605"<<endl;
            cout<<"\t 30-09-24  10:00PM  22hr  Rs.35,000"<<endl;


            cout<<"select the flight:-";
            cin>>choice1;

            if(choice1 ==1){
                charges = 44000;
                cout<<"you have sucesfully booked the flight EUR-102"<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
            else if(choice1==2){
                charges = 42000;
                cout<<"you have sucesfully booked the flight EUR-302 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
             else if(choice1==3){
                charges = 27000;
                cout<<"you have sucesfully booked the flight EUR-501 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
            else if(choice1==4){
                charges = 35000;
                cout<<"you have sucesfully booked the flight EUR-605 "<<endl;
                cout<<"you can go back to menu & take the ticket!"<<endl;
            }
            else{
                cout<<"Invalid input,shifting to the input"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the mainMenu:"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            } 
        }
        default:{
            cout<<"Invalid input,shifting you to the main menu!"<<endl;
            mainMenu();
            break;
        }
     }
    }
};
float registration::charges;
int registration::choice;

class ticket : public registration,Details{
    public :
    void Bill(){
        string destination="";
        ofstream outf("records.txt");{
            outf<<"____________Vayu Airlines_____________"<<endl;
            outf<<"______________Ticket__________________"<<endl;
            outf<<"______________________________________"<<endl;

            outf<<"Customer ID:"<<Details::cId<<endl;
            outf<<"Customer Name:"<<Details::name<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"\tDescription"<<endl;

            if(registration::choice==1){
                destination="Dubai";
            }

            else if(registration::choice==2){
                destination="Canada";
            }

            else if(registration::choice==3){
                destination="UK";
            }

            else if(registration::choice==4){
                destination="USA";
            }

            else if(registration::choice==5){
                destination="Australia";
            }

            else if(registration::choice==6){
                destination="Europe";
            }
        outf<<"Destination\t\t"<<destination<<endl;
        outf<<"Flight cost :-\t\t"<<registration::charges;
        }
        outf.close();
    }
    void dispBill(){
        ifstream ifs("records.txt");
        {
            if(!ifs){
                cout<<"File error!!"<<endl;
            }
            while(!ifs.eof()){
                ifs.getline(arr, 100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};

void mainMenu(){
    int lchoices;
    int schoice;
    int back;

    cout<<"\t                 Vayu Airlines           \n"<<endl;
    cout<<"\t___________________Main Menu_______________"<<endl;
    cout<<"\t___________________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t"<<endl;

    cout<<"\t\t Press 1 to add Customer Details     \t"<<endl;
    cout<<"\t\t Press 2 for Flight Registration     \t"<<endl;
    cout<<"\t\t Press 3 for Ticket and Charges      \t"<<endl;
    cout<<"\t\t Press 4 to Exit                     \t"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t"<<endl;
    cout<<"\t___________________________________________________"<<endl;

    cout<<"Enter the choice:  ";
    cin>>lchoices;

    Details d;
    registration r;
    ticket t;

    switch(lchoices){
        case 1:
        {
            cout<<"______________Customer_______________\n"<<endl;
            d.information();
            cout<<"press any key to go to the Main Menu";
            cin>>back;

            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }
        case 2:
        {
            cout<<"_________Book a Flight using this system________\n"<<endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout<<"_______GET YOUR TICKET_______\n"<<endl;
            t.Bill();
            cout<<"Your ticket is printed,you can collect it\n"<<endl;
            cout<<"press 1 to display your ticket\n";
            cin>>back;

            if(back == 1){
                t.dispBill();
                cout<<"press any key to go back to main menu:";
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
                break;
            }
            case 4:
            {
                cout<<"\n\n\t____________THANK YOU!!_________"<<endl;
                break;
            }
            default:
            cout<<"Invalid input,please try again!\n"<<endl;
            mainMenu();
            break;
        }
    }
}
int main(){
    Management Mobj;
    return 0;
}
