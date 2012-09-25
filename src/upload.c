/* Author: huangjun
 * Date: 2012.09.25
 * Description: A small website like dropbox.
 */
#include <stdio.h>
#include "./cJSON/cJSON.h"
#include "common/upload_file.h"

int main(int argc, char *argv[])
{
	int ret;
	
	ret = upload_file(filename, offset, len);
	return 0;
}
