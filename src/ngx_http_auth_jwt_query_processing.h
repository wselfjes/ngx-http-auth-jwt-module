#ifndef _NGX_HTTP_AUTH_JWT_QUERY_PROCESSING_H
#define _NGX_HTTP_AUTH_JWT_QUERY_PROCESSING_H

ngx_int_t get_value_from_query(ngx_http_request_t *r, ngx_str_t *key, ngx_str_t *value);

#endif /* _NGX_HTTP_AUTH_JWT_QUERY_PROCESSING_H */