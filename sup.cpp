#include <iostream>
using std::string;

class employoee {
private:    
    string name;
    string company;
    int age;

public:
    void intro(){
        std::cout << "Hi im " << name << age << std::endl;
    }

    void set(string NAME , int AGE){
        name = NAME;
        age = AGE;
        company =  "lex corp";
    }

//public:
        
};
int main() {
    employoee Lex;
    Lex.set("lex targaryens",19);
    Lex.intro();
    employoee Bob;
    Bob.set("bobby the great",18);
    Bob.intro();
    
    string xd ;
    std::cin >> xd;
}
