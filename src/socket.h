#include <socket.h>


class Socket
{
public:
	Socket();
	~Socket();
	
	int request(URL *url);	//发送请求
	int respounce();	//接收反馈
	int setSocket();	//设置socket
	int connect();	//链接操作
	int disconnect();	//端口链接操作
	void* getData();
	
private://内部接口
	

private:
	int socketHandle();	//socket句柄
	char* buf;
	
};
