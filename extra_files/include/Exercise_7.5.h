#include<string>

#ifndef Excercise_7.4.h
#define Excercise_7.4.h

class Person
{
   std::string name;
   std::string address;
 public:
   auto get_name() const {return name;}
   auto get_address() const {return address;}
};

#endif
