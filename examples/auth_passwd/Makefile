SOURCE_FILES=\
	../../b64/urlsafe_b64.c\
	../../cJSON/cJSON.c\
	../../qbox/conf.c\
	../../qbox/base.c\
	../../qbox/oauth2.c\
	../../qbox/oauth2_passwd.c\
	../../qbox/rs.c\
	../../qbox/rscli.c\
	rs_demo.c\

all: $(SOURCE_FILES)
	gcc -o rs_demo -I/usr/include/curl -I/usr/include/openssl -L/usr/lib/x86_64-linux-gnu/ -lcurl -lssl -lm $^

install: all
	@echo

clean:
	rm -f rs_demo
