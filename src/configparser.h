#include <iostream>
#include <string>
#include <list>

class ConfigParser
{
public:
	//ConfigParser();
	int loder(char* conf_filepath);
	//for single
	ConfigParser* instance();
	//operations
	int getJobNum();
	char getUrlSeed();
	int getDeep();
	int getLogLevel();
	char* getModulePath();
	list<string> getModuleName();
	list<string> getFileType();
private://for single
	ConfigParser();
	static ConfigParser* _self;
private:
	int job_num;
	char* seed;
	int deeps;
	int log_level;
	char* module_path;
	list<string> module_name;
	list<string> file_type;
};
