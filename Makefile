CFLAGS = gcc 
OPTION = -g
SOURCES = \
	b64/urlsafe_b64.c\
        cJSON/cJSON.c\
        qbox/conf.c\
        qbox/base.c\
        qbox/oauth2.c\
        qbox/oauth2_digest.c\
        qbox/rs.c\
        qbox/rscli.c\
        rs_demo.c\
	upload.c\
	common/upload_file.c

all:
	$(CFLAGS) $(OPTION) $(SOURCES)

.PHONY clean
clean:
	-rm -rf src/*.o
