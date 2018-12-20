#include <stdlib.h>
#include <stdio.h>
#include "logging.h"
#include "http_server.h"

static void on_http_request_received(char* request)
{
    printf("http request received!\r\n");
}

int main(int argc, char** argv)
{
    int result;
    bool continueRunning = true;

    log_trace("Starting another-nas...");

    HTTP_SERVER_CONFIG http_server_config;
    http_server_config.port = 80;
    http_server_config.use_ssl = false;
    http_server_config.on_request_received = on_http_request_received;

    HTTP_SERVER_HANDLE http_server_handle = http_server_create(&http_server_config);

    while(continueRunning)
    {
        http_server_crank(http_server_handle);
        continueRunning = false;
    }

    http_server_destroy(http_server_handle);

    result = 0;

    log_trace("another-nas is stopped. See you later...");

    return result;
}