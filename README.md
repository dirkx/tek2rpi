Cursory tested against https://github.com/minvws/nl-contact-tracing-odds-and-ends/tree/master/test-vectors/tek-rpi

Compile with

	cc -I /opt/local/include -o gaen gaen.c /opt/local/lib/libmbedcrypto.a

Example:
	./gaen  9938d3f261dc56eb6eb4e8bd5e7909dd 2631600

