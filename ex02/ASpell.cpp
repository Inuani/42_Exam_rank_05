#include "ASpell.hpp"
#include <iostream>
#include "ATarget.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const std::string& name, const std::string& effects) : _name(name), _effects(effects) {
}

ASpell::~ASpell() {}

ASpell::ASpell(const ASpell& src) {
	*this = src;
}

ASpell&	ASpell::operator=(const ASpell& rhs) {
	_name = rhs._name;
	_effects = rhs._effects;
	return *this;
}

const std::string&	ASpell::getName() const {
	return _name;
}

const std::string&	ASpell::getEffects() const {
	return _effects;
}

void	ASpell::launch(const ATarget& target) const {
	target.getHitBySpell(*this);
}
