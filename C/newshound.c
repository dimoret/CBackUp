#include <stdio.h>
#include <errno.h>

int main(int argc,char *argv[])
{
	char *feeds[] = {"http://news.qq.com/newsgn/rss_newsgn.xml"};
	int times = 3;
	char *phrase = argv[1];
	int i;
	for(i = 0;i < times;i++)
	{
		char var[255];
		sprintf(var,"RSS_FEED=%s",feeds[i]);
		char vars[]={var,NULL};
		if(execle("c:\\Python27\\python","c:\\Python27\\python",
		"c:\\code\\python\\rssgossip.py",phrase,NULL,vars) == -1){
			fprintf(stderr,"Can't run script:%s\n",strerror(errno));
			return 1;
		}
	}
	return 0;
}