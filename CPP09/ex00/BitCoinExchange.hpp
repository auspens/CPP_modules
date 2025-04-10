#pragma once
#include <map>
#include <string>
#include <ctime>
#include <exception>
#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>

class BitCoinExchange{
	public:
		enum dataBaseType{
			RATES,
			VALUES
		};
		void getDataBase(std::string filename, dataBaseType type);
		void parseLine(std::string &line, dataBaseType type);
		float parseValue(std::string &str);
		time_t parseTime(std::string &str);


		BitCoinExchange();
		~BitCoinExchange();
		BitCoinExchange(const BitCoinExchange &src);
		BitCoinExchange &operator=(const BitCoinExchange &other);

		class BCEException : public std::exception{
			private:
				std::string _error;
			public:
				BCEException (std::string error);
				~BCEException ();
				BCEException();
				const char* what() const throw();
		};
	private:
		std::map<time_t, float> _rates;
		std::map<time_t, float> _values;
};