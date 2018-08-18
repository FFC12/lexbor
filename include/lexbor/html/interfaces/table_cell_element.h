/*
 * Copyright (C) 2018 Alexander Borisov
 *
 * Author: Alexander Borisov <lex.borisov@gmail.com>
 */

#ifndef LEXBOR_HTML_TABLE_CELL_ELEMENT_H
#define LEXBOR_HTML_TABLE_CELL_ELEMENT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <lexbor/html/interface.h>
#include <lexbor/html/interfaces/element.h>


struct lxb_html_table_cell_element {
    lxb_html_element_t element;
};


lxb_html_table_cell_element_t *
lxb_html_table_cell_element_create(lxb_html_document_t *document);

lxb_html_table_cell_element_t *
lxb_html_table_cell_element_destroy(lxb_html_table_cell_element_t *table_cell_element);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LEXBOR_HTML_TABLE_CELL_ELEMENT_H */