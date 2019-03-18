#include "../src/dso.h"
#include "htmlParserMode.h"

void init(MODULE* module)
{
	
}

int handle(void*)
{
	struct htmlParserParam* lparam = (struct htmlParserParam)param;
	HtmlParser loParser;
	loParser.getUrls(param->url);
	param->urls = loParser.getUrls(param->url);
	if(param->urls.count() == 0)
	{
		return MODULE_ERR;
	}

	return MODULE_OK;
}

