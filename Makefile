CC=cc
LIBS=/opt/local/lib/libmbedcrypto.a
CFLAGS=-I/opt/local/include

all:
	${CC} ${CFLAGS} -o tek2rpi main.c gaen.c ${LIBS}

