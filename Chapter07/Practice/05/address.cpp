#include "address.h"
#include <string>

Address::Address(int parHouseNo, std::string parStreetName, std::string parCityName, std::string parStateName, int parZipcode)
: houseNo(parHouseNo), streetName(parStreetName), cityName(parCityName), stateName(parStateName), zipcode(parZipcode)
{
}

Address::~Address()
{
}

// getter
std::string Address::GetAddress() const
{
  std::string address;
  address = stateName + ", " + cityName + ", " + streetName + ", " + std::to_string(houseNo) + ", " + std::to_string(zipcode);

  return address;
}