#include <string>


using namespace std;

typedef struct stru_url
{
	string url;
	string protocal;
	string sitename;
	string path;
	string filename;
	int state;
	int deep;
	string filetype;
}URL;

class Url
{
public:
	Url(string url_str);	//构造函数
	int parseUrl();		//解析url，并填充内部URL结构
	struct str_url* getUrlData();//获得URL数据描述结构
private:
	struct stru_url m_url;

};
