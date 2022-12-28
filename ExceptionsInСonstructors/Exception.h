#include <iostream>

class Exception : public std::domain_error {
	std::domain_error::domain_error;
};