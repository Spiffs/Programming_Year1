#pragma once
#include "Behavior.h"
#include "raymath.h"
#include "Graph2D.h"
#include <list>

class FleeBehavior : public Behavior
{
public:

	FleeBehavior(Application* app);
	virtual ~FleeBehavior();

	virtual void Update(GameObject* obj, float deltaTime);
	virtual void Draw(GameObject* obj);

	const Vector2& GetTarget() const;
	void SetTarget(const Vector2& target);

	void SetTargetRadius(const float& radius);
	const float& GetTargetRadius() const;

	void SetPath(std::list<Graph2D::Node*> path);
	void SetBehaviorSwitch(int i);

protected:

	std::list<Graph2D::Node*> m_path;
	float m_targetRadius = 12.0f;
	float m_fleeRadius = 80.0f;
	Vector2 m_target;
	int behaviorSwitch = 1;

	float maxSpeed = 500.0f;

	Application* m_app;
};

