#include "Entity.h"
#include "Registry.h"

// to see the output
#include <iostream>
//

Entity::Entity(Registry& registry)
	: registry(registry)
{
	EntityCallback entityCallback;

	typedef void(*VoidFunction)();
	entityCallback.f = (VoidFunction)(&Entity::entityFunction);
	entityCallback.instance = (void*)(this);
	registry.registerEntityCallback(entityCallback);
}

void Entity::memberFunction(int a)
{
	std::cout << a;
	std::cin >> a; // for pause
}

void Entity::entityFunction(void* instance, int a)
{
	static_cast<Entity*>(instance)->memberFunction(a);
}


