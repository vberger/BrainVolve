#ifndef ALIFE_PARSER_HPP
#define ALIFE_PARSER_HPP

#include <string>
#include <utility>
#include <vector>

#include "neural/neuron.hpp"

/*
 * Checks if a genome is ine the correct alphabet :
 * alphanumerix or '-' or '+'
 */
bool is_valid_genom(std::string str);

/*
 * Returns a vector of (label, value) descritpion of neurons
 * defined in this genome. Assumes is_valid_genom(str) is true.
 * Undefined behaviour if this requirement is not met.
 */

std::vector<std::pair<std::string, unsigned int> > neurons_from_genome(std::string str);

#endif // ALIFE_PERSER_HPP