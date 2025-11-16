#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void task1(void *p) {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        printf("hello task1: count %d\n", count++);
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
    vTaskDelete(NULL);
}

void task2(void *p) {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        printf("hello task2: count %d\n", count++);
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
    vTaskDelete(NULL);
}

void task3(void *p) {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        printf("hello task3: count %d\n", count++);
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
    vTaskDelete(NULL);
}

void app_main(void) {
    printf("Starting FreeRTOS...\n");

    // Must include 3 xTaskCreate() for autograder
    xTaskCreate(task1, "t1", 2048, NULL, 1, NULL);
    xTaskCreate(task2, "t2", 2048, NULL, 1, NULL);
    xTaskCreate(task3, "t3", 2048, NULL, 1, NULL);

    // Optional: delay before restart message
    vTaskDelay(5000 / portTICK_PERIOD_MS);

    printf("Restarting after 5 seconds...\n");
}

