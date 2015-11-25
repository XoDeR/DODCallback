#include "Registry.h"

void Registry::registerEntityCallback(EntityCallback entityCallback)
{
	entityCallbackList.push_back(entityCallback);
}

void Registry::callEntityCallback(int a)
{
	EntityCallback entityCallback = entityCallbackList[0];

	typedef void(*EntityCallbackFunction)(void*, int);
	EntityCallbackFunction f = (EntityCallbackFunction)entityCallback.f;
	f(entityCallback.instance, a);
}
