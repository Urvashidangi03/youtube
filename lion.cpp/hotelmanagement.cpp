#include<iostream>
using namespace std;

int main(){
    int quant;
    int choice;
    //quantity
    int Qrooms=0,Qpasta=0,Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    //food itmes sold
    int Srooms=0,Spasta=0,Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
    //total price of item
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta:";
    cin>>Qpasta;
    cout<<"\n Quantity of burger:";
    cin>>Qburger;
    cout<<"\n Quantity of noodles:";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake:";
    cin>>Qshake;
    cout<<"\n Quantity of chicken:";
    cin>>Qchicken;

    m:     
    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please enter your choice:-";
    cin>>choice;

    switch (choice)
    {
    case 1:
    cout<<"\n\n Enter the number of rooms you want: ";
    cin>>quant;
    if(Qrooms-Srooms >=quant)
    {
        Srooms=Srooms+quant;
        Total_rooms = Total_rooms+quant*1200;
        cout<<"\n\n\t\t"<<quant<<"rooms have been alloted to you";
    }
    else{
        cout<<"\n\tonly"<<Qrooms-Srooms<<"Rooms are remaining in hotel";
    }
        break;
        case 2:
    cout<<"\n\n Enter the quantity of pasta: ";
    cin>>quant;
    if(Qpasta-Spasta >=quant)
    {
        Spasta=Spasta+quant;
        Total_pasta = Total_pasta+quant*300;
        cout<<"\n\n\t\t"<<quant<<"pasta is the order!";
    }
    else{
        cout<<"\n\tonly"<<Qrooms-Srooms<<"pasta is remaining in hotel";
    }
        break;
        case 3:
    cout<<"\n\n Enter the quantity of burger: ";
    cin>>quant;
    if(Qburger-Sburger >=quant)
    {
        Sburger=Sburger+quant;
        Total_burger = Total_burger+quant*250;
        cout<<"\n\n\t\t"<<quant<<"burger alloted to you";
    }
    else{
        cout<<"\n\tonly"<<Qburger-Sburger<<"burger remaining in hotel";
    }
        break;
        case 4:
    cout<<"\n\n Enter the quantity of noodles: ";
    cin>>quant;
    if(Qnoodles-Snoodles >=quant)
    {
        Snoodles=Snoodles+quant;
        Total_noodles = Total_noodles+quant*150;
        cout<<"\n\n\t\t"<<quant<<"noodles alloted to you";
    }
    else{
        cout<<"\n\tonly"<<Qnoodles-Snoodles<<"noodles remaining in hotel";
    }
        break;
        case 5:
    cout<<"\n\n Enter the quantity of shake you want: ";
    cin>>quant;
    if(Qshake-Sshake >=quant)
    {
        Sshake=Sshake+quant;
        Total_shake = Total_shake+quant*200;
        cout<<"\n\n\t\t"<<quant<<"shake alloted to you";
    }
    else{
        cout<<"\n\tonly"<<Qshake-Sshake<<"shake remaining in hotel";
    }
        break;
        case 6:
    cout<<"\n\n Enter the quantity of chicken you want: ";
    cin>>quant;
    if(Qchicken-Schicken >=quant)
    {
        Schicken=Schicken+quant;
        Total_chicken = Total_chicken+quant*1100;
        cout<<"\n\n\t\t"<<quant<<"chicken alloted to you";
    }
    else{
        cout<<"\n\tonly"<<Qchicken-Schicken<<"chicken remaining in hotel";
    }
        break;

    case 7:
    cout<<"\n\t\tDetails of sales and collection";
    cout<<"\n\n Number of rooms we have :"<<Qrooms;
    cout<<"\n\n Number of rooms we gave for rent :"<<Srooms;
    cout<<"\n\n Remaining rooms:"<<Qrooms-Srooms;
    cout<<"\n\n Total rooms collection for the day :"<<Total_rooms;

    cout<<"\n\n Number of pasta we have :"<<Qpasta;
    cout<<"\n\n Number of pasta we gave:"<<Spasta;
    cout<<"\n\n Remaining pasta:"<<Qpasta-Spasta;
    cout<<"\n\n Total pasta collection for the day :"<<Total_pasta;

    cout<<"\n\n Number of burger we have :"<<Qburger;
    cout<<"\n\n Number of burger we gave:"<<Sburger;
    cout<<"\n\n Remaining burger:"<<Qburger-Sburger;
    cout<<"\n\n Total burger collection for the day :"<<Total_burger;

    cout<<"\n\n Number of noodles we have :"<<Qnoodles;
    cout<<"\n\n Number of noodles we gave:"<<Snoodles;
    cout<<"\n\n Remaining noodles:"<<Qnoodles-Snoodles;
    cout<<"\n\n Total noodles collection for the day :"<<Total_noodles;

    cout<<"\n\n Number of shake we have :"<<Qshake;
    cout<<"\n\n Number of shake we gave:"<<Sshake;
    cout<<"\n\n Remaining shake:"<<Qshake-Sshake;
    cout<<"\n\n Total shake collection for the day :"<<Total_shake;

    cout<<"\n\n Number of chicken we have :"<<Qchicken;
    cout<<"\n\n Number of chicken we gave:"<<Schicken;
    cout<<"\n\n Remaining chicken:"<<Qchicken-Schicken;
    cout<<"\n\n Total chicken collection for the day :"<<Total_chicken;

    case 8:
      exit(0);
    default:
       cout<<"\n Please select the numbers mentioned above!!";
        break;
    }
    goto m;        //jump statement
}