#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// ---------------------- TASK 1 ------------------------
void task1(void *p) {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        printf("hello task1: count %d (Soufiane)\n", count++);
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
    vTaskDelete(NULL);
}

// ---------------------- TASK 2 ------------------------
void task2(void *p) {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        printf("hello task2: count %d (Soufiane)\n", count++);
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
    vTaskDelete(NULL);
}

// ---------------------- TASK 3 ------------------------
void task3(void *p) {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        printf("hello task3: count %d (Soufiane)\n", count++);
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
    vTaskDelete(NULL);
}


// ---------------------- MAIN --------------------------
void app_main(void) {

    // Required 3 task creations
    xTaskCreate(task1, "t1", 2048, NULL, 1, NULL);
    xTaskCreate(task2, "t2", 2048, NULL, 1, NULL);
    xTaskCreate(task3, "t3", 2048, NULL, 1, NULL);

    // Main can optionally delay/print if needed
    printf("Starting FreeRTOS tasks...\n");
    vTaskDelay(5000 / portTICK_PERIOD_MS);
    printf("App main completed.\n");
}

