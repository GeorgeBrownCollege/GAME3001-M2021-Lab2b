#pragma once
#ifndef __STAR_SHIP__
#define __STAR_SHIP__
#include "Agent.h"

class StarShip : public Agent
{
public:
	// Constructor(s)
	StarShip();
	
	// Destructor
	~StarShip();
	
	// Display Object Life-Cycle Functions
	void draw() override;
	void update() override;
	void clean() override;

	// getters and setters
	float getMaxSpeed() const;
	float getTurRate() const;

	void setMaxSpeed(float speed);
	void setTurnRate(float angle);

private:
	float m_maxSpeed;
	float m_turnRate;
};

#endif /* defined (__STAR_SHIP__) */