#include "Super.hpp"
#include <esp_log.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

void super(void *args)
{
    char *msn = (char *)args;

    ESP_LOGI("SUPER3", "OLAS");
    while (true)
    {
        ESP_LOGI("SUPER3", "LOOP %s", msn);
        vTaskDelay(pdTICKS_TO_MS(10));
    }
}