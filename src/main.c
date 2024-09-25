#include "esp_log.h"
#include "usb/usb_host.h"
#include "usb/usb_hid.h"

static const char *TAG = "USB_MOUSE";

void app_main(void) {
    ESP_LOGI(TAG, "Initializing USB host");

    // Inisialisasi USB host stack
    usb_host_config_t host_config = {
        .intr_flags = ESP_INTR_FLAG_LEVEL1,
    };
    ESP_ERROR_CHECK(usb_host_install(&host_config));

    ESP_LOGI(TAG, "USB host initialized, waiting for mouse input...");

    // Kode untuk menangani input mouse akan ditambahkan di sini
}
