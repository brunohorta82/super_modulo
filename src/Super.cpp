#include "Super.hpp"
#include <esp_log.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

void super(void *args)
{
    char *msn = (char *)args;

    ESP_LOGI("MYTASK", "OLAS");
    while (true)
    {
        ESP_LOGI("MYTASK", "LOOP %s", msn);
        vTaskDelay(pdTICKS_TO_MS(10));
    }
}