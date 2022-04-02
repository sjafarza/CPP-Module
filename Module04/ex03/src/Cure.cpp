#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
  // std::cout << "> Cure : default ctor" << std::endl;
  return;
}

Cure::Cure(Cure const& src) : AMateria(src) {
  // std::cout << "> Cure : copy ctor" << std::endl;
  *this = src;
  return;
}

Cure::~Cure(void) {
  // std::cout << "> Cure : dtor" << std::endl;
  return;
}

Cure& Cure::operator=(Cure const& rhs) {
  if (this != &rhs) {
    this->_type = rhs._type;
  }
  return *this;
}

AMateria* Cure::clone(void) const { return new Cure(); }

void Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
  return;
}
