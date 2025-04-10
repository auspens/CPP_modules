#include "BitCoinExchange.hpp"

void BitCoinExchange::getDataBase(std::string filename, dataBaseType type){
	std::ifstream file(filename);
	if (!file)
		throw BCEException("Bad filename: " + filename);
	std::string line;
	std::getline(file, line); //skip first line
	while (std::getline(file, line)){
		if (line.empty())
			continue;
		try{
			parseLine(line, type);
		}
		catch (std::exception &e){
			std::cout << "Error: " << e.what() << ": " << line <<std::endl;
		}
	}
}

void BitCoinExchange::parseLine(std::string &line, dataBaseType type){
	std::istringstream stream(line);
	std::string time;
	std::string value;
	std::getline(stream, time, ',');
	std::getline(stream, value, ',');
	if (stream.peek() != std::char_traits<char>::eof())
		throw BCEException("More than two values on a row");
	std::time_t key = parseTime(time);
	float val = parseValue(value);
}

std::time_t BitCoinExchange::parseTime(std::string &line){
	std::istringstream stream(line);
	std::string yearString;
	std::string monthString;
	std::string dateString;
	std::getline(stream, yearString, '-');
	std::getline(stream, monthString, '-');
	std::getline(stream, dateString, '-');
	if (stream.peek() != std::char_traits<char>::eof())
		throw BCEException("Wrong date format");
	int year = stringToInt(yearString);
	int date = stringToInt(dateString);
	int month = stringToInt(monthString);
	
}

float BitCoinExchange::parseValue(std::string &line){
	std::istringstream stream(line);
	double value;
	stream >> value;
	if (stream.fail())
		throw (BCEException("Failed to parse value"));
	if (value < 0)
		throw (BCEException("Negative value"));
	if (value > std::numeric_limits<float>::max())
		throw (BCEException("number too big"));
	return static_cast<float>(value);
}

BitCoinExchange::BitCoinExchange(){}
BitCoinExchange::~BitCoinExchange(){}
BitCoinExchange::BitCoinExchange(const BitCoinExchange &src)
			:_rates(src._rates), _values(src._values){}
BitCoinExchange &BitCoinExchange::operator=(const BitCoinExchange &other){
	if (this != &other){
		_rates = other._rates;
		_values = other._values;
	}
	return *this;
}
BitCoinExchange::BCEException::BCEException (std::string error)
				:_error(error){}
BitCoinExchange::BCEException::~BCEException (){}
BitCoinExchange::BCEException::	BCEException()
				:_error("BCEException"){}
const char* BitCoinExchange::BCEException::what() const throw(){return _error.c_str();}