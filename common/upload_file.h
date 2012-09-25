/* Author: huangjun
 * Date: 2012.09.25
 * Description: A small website like dropbox.
 */
#include <stdio.h>

#ifndef upload_file__h
#define upload_file__h

typedef struct file_info() {
	const char *filename; //file name
	int offset; //file offset begin to operate
	int len; //how many bytes will involved
} fi;

int upload_file(const char *fn, int offset, int len);
#endif //_end of upload_file_h
