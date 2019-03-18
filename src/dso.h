#ifndef DSO_H_
#define DSO_H_
#include <stdio.h>
#include <map>
#include <string>

using namespace std;

#define MODULE_OK  0
#define MODULE_ERR 1

#define MODULE_MAHOR_VERSION 1
#define MODULE_SUB_VERSION   0

typedef struct Module{
	int version;
	int sub_ver;
	char *name;
	void (*init)(Module*);
	int (*handle)(void*);
}Module;

class DSO_Manager
{
public:
	int load(char* path,char* name);
	Module* getModule(char* name);
	~DSO_Manager();
private:
	map<string,Moduel*> Modules;
	 
};

class ModuleManager
{
 public:
  ModuleManager();
  ~ModuleManager();

  int load(string path,string name);//从编译号的模块动态输入
  MODULE* getModule(string);//从模块列表中找打需要的模块

 private:
  map<string,MODULE*> m_modules;//模块管理结构
};

struct htmlParserParam
{
  string url;//in
  list<string> urls;//out
};



#endif
