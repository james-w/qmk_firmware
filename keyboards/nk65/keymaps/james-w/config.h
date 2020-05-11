#pragma once

// Override default RGB backlight
#undef RGB_BACKLIGHT_EFFECT
#define RGB_BACKLIGHT_EFFECT 12

// Change the default colors
#undef RGB_BACKLIGHT_COLOR_1
#define RGB_BACKLIGHT_COLOR_1 { .h = 132, .s = 120 }
#undef RGB_BACKLIGHT_COLOR_2
#define RGB_BACKLIGHT_COLOR_2 { .h = 0, .s = 200 }

// Turn up the default speed
#undef RGB_BACKLIGHT_EFFECT_SPEED
#define RGB_BACKLIGHT_EFFECT_SPEED 4

// Turn on backlight sleep
#undef RGB_BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED
#define RGB_BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED 1
#undef RGB_BACKLIGHT_DISABLE_AFTER_TIMEOUT
#define RGB_BACKLIGHT_DISABLE_AFTER_TIMEOUT 3

// Turn down the default brightness
#undef RGB_BACKLIGHT_BRIGHTNESS
#define RGB_BACKLIGHT_BRIGHTNESS 180

// Turn on shift led when caps lock
#undef RGB_BACKLIGHT_CAPS_LOCK_INDICATOR
#define RGB_BACKLIGHT_CAPS_LOCK_INDICATOR { .color = { .h = 39, .s = 255 }, .index = 3 }

// Turn on layer highlighting
#undef RGB_BACKLIGHT_LAYER_1_INDICATOR
#define RGB_BACKLIGHT_LAYER_1_INDICATOR { .color = { .h = 210, .s = 255 }, .index = 255 }
