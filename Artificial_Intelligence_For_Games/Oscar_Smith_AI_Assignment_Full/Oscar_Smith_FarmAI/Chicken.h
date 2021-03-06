#pragma once
#include "GameObject.h"
#include "Behavior.h"
#include "KeyboardBehavior.h"
#include "WanderBehavior.h"
#include "FleeBehavior.h"

class Chicken : public GameObject
{
public:

	Chicken(Application* app);
	virtual ~Chicken();

	void Load();

	virtual void Update(float deltaTime);
	virtual void Draw();

	void SetState(int state);

protected:
	// texture
	Texture2D ChickenStand; // texture state 1
	Texture2D ChickenWalk1; // texture state 2
	Texture2D ChickenWalk2; // texture state 3
	Texture2D ChickenEat1; // texture state 4
	Texture2D ChickenEat2; // texture state 5

	Texture2D ChickenStandflip; // texture state 6
	Texture2D ChickenWalk1flip; // texture state 7
	Texture2D ChickenWalk2flip; // texture state 8
	Texture2D ChickenEat1flip; // texture state 9
	Texture2D ChickenEat2flip; // texture state 10
	int textureState = 1;
	bool textureflip = false;
	
	// behavior variables
	int CharacterState = 1;
	int RandomTimer = 0;

	// behavior
	WanderBehavior* m_wanderBehavior;
	FleeBehavior* m_fleeBehavior;

	float fleeDistance = 80.0f;
};

