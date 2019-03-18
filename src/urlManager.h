#include <stdio.h>
#include <list>
#include <map>
#include <string>


using namespace std;

class UmlManager
{
public://外部接口
	int addUrl(string urlStr);//添加一个全新的url加入到list and queue中，同时生存索引
	int addUrlList(list<string> urlStrs);//批量添加
	URL* getUrlForQueue();//取一个未处理的URL 对象指针
	int setUrlState(URL* url);//设置URL处理状态
	//setUrlValue();

private://内部接口
	URL* findUrl(string urlStr);//
	int removeUrlForQueue(string urlStr);//
private:
	list<Url>m_urls;//所有的url
	map<string,Url*>m_urlMap;//所有url的索引
	queue<Url*> m_urlqueue;//维护等待抓取的url
	
	

};
