#include <iostream>
#include <string>
#include <sstream>
// Include the library that will allow you to convert from string to integer


int main()
{
 int a,b,c,d; /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
 std::cout <<"Enter Any Three Numbers:" <<std::endl; // Ask the user for 3 integers as input
 std::cin >>a>>b>>c; // The user should enter all integers on the same line, pressing enter only once






 d=a*b*c; // Multiply the three integers





 std::cout <<"Result of the multiplication= "<<d<< std::endl; // Output the result of the multiplication



  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html
using std::cout;
using std::cin;
using std::endl;
std::string summer;
std::string flowers ;
std::string colour ;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
cout<<"The name of the river :  ";
std::getline (cin,summer);
cout<<"The name of the flowers :  ";
std::getline (cin,flowers);
cout<<"The name of the colour :   ";
std::getline(cin,colour);
cout<<"       "<<endl;
cout<<"A "<<summer<<" river being crossed"<<endl;
cout<<"how pleasing"<<endl;
cout<<"with sandals in my hands!"<<endl;

cout<<"Light of the moon"<<endl;
cout<<"Moves west, "<<flowers<<" shadows"<<endl;
cout<<"Creep eastward."<<endl;

cout<<"In the moonlight,"<<endl;
cout<<"The "<<colour<<" and scent of the wisteria"<<endl;
cout<<"Seems far away."<<endl;











  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
 int x;
 std::stringstream(myNumber)>>x;


  
  std::cout <<" "<<x<<" :is an integer"; //Insert the integer before the text of this output

  return 0;
}