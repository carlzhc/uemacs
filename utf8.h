#ifndef UTF8_H
#define UTF8_H

typedef unsigned int unicode_t ;

unsigned utf8_to_unicode( char *line, unsigned index, unsigned len,
                                                            unicode_t *res) ;
unsigned unicode_to_utf8( unicode_t c, char *utf8) ;

#endif
