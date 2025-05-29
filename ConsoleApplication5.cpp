#include <iostream>
#include <string>

using namespace std;

struct PersonalData {
    int age = NULL;
    string name = "";
    double isMale = false;
};

class Persona {

    public:
 
        Persona() {

        }

        void Console(PersonalData message) {
            //cout << "message2: " << message << endl;
            cout << "message1: " << message.name << endl;
            cout << "message1: " << message.age << endl;
            cout << "message1: " << message.isMale << endl;
        }

        PersonalData ParsedData(int age, string name, bool isMale) {

            PersonalData result;

            result.age = age;
            result.name = name;
            result.isMale = isMale;
            return result;
        }

};

void main() {

    Persona Persona1;
    Persona1.Console(Persona1.ParsedData(18, "Jessica", false));//comment

    Persona Persona2;
    Persona1.Console(Persona1.ParsedData(18, "John", true));
    Persona Persona3;
    Persona1.Console(Persona1.ParsedData(18, "Lev", true));
    Persona Persona4;
    Persona1.Console(Persona1.ParsedData(18, "Jager", true));

    PersonalData pesonalData = Persona1.ParsedData(13.9, "Jager", true);
    PersonalData pesonalData2 = Persona2.ParsedData(18, "Jager2", true);



    if (typeid(pesonalData.age) == typeid(int) && typeid(pesonalData2.age) == typeid(int)) {
        int summAge = pesonalData.age + pesonalData2.age;
        cout << "summ : " << summAge;
    }

    int summAge = pesonalData.age + pesonalData2.age;
    cout << "hi: ", typeid(summAge);




}




