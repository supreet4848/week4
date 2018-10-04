#include <iostream>
#include <string>
// Include the library that will allow you to convert from string to integer
#include <sstream>

int main() {
    int p,q,r,s;
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  std::cout <<"Enter any Three Numbers:" <<std::endl;// Ask the user for 3 integers as input
  std::cin >>p>>q>>r; // The user should enter all integers on the same line, pressing enter only once






 s=p*q*r; // Multiply the three integers





  std::cout<<"result of the Multiplication "<<s<< std::endl;// Output the result of the multiplication



  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

std::string waterbody;
std::string amphibian ;
std::string CreepingAnimal ;
std::getline (std::cin,waterbody);
std::cout<<"the name of waterbody:  "<<std::endl;
std::getline (std::cin,waterbody);
std::cout<<"name of amphibian:   "<<std::endl;
std::getline(std::cin,amphibian );
std::cout<<"Creeping Animal Name :   "<<std::endl;
std::getline(std::cin,CreepingAnimal);
 std::cout<<"An old silent "<<waterbody<<"..."<<std::endl;
 std::cout<<"A "<<amphibian<<" jumps into the pond,\nsplash! Silence again."<<std::endl;
std::cout<<"Autumn moonlight-\na "<<CreepingAnimal<<" digs silently\ninto the chestnut." <<std::endl ;
 std::cout<<"In the twilight rain\nthese brilliant-hued hibiscus -\nA lovely sunset."<<std::endl ;











  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
int myint;
  std::stringstream (myNumber)>>myint;

  
  std::cout<<myint << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}