/*
 * arch/arm/mach-tegra/board-roth-pinmux-t11x.h
 *
 * Copyright (c) 2012, NVIDIA Corporation.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth floor, Boston, MA  02110-1301, USA
 */

static __initdata struct tegra_pingroup_config roth_pinmux_common[] = {

};

static __initdata struct tegra_pingroup_config unused_pins_lowpower[] = {
/*
	DEFAULT_PINMUX(CLK1_REQ,      RSVD3,       PULL_DOWN, TRISTATE, OUTPUT),
	DEFAULT_PINMUX(USB_VBUS_EN1,  RSVD3,       PULL_DOWN, TRISTATE, OUTPUT),
*/
};

static struct gpio_init_pin_info init_gpio_mode_roth_common[] = {
/*
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PX4, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PX5, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PX6, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PW2, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PW3, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PX3, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PP1, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PP2, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PP0, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PP3, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PV0, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PV1, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PBB3, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PBB5, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PBB6, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PBB7, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PCC1, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PCC2, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PG0, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PG1, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PH4, false, 1),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PH5, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PH6, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PH7, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PG2, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PG3, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PG4, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PH0, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PK1, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PK3, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PK4, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PK2, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PI6, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PJ3, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PI5, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PI7, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PC7, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PCC5, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PV3, false, 0),
#ifndef CONFIG_LEDS_PWM
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PQ3, false, 0),
#endif
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PQ5, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PQ6, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PQ7, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PR3, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PR4, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PR5, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PR6, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PR7, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PEE1, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PU0, false, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PU1, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PU2, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PU4, false, 1),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PU5, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PU6, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PN7, true, 0),
	GPIO_INIT_PIN_MODE(TEGRA_GPIO_PK5, true, 1),
*/
};
