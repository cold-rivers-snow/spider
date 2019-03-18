#include <stdio.h>

using namespace std;

class SaveBase
{
public:
	int setFilePathName();
	virtual int save() = 0;
	int setFileData(void* data);
		
};
