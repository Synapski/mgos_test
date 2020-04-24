#include "a/function.h"
#include "b/function.h"
#include "esp_log.h"

void app_main(void) {
  ESP_LOGI("main", "App main start");
  function_a();
  function_b();
}
