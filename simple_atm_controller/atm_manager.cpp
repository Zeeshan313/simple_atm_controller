// Online C++ compiler to run C++ program online
#include <iostream> 
#include <map>
#include <string> 
#include <algorithm>

using namespace std; 

bool isinsertedcard = false; 
bool pin_entered;

struct AccountData {
    std::string name;
    double balance;
};

class Usersdetails{
 
 private: 
  std::map<std::string, AccountData> Accdetails; 

 string current_Account; 


 public: 

  // AccountData  accholder1 = {"Zeeshan Javed", 50000.0};
   //AccountData  accholder2 = {"Assad Wadood", 30000.0};
   string acc_holder_name = "Zeeshan Javed"; 
   double balance =  50000.0; 
   string pasword1 = "1991";
   string pasword2 = "1990"; 


};


void card_inserted(){

 if(!isinsertedcard)
   {
    cout << " card Inserted: Please proceed with the next operation" << endl; 
    isinsertedcard = true; 
   }
  else
   {
        cout << " Card already inserted. Please remove the card and try again:  Thank you " << endl; 

   }

}

void enter_pin (string& InputStr) {
   
  Usersdetails user;  
  if (card_inserted && !pin_entered) {
      int p1 = stoi(InputStr); 
      int p2 = stoi(user.pasword1); 
      int p3 = stoi(user.pasword2); 
      
      if (p1==p2) {
      cout<<"Pasword accepted.." <<endl; 
      pin_entered = true; 
      }
    
    else {

        cout << "Invalid Pin: Please re-enter your PIN." << endl; 
       } 
    
  }
     
     else{
         cout<<"Please Insert the card ......." <<endl;
     }


}


void check_balance() {
    
        Usersdetails user;  
        std::cout << "Your current balance is: $" << user.balance << std::endl;
    }


  void deposit(double amount) {
      
        Usersdetails user;  
        user.balance += amount;
        std::cout << "Deposited $" << amount << " successfully." << std::endl;
        std::cout << "Your new balance is: $" << user.balance << std::endl;

   }

 void withdraw(double amount) {
        
        Usersdetails user;  

        if (amount <= user.balance) {
            user.balance -= amount;
            std::cout << "Withdrawn $" << amount << " successfully." << std::endl;
            std::cout << "Your new balance is: $" << user.balance << std::endl;
        } else {
            std::cout << "Insufficient funds." << std::endl;
        }
    }

void ejectcard() {
    
      isinsertedcard = false;
      pin_entered = false;
      std::cout << "Card ejected. Thank you for using the ATM!" << std::endl;
    
    
    return; 
}


 void chooseacc() {
     Usersdetails user;  
     
     
    if (card_inserted && pin_entered) { 
         std::cout << "Welcome, " << user.acc_holder_name<< "!" << std::endl;
         std::cout << "1. Check Balance" << std::endl;
         std::cout << "2. Deposit" << std::endl;
         std::cout << "3. Withdraw" << std::endl;
         std::cout << "4. eject card" << std::endl;

         int choice;
         std::cout << "Enter the number corresponding to your choice: ";
         std::cin >> choice;
       
       switch (choice) {
                case 1:
                    check_balance();
                    break;
                case 2:
                    double amount;
                    std::cout << "Enter the amount to deposit: $";
                    std::cin >> amount;
                    deposit(amount);
                    break;
                case 3:
                    std::cout << "Enter the amount to withdraw: $";
                    std::cin >> amount;
                    withdraw(amount);
                    break;
                default:
                    std::cout << "Ejecting card: Please Wait." << std::endl;
                    ejectcard(); 
                    break;
            }
        } else {
            std::cout << "Please insert the card and enter PIN first." << std::endl;
        

    
    }

    
    
    return; 
}


int main() {



    cout << "This is dummy atm machine: Please insert card...." << endl;
    card_inserted();
   
    string InputStr; 
    cout << "Please enter your pin carefully.." << endl;
    cin >> InputStr; 
    enter_pin(InputStr); 
   
    cout<<" Please select your account with account title.../" << endl;
    
    chooseacc();
    
  //take input from the users
    cout<<"Thank you for using ATM machine: " <<endl; 

    return 0; 
}
