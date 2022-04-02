#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : _type(type)
{
}

AMateria::AMateria(AMateria const& src) {
  // std::cout << " AMateria : copy ctor" << std::endl;
  *this = src;
  return;
}

AMateria::~AMateria(void) {
  // std::cout << "AMateria : dtor" << std::endl;
  return;
}

AMateria& AMateria::operator=(AMateria const& rhs) {
  if (this != &rhs) {
    this->_type = rhs._type;
  }
  return *this;
}

std::string const& AMateria::getType(void) const { return this->_type; }

void AMateria::use(ICharacter& target) {
  std::cout << "Use undefined materia on " << target.getName() << std::endl;
  return;
}
