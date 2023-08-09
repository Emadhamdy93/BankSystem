#include "Util.h"
namespace Util {
	bool isAlphabetic(const std::string value)
	{
		for (auto s : value)
		{
			if (!isalpha(s))
				return false;
		}
		return true;
	}
}