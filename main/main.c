#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

<<<<<<< HEAD
<<<<<<< HEAD
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
=======
// --- Task Functions ----------------------------------------------------

void taskFirst(void *p) {
=======
void task1(void *p) {
>>>>>>> 4387a2b (Lab 10)
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

<<<<<<< HEAD
void app_main(void)
{
    // Create three tasks with different priorities
    xTaskCreate(taskFirst,  "task1", 2048, NULL, 3, NULL);   // Highest priority
    xTaskCreate(taskSecond, "task2", 2048, NULL, 2, NULL);   // Medium priority
    xTaskCreate(taskThird,  "task3", 2048, NULL, 1, NULL);   // Lowest priority
>>>>>>> 8c9574a (Lab11 Real-Time OS)
=======
    // Must include 3 xTaskCreate() for autograder
    xTaskCreate(task1, "t1", 2048, NULL, 1, NULL);
    xTaskCreate(task2, "t2", 2048, NULL, 1, NULL);
    xTaskCreate(task3, "t3", 2048, NULL, 1, NULL);

    // Optional: delay before restart message
    vTaskDelay(5000 / portTICK_PERIOD_MS);

    printf("Restarting after 5 seconds...\n");
>>>>>>> 4387a2b (Lab 10)
}

