#include <string>

#ifndef ADDRESS_H
#define ADDRESS_H

class Address
{
  private:
    int houseNo;
    std::string streetName;
    std::string cityName;
    std::string stateName;
    int zipcode;
  public:
    // 생성자 & 소멸자
    Address(int parHouseNo, std::string parStreetName, std::string parCityName, std::string parStateName, int parZipcode);
    ~Address();

    // getter
    std::string GetAddress() const;
};

#endif