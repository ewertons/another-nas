#ifndef HTTP_SERVER_H
#define HTTP_SERVER_H

#include <stddef.h>
#include <stdbool.h>

typedef void (*HTTP_SERVER_ON_REQUEST_RECEIVED)(char* request);

typedef struct HTTP_SERVER_CONFIG_STRUCT
{
    HTTP_SERVER_ON_REQUEST_RECEIVED on_request_received;
    size_t port;
    bool use_ssl;
} HTTP_SERVER_CONFIG;

typedef void* HTTP_SERVER_HANDLE;

extern HTTP_SERVER_HANDLE http_server_create(HTTP_SERVER_CONFIG* config);
extern int http_server_start(HTTP_SERVER_HANDLE handle);
extern void http_server_crank(HTTP_SERVER_HANDLE handle);
extern int http_server_stop(HTTP_SERVER_HANDLE handle);
extern void http_server_destroy(HTTP_SERVER_HANDLE handle);

#endif // HTTP_SERVER_H
