#pragma once

#include <@keegan-stoneware/simple-app-message/simple-app-message.h>

typedef void (*ClayUpdatedCallback)(void *context);

typedef struct ClayCallbacks {
  ClayUpdatedCallback settings_updated;
} ClayCallbacks;

void clay_init(uint32_t inbox_size, const ClayCallbacks *callbacks, void *context);

void clay_remove(const char *key);

void clay_clear();

void clay_set_bool(const char *key, bool value);

void clay_set_data(const char *key, const void *data, size_t n);

void clay_set_int(const char *key, int value);

void clay_set_string(const char *key, const char *value);

bool clay_get_bool(const char *key, bool *value_out);

bool clay_get_data(const char *key, void *value_out, size_t n);

bool clay_get_int(const char *key, int *value_out);

bool clay_get_string(const char *key, char *value_out, size_t size);