#include "http_server.h"
#include "logging.h"
#include "result.h"

typedef struct HTTP_SERVER_STRUCT
{
    size_t port;
} HTTP_SERVER;

HTTP_SERVER_HANDLE http_server_create(HTTP_SERVER_CONFIG* config)
{
    HTTP_SERVER* result;

    if (config == NULL)
    {
        log_error("Invalid configuration (config is NULL)");
        result = NULL;
    }
    else if ((result = malloc(sizeof(HTTP_SERVER))) == NULL)
    {
        log_error("Failed to allocate HTTP SERVER internal structure");
    }
    else
    {
        result->port = config->port;
    }

    return result;
}

int http_server_start(HTTP_SERVER_HANDLE handle)
{
    int result;

    if (handle == NULL)
    {
        log_error("Invalid configuration (handle is NULL)");
        result = __FAILURE__;
    }
    else
    {
        result = 0;
    }

    return result;
}

void http_server_crank(HTTP_SERVER_HANDLE handle)
{
    if (handle != NULL)
    {

    }
}

int http_server_stop(HTTP_SERVER_HANDLE handle)
{
    int result;

    if (handle == NULL)
    {
        log_error("Invalid configuration (handle is NULL)");
        result = __FAILURE__;
    }
    else
    {
        result = 0;
    }

    return result;
}

void http_server_destroy(HTTP_SERVER_HANDLE handle)
{
    if (handle == NULL)
    {
        log_error("Invalid configuration (handle is NULL)");
    }
    else
    {
        HTTP_SERVER* instance = (HTTP_SERVER*)handle;
        free(instance);
    }
}