#include "data/scripts/dc_kanga/config.h"

// Which instance is in use?
int dc_kanga_get_instance()
{
	void result = getlocalvar(DC_KANGA_VAR_KEY_INSTANCE);

	if (!result)
	{
		result = DC_KANGA_DEFAULT_INSTANCE;
	}

	return result;
}

void dc_kanga_set_instance(int value)
{
	setlocalvar(DC_KANGA_VAR_KEY_INSTANCE, value);
}