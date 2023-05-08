#include<iostream>
using namespace std;

class Silver{
public:
    int creditLimit;
    int interestLimit;
    Silver(int creditLimit, int interestLimit) {
        this->creditLimit = creditLimit;
        this->interestLimit = interestLimit;
    }
    void display() {
        cout << "Silver card comes with credit limit: " << creditLimit << " and Interest Rate: " << interestLimit << "%" << endl;
    }    
};

class Gold : public Silver{
public:
    int discount;
    Gold(int creditLimit, int interestLimit, int discount) : Silver(creditLimit, interestLimit) {
        this->discount = discount;
    }
    void display() {
        cout << "Gold card comes with credit limit: " << creditLimit << ", Interest Rate: " << interestLimit << "%, and Discount: " << discount << "%" << endl;
    }    
};

class Platinum : public Gold{
public:
    int cashBack;
    Platinum(int creditLimit, int interestLimit, int discount, int cashBack) : Gold(creditLimit, interestLimit, discount){
        this->cashBack = cashBack;
    }
    void display() {
        cout << "Platinum card comes with credit limit: " << creditLimit << ", Interest Rate: " << interestLimit << "%, Discount: " << discount << "%, and Cashback: " << cashBack << "%" << endl;
    }
};

int main() {
    int choice;
    while(1){
        cout << "\t\t1. Silver" << endl;
        cout << "\t\t2. Gold" << endl;
        cout << "\t\t3. Platinum" << endl;
        cout << "\t\t4. Exit" << endl;
        cout << "\tChoose : ";
        cin >> choice;
        switch(choice){
        case 1:
            {
                Silver silver(100000, 5);
                silver.display();
                break;
            }
        case 2:
            {
                Gold gold(50000, 5, 10);
                gold.display();
                break;
            }
        case 3:
            {
                Platinum platinum(1000000, 3, 15, 5);
                platinum.display();
                break;
            }
        case 4:
            exit(0);
        }
    }
    return 0;
}
