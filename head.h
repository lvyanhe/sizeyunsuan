#pragma once

//#ifndef PCH_H
#define PCH_H

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>
#include <fstream>

static std::string roundAny(float r, int precision) {
	std::stringstream buffer;
	buffer << std::fixed << std::setprecision(precision) << r;
	return buffer.str();
}
