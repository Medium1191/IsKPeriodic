// IsKPeriodic.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

bool IsKPeriodic(const std::string& str, int k)
{
	if (str.size() % k != 0)
	{
		return false;
	}

	if (str.empty())
	{
		return false;
	}
	int rep = str.size()/k;
	for (int i=0; i<k; ++i)
	{
		for (int j=0; j<rep; ++j)
		{
			if (str[i] != str[i + j * k])
			{
				return false;
			}
			
		}
	}
	return true;
}

int main()
{
	std::string str1 = "abcabc";
	int k1 = 3;
	std::string str2 = "abcabca";
	int k2 = 3;
	std::string str3 = "abcabx";
	int k3 = 3;
	bool answer1 = IsKPeriodic(str1, k1);
	bool answer2 = IsKPeriodic(str2, k2);
	bool answer3 = IsKPeriodic(str3, k3);
}