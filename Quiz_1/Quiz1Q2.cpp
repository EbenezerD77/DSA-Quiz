#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


// QUIZ 1 QUESTION 2
// Abenezer Degife Yiriga
// ATE/2172/15
// Section 2

class Student{

    private:
    string name, ID;
    double GPA;

    public:


    void setName(string name){
        this->name = name;    
    }

    void setID(string ID){
        this->ID = ID;
    }

    void setGPA(double GPA){
        this->GPA = GPA;
    }



    void printInfo(){
        cout<<endl;
        cout<<"Student Information: "<<endl;
        cout<<"Name: "<< name<<endl;
        cout<<"ID: "<< ID<<endl;
        cout<<"GPA: "<< GPA<<endl;
        cout<<endl;


    }

};


int main(){

    Student student;

    while(true){
        cout<<"Enter name: ";
        string name;
        getline(cin, name);
        student.setName(name);

        cout<<"Enter ID: ";
        string id;
        getline(cin, id);
        student.setID(id);

        double gpa = 0;
        bool isValid = false;
        while(!(isValid)){
            cout<<"Enter GPA: ";
            if (cin>>gpa){
                if (gpa >= 0 && gpa <= 4){
                    isValid = true;
                }
                else{
                    cout<<"GPA must be between 0 and 4."<< endl;
                }
            }
            else{
                cout<<"Please enter a valid nubmer."<< endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

            }

        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        student.setGPA(gpa);

        student.printInfo();

        cout<<"Would you like to continue? (y/n) ";
        string userInput;
        getline(cin, userInput);
        if (userInput != "y" && userInput != "Y"){
            break;
        }

        
    }

    return 0;
}