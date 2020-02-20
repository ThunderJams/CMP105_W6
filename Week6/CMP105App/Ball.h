#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"

class Ball : public GameObject {

public:
	Ball();
	~Ball();

	void update(float dt) override;
};

