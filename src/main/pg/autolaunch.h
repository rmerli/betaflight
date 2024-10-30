/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <stdint.h>

#include "pg/pg.h"

typedef struct autolaunch_s {

    uint16_t motorDelay; // ms
    uint16_t idleThrottle; // rcControl
    uint16_t launchThrottle; // rcControl
    uint8_t climbAngle; // angle
    uint8_t  maxThrowAngle;
    uint16_t  timeout;
} autolaunchConfig_t;

PG_DECLARE(autolaunchConfig_t, autolaunchConfig);
