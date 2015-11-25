#pragma once

class Registry;

class Entity
{
public:
	explicit Entity(Registry& registry);
	void memberFunction(int a);
	static void entityFunction(void* instance, int a);
private:
	Registry& registry;
};