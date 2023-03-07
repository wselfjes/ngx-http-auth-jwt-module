#include <ngx_core.h>
#include <ngx_http.h>

#include "ngx_http_auth_jwt_query_processing.h"

ngx_int_t get_value_from_query(ngx_http_request_t *r, ngx_str_t *key, ngx_str_t *value)
{
    return NGX_ERROR;
}