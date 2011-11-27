/**
 * @file led.h
 * @brief LED interface
 */

#ifndef _LED_H
#define _LED_H

/**
 * @addtogroup ORL
 * @{
 */

/**
 * @addtogroup HAL
 * @{
 */

enum led_state {
    LED_ON,         /**< turn led on */
    LED_OFF,        /**< turn led off */
    LED_TOGGLED     /**< toggled led */
};

/**
 * Initialize led
 *
 * @param led The led gpio pin
 * @param state The led status
 * @return None
 */
void led_init(int led, enum led_state state);

/**
 * Set led status
 *
 * @param The led goio pin
 * @param status The led status
 * @return None
 */
void led_set(int led, enum led_state state);

/**
 * portings
 */
extern led_hw_init(led);
extern led_hw_on(led);
extern led_hw_off(led);
extern led_hw_toggled(led);

/** @} */

/** @} */

#endif /* _LED_H */