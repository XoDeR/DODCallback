#include "Registry.h"
#include "Entity.h"

void main()
{
	Registry registry;
	Entity entity(registry);
	registry.callEntityCallback(10);
}
