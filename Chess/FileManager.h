#pragma once
#include <fstream>
class FileManager
{
public:
	FileManager();
	~FileManager();

	void open();
	void close();
	bool isEmpty();

	void write(const std::string& data, const std::string& data2);
	bool read(std::string& data1, std::string& data2);

private:
	std::fstream stream;

};

