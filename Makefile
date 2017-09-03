all: hexxor

hexxor: hexxor.c
	gcc -o hexxor hexxor.c

install: hexxor
	install -d $(DESTDIR)/usr/bin
	install hexxor $(DESTDIR)/usr/bin
	ln -s hexxor $(DESTDIR)/usr/bin/xor
