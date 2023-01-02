#include <iostream>
#include <exception>
#include "Figure.h"
#pragma once


class Exception : public std::domain_error {
	std::domain_error::domain_error;
};