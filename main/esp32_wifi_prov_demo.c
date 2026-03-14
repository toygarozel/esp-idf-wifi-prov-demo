#include "esp_err.h"
#include "portmacro.h"
#include "wifi_provisioner.h"

void app_main(void) {
  wifi_prov_config_t config = WIFI_PROV_DEFAULT_CONFIG();
  config.ap_ssid = "Uygulama ismi";

  ESP_ERROR_CHECK(wifi_prov_start(&config));

  ESP_ERROR_CHECK(wifi_prov_wait_for_connection(portMAX_DELAY));
}
