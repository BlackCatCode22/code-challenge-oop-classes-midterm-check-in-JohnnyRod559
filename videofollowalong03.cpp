// videofollowalong03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <vector>
using namespace std;


class Animal {


private:
    string name = "";
    string species = "";
    static int numOfAnimals;

public:
    


    Animal(string theName, string theSpecies) {
        name = theName;
        species = theSpecies;
        
        numOfAnimals++;


    }
   
   string getAnimalName() {
       return name;

    }

   string getAnimalSpecies() {
       return species;

   }
    
   int getNumOfAnimals() {
     
       return numOfAnimals;
   }

   

    // need a static variable named: numOfAnimals 

    
};

class Hyena : public Animal {
public:
    // this is a constructor
    Hyena(string theName, string theSpecies) : Animal(theName, theSpecies) {
        name = theName;
        
    }


};

int main()

{
    Hyena myNewHyena;
    
    
    // should expect a name and species to be output
    Animal myNewAnimal01("Zig", " Hyena");

    Animal animal2("joe", "Hyena");

    cout << "this is " << Animal::getNumOfAnimals();

    // cant do this 
    // this will not work !
   // myNewAnimal01.name = "Name one";
   // myNewAnimal01.species = "Hyena";

    cout << " The name of this animal is: " << myNewAnimal01.getAnimalName();
    cout << "\n The species is: " << myNewAnimal01.getAnimalSpecies() ;

    

    
}
