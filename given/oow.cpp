#include<iostream>
#include<vector>
#include <stdlib.h>//for color 
#include<iomanip>  // for setw()
#include<cstdlib> //for exiting program exist(0)  and color 
#include <locale> // for decimal in number (haven't use yet)
#include <map>

using namespace std;

//Global SKIP[DI]

const unsigned int  ticket_Price = 65000;
const unsigned int  Glove_price = 4000;

const int WIDTH = 20;

int vis_ong_hour,total_visitor=0,age,Quantity_Of_Glove  = 0;   
double payment, total_payment,total_glove_price,total_vat;
int payment_vat;

vector<int> ages;
map<int,int> ageCount;

void graph();
void DisplaySell();
void Menu();
void DisplayDis_and_Price();
void statistic(); //Displaying chart using (char(178)) as a bar graph  
void printReceipt();
void buyGlove();
void numOnly();// allow user to only enter number

//main
int main(){
    int choice;
    do
    {
    Menu(); // print main MENU
    cin>>choice;
    while (cin.fail()) { 
        Menu();
        cin >> vis_ong_hour;
         }
    

    switch(choice){
        case 1:
            DisplaySell();
            printReceipt();
            system("pause");


            break;
        case 2:
            DisplayDis_and_Price();
            break;
        case 3:
            statistic();
            system("pause");

            break;
        case 4:
            exit(0);
            break;

        default:
            cout << "Invaild Input!";
            break;
    } 
    } while (choice != 4);



    return 0;
}

// function Defintion

//MENU SECTION
void Menu(){

    // system("color 09");
    system("color 0B");


    cout <<"                              __________________________________"<<endl;
    cout <<"                             | 1.Make Sell                      |"<<endl;
    cout<<"                               __________________________________"<<endl;
    cout <<"                             | 2.Display item Price and Discount |"<<endl;
    cout<<"                               __________________________________"<<endl;
    cout <<"                             | 3.Show Sell Statistic            |"<<endl;
    cout<<"                               __________________________________"<<endl;
    cout <<"                             | 4.Exit Program                   |"<<endl;
    cout<<"                               __________________________________"<<endl;
    cout<<endl;
    cout<<"                                ________________ "<<endl;
    cout <<"                              | Input a Number: ";
}
void DisplaySell(){

        system("color 0F");

        cout <<"                             ================================ "<<endl;
        cout <<"                             |Wellcome to SunShine Snow World|"<<endl;
        cout <<"                             Enter the amount of visitors : ";
        cin >> vis_ong_hour;

        total_visitor += vis_ong_hour; // for drawgraph function inorder to avoid overload parameter 

       
        buyGlove();

        for(int i = 0 ; i < vis_ong_hour ; i++){
        cout<<endl;
        cout <<"                             Enter your age: ";
        cin >> age;
        //here
         //here


        ages.push_back(age);//using vector to store age input in ages
        ageCount[age]++; // if age have the same value store in map value =0 and then increment it by 1 each time it receive a value 


         if (vis_ong_hour == 3) {
            if (age<= 6) {
                double discountPrice = ticket_Price * 1; // 100%
                payment = ticket_Price - discountPrice;
                 cout <<setw(29)<< "Price for Person" << i + 1 << " : " << payment << " KHR" << endl;
                }
            else if (age <= 12) {
                double discountPrice = ticket_Price * 0.5; // 50%
                payment = ticket_Price - discountPrice;
                cout <<setw(29)<< "Price for Person" << i + 1 << " : " << payment << " KHR" << endl;
                }
            else if (age > 12 && age <= 26) {
                double discountPrice = ticket_Price * 0.1; // 10%
                payment = ticket_Price - discountPrice;
                cout <<setw(29)<< "Price for Person" << i + 1 << " : " << payment << " KHR" << endl;
                }
            else if (age>= 40) {
                double discountPrice = ticket_Price * 0.25; // 25%
                payment = ticket_Price - discountPrice;
                cout <<setw(29)<< "Price for Person" << i + 1 << " : " << payment << " KHR" << endl;
                }
        else {
                double discountPrice = ticket_Price * 0; // NO DISCOUNT
                payment = ticket_Price - discountPrice;
                cout<<setw(29) << "Price for Person" << i + 1 << " : " << payment << " KHR" << endl;
    }
}
        else {
            double discountPrice = ticket_Price * 0; // NO DISCOUNT
            payment = ticket_Price - discountPrice;
            cout <<setw(29)<< "Price for " << i + 1 << " : " << payment << " KHR" << endl;
            }
        total_payment += payment; // total payment after user enter their age 
        total_vat = (total_payment+total_glove_price);//payment
        payment_vat = total_payment + total_vat;//**sum up everything in one */
        
        
        }
        cout<<endl;
        cout<<endl;
            system("pause");

    }
void DisplayDis_and_Price(){
    // system("color 0F");
    system("color 0B");
    cout <<"Price of Items and Ticket                 |"<<endl;
    cout <<"Ticket Price = 65000KHR                   |"<<endl;
    cout <<"Glove  Price  = 4000KHR                   |"<<endl;
    cout <<"Discount Price                            |"<<endl;
    cout <<"Age Between 1 to  6   DISCOUNT 100%       |"<<endl;
    cout <<"Age Between 7 to  12  DISCOUNT 50%        |"<<endl;
    cout <<"Age Between 13 to 26  DISCOUNT 10%        |"<<endl;
    cout <<"Age Between 27 to 39  NO   DISCOUNT       |"<<endl;
    cout <<"Age Between   40 UP   DISCOUNT %25        |"<<endl;
    cout <<endl;
    cout <<endl;	
            system("pause");


}
void statistic(){
       //statistic algo
       //statistic algo
    cout << "*  Developed by [Songho]     *" << endl;
                    }




//feature
void buyGlove(){
    cout<<endl;
    cout<< "                             Do you need any Glove ? (y/n)";
    char gloves;
    cin >> gloves;
        

    if(gloves == 'y'|| gloves == 'Y' ){
        cout<<endl;
        cout << "                             How many Glove do you need ?: ";
        cin >> Quantity_Of_Glove;

            cout<<endl;
            cout << "                             The amount of gloves "<< Quantity_Of_Glove<< endl;
            cout<<endl;
    }
    else if (gloves == 'n' && 'N' ){
        cout<<endl;
        cout << "                             The amount of gloves = 0"<< endl;
        cout<<endl;

    }
    else {
        // system("color 0A");
        cout<<endl;
        cout << "                             Error, Invalid Input !  "<< endl;
        cout<<endl;
        // system("color 07");// else reset color to defualt 
    }
    total_glove_price =Quantity_Of_Glove * Glove_price;//calculate the total of glove price only if user is buying
}

void printReceipt(){
  
    cout<< vis_ong_hour<<endl;
    cout<< total_visitor<<endl;
    cout<< Quantity_Of_Glove << "  Payment: " << total_glove_price << " KHR" << endl;
    cout<< "                          |           Total Payment: "  << right << (total_payment + total_glove_price) << " KHR                 " << endl;


    }
