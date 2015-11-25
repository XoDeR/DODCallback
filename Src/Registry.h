#pragma once
#include <vector>
using std::vector;

struct EntityCallback // 32 bytes
{
	void(*f)(void); // 8 on 64-bit system, default 8
	void* instance; // 8 bytes
	char pad[16]; // 16 bytes
};

class Registry
{
public:
	void registerEntityCallback(EntityCallback entityCallback);
	void callEntityCallback(int a);
private:
	vector<EntityCallback> entityCallbackList;
};