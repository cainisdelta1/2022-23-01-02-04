#include <iostream>

int main() {
  int age = 20;

  //if, else, if/else
  if (age < 18)
  {
    std::cout << "You're under 18" << std::endl;
  }
  else if (age >= 18 && age <= 22)
  {
    std::cout << "Are you at university" << std::endl;
  }
  else if (age > 22 && age <= 65)
  {
    std::cout << "Are you employed?" << std::endl;
  }
  else 
  {
    std::cout << "Are you enjoying retirement?" << std::endl;
  }

  int day = 0;

  //switch
  switch (day)
    {
      case(0):
        std::cout << "Sunday" << std::endl;
      case(1):
        std::cout << "Monday" << std::endl;
      case(2):
        std::cout << "Tuesday" << std::endl;
      case(3):
        std::cout << "Wednesday" << std::endl;
      case(4):
        std::cout << "Thursday" << std::endl;
      case(5):
        std::cout << "Friday" << std::endl;
      case(6):
        std::cout << "Saturday" << std::endl;
        break;
      default:
        std::cout << "Error! Invalid Day Number!" << std::endl;
    }

  //ternary operator   (conditional) ? (true) : (false)
  int status = 0; // can only be 0 or 1
  int statusCode = (status == 0) ? 0 : 1;
  std::cout << "status code is " << statusCode << std::endl;

  return 0;
}