#include <Arduino.h>

int count1 = 0;
int count2 = 0;

void task1(void * parameters){
  for(;;){
    Serial.print("Task 1 counter: ");
    Serial.println(count1++);
    vTaskDelay(1000 / portTICK_PERIOD_MS);

  }
}

void task2(void * parameters){
  for(;;){
    Serial.print("Task 2 counter: ");
    Serial.println(count2++);
    vTaskDelay(1000 / portTICK_PERIOD_MS);

  }
}

void setup() {
  Serial.begin(9600);
  
 xTaskCreate(
    task1, // function name
   "Task 1", // task name
    1000, // stack size
    NULL, // Task parameters
    1, // Task prioprity
    NULL // Task handle
 );


  xTaskCreate(
    task2, // function name
   "Task 2", // task name
    1000, // stack size
    NULL, // Task parameters
    1, // Task prioprity
    NULL // Task handle
 );
}

void loop() {

}