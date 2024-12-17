#include <cmath>     // std::abs, std::sqrt, std::pow
#include <cstdlib>   // std::srand, std::rand
#include <ctime>     // std::time
#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
  std::srand(std::time(0));  // seeding our random number generator

  int user_input = 0;
  int num1;
  int num2;
  int numerator;
  int denominator;
  while (user_input != 99)
  {
    std::cout << "Welcome to C++ Calculator!  Choose an option below!\n"
              << "0. Roll a dice\n"        
              << "1. Add\n"
              << "2. Subtract\n"
              << "3. Multiply\n"
              << "4. Divide\n"
              << "5. Square Root\n"
              << "6. Square \n"
              << "7. Irrational Square Root \n"
              << "99. Quit\n\n> ";

    std::cin >> user_input;
    
    // implement calculator below
    if (user_input == 0)
    {
      int random_number = (std::rand() % 6) + 1;  // random numbers between 1 and 6
      std::cout << "You rolled a " << random_number << std::endl << std::endl;
    }
    else
    {
      if (user_input == 1)
      {
        std::cout << "Enter two numbers with a space in between (add)\n";
        std::cin >> num1 >> num2;
        std::cout << "Their sum is " << (num1 + num2) << std::endl << std::endl;
      }
      else
      {
        if (user_input == 2)
        {
        std::cout << "Enter two numbers with a space in between (sub)" << std::endl;
        std::cin >> num1 >> num2;
        std::cout << "Their difference is " << (num1 - num2) << std::endl << std::endl;
        }
        else
        {
          if (user_input == 3)
          {
            std::cout << "Enter two numbers with a space in between (mult)" << std::endl;
            std::cin >> num1 >> num2;
            std::cout << "Their product is " << (num1 * num2) << std::endl << std::endl;
          }
          else
          {
            if (user_input == 4)
            {
              std::cout << "Enter two numbers with a space in between (div)" << std::endl;
              std::cin >> numerator >> denominator;
              if (denominator == 0)
              {
                std::cout << "DIVIDE BY 0 ERROR" << std::endl << std::endl;
              }
              else
              { 
                std::cout << "Their quotient is " << (numerator / denominator) << std::endl << std::endl;
              }
            }
            else 
            {
              if (user_input == 5)
              {
                std::cout << "Enter one number with a space in between (sqrt)" << std::endl;
                std::cin >> num1;
                if (num1 < 0)
                {
                  std::cout << "ERROR cannot square root negative number." << std::endl << std::endl;
                }
                else
                {
                  std::cout << "The square root is " << sqrt(num1) << std::endl << std::endl;
                }
              }
              else
              {
                if (user_input == 6)
                {
                  std::cout << "Enter one number (sq)" << std::endl;
                  std::cin >> num1;
                  if (num1 >= 0)
                    {
                      std::cout << "The square is " << num1*num1 << std::endl << std::endl;       
                    }
                  else
                  { 
                    std::cout << "The square is " << num1*num1*-1 << std::endl << std::endl;
                  }           
                }
                else
                {
                  if (user_input == 7)
                  {
                    std::cout << "Enter one number (rsqrt)" << std::endl;
                    std::cin >> num1;
                    if (num1 >=0)
                    {
                      std::cout << "The square root is " << sqrt(num1) << std::endl << std::endl;
                    }
                    else
                    {
                      std::cout << "The irrational square root is " << sqrt(num1*-1) << "i" << std::endl << std::endl;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
