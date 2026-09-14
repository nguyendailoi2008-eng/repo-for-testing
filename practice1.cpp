#include <iostream>
int main() {
    std::cout << "Hello, Friend!" << std::endl;
    using str_t = std::string;
    using num_t = int;
    str_t name;
    std::cout << "Enter your name: ";
    getline(std::cin >> std::ws, name);
    std::cout<< "enter age: ";
    num_t age;
    std::cin>> age;
    std::cout<< "Hello, " << name << " " << age << " years old." << std::endl;
    std::cout <<" How do you feel today? Great?" << std::endl;
    str_t feeling;
    std::cout << "Enter your feeling: ";
    getline(std::cin >> std::ws, feeling);
    if (feeling == "great") 
    {
         std::cout << "That's awesome! Keep up the positive vibes!" << std::endl;
         } 
        else 
           {
            std::cout << "I hope your day gets better!" << std::endl;
         }
  return 0;
}