#pragma once
class Entity
{
public:
	Entity();
	~Entity();
	void render() {};
private:
	double x, y;
	double dx, dy;
	double health;
};

