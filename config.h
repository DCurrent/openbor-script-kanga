#ifndef DC_KANGA_CONFIG
#define DC_KANGA_CONFIG 1

// Dependencies
//-- Random number generator
#include "data/scripts/dc_d20/main.c"
#include "data/scripts/dc_math/main.c"
#include "data/scripts/dc_spinner/main.c"

#define DC_KANGA_FLAG_OFF					0
#define DC_KANGA_FLAG_ON					1

// Transpareny mode presets.
#define DC_KANGA_TRANSPARENCY_OFF			0
#define DC_KANGA_TRANSPARENCY_ALPHA			1
#define DC_KANGA_TRANSPARENCY_NEGATIVE		2
#define DC_KANGA_TRANSPARENCY_OVERLAY		3
#define DC_KANGA_TRANSPARENCY_HARDLIGHT		4
#define DC_KANGA_TRANSPARENCY_DODGE			5
#define DC_KANGA_TRANSPARENCY_AVERAGE		6

// Colors
#define DC_KANGA_RGB_MIN					0
#define DC_KANGA_RGB_MAX					255

#define DC_KANGA_BURN_RGB_R					DC_KANGA_RGB_MAX				// Burn color Red RGB setting.
#define DC_KANGA_BURN_RGB_G					102								// Burn color Green RGB setting.
#define DC_KANGA_BURN_RGB_B					DC_KANGA_RGB_MIN				// Burn color Blue RGB setting.
#define DC_KANGA_BURN_MODE					DC_KANGA_TRANSPARENCY_ALPHA		// Burn tint alpha mode

#define DC_KANGA_FREEZE						DC_KANGA_RGB_MAX                 // Starting blue intensity when frozen.
#define DC_KANGA_FREEZE_MODE				DC_KANGA_TRANSPARENCY_ALPHA		// Freeze tint alpha mode.

#define DC_KANGA_KO_RGB_R					128                             // KO color RGB Red setting.
#define DC_KANGA_KO_RGB_G					128                             // KO color RGB Green setting.
#define DC_KANGA_KO_RGB_B					128                             // KO color RGB Blue setting.
#define DC_KANGA_KO_MODE					DC_KANGA_TRANSPARENCY_ALPHA		// KO tint alpha mode.
#define DC_KANGA_KO_STEPS					64								// Number of increments between no tint and KO tint.

// Scaling and sizing.
#define DC_KANGA_DEFAULT_SCALE				256								// Value used by drawmethod scale values for 100% size.

#define DC_KANGA_MIN_Z_ADJUST				1.1								// Adjustment from actual min Z position before calculations.
#define DC_KANGA_MIN_Z_SIZE					0.9								// Scale ratio when target is at MIN_Z position.


#define DC_KANGA_AUTOSCALE_SCALE_X			DC_KANGA_DEFAULT_SCALE			// Starting scale of target.
#define DC_KANGA_AUTOSCALE_SCALE_Y			DC_KANGA_DEFAULT_SCALE			// "

// Defaults.
#define DC_KANGA_DEFAULT_INSTANCE			0
#define DC_KANGA_DEFAULT_TARGET				getlocalvar("self")
#define DC_KANGA_DEFAULT_DEBUG_FLAG			0
#define DC_KANGA_DEFAULT_DEBUG_RGB_BLUE		0
#define DC_KANGA_DEFAULT_DEBUG_RGB_GREEN	0
#define DC_KANGA_DEFAULT_DEBUG_RGB_RED		0
#define DC_KANGA_DEFAULT_DEBUG_TINT_MODE	0
#define DC_KANGA_DEFAULT_TIME_INITIAL		0

// Function macros.
#define dc_kanga_set_enabled(entity, value)		changedrawmethod(entity, "enabled", value)
#define dc_kanga_set_tint_mode(entity, value)	changedrawmethod(entity, "tintmode", value)
#define dc_kanga_set_map(entity, value)			changedrawmethod(entity, "remap", value)

// Variable keys.
#define DC_KANGA_BASE_ID			"dckan"
#define DC_KANGA_VAR_KEY_INSTANCE			DC_KANGA_BASE_ID + 0
#define DC_KANGA_VAR_KEY_TARGET				DC_KANGA_BASE_ID + 1	
#define DC_KANGA_VAR_KEY_DEBUG_FLAG			DC_KANGA_BASE_ID + 2
#define DC_KANGA_VAR_KEY_DEBUG_RGB_BLUE		DC_KANGA_BASE_ID + 3
#define DC_KANGA_VAR_KEY_DEBUG_RGB_GREEN	DC_KANGA_BASE_ID + 4
#define DC_KANGA_VAR_KEY_DEBUG_RGB_RED		DC_KANGA_BASE_ID + 5
#define DC_KANGA_VAR_KEY_DEBUG_TINT_MODE	DC_KANGA_BASE_ID + 6
#define DC_KANGA_VAR_KEY_TIME_INITIAL		DC_KANGA_BASE_ID + 7
#define DC_KANGA_VAR_KEY_THE_END			8

#endif // !DC_KANGA_CONFIG

