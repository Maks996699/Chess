#include "FileManager.h"

FileManager::FileManager()
{
}

FileManager::~FileManager()
{
}

void FileManager::open()
{
	stream.open("save.s", std::ios_base::out | std::ios_base::trunc);
}

void FileManager::close()
{
	stream.close();
}

bool FileManager::isEmpty()
{
	stream.open("save.s.txt", std::ios::in);
	long file_size = 0;
	stream.seekg(0, std::ios::end);
	file_size = stream.tellg();
	stream.close();
	if (file_size < 2)
	{
		return true;
	}
	return false;


}

void FileManager::write(const std::string& data1, const std::string& data2)
{
	stream << data1 << " " << data2 << std::endl;
}

bool FileManager::read(std::string& data1, std::string& data2)
{
	if (stream.eof())
	{
		return false;
	}
	stream >> data1 >> data2;
	return true;
}
