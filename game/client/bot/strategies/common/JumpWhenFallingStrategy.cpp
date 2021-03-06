#include "JumpWhenFallingStrategy.h"

#include "game/client/gameclient.h"

JumpWhenFallingStrategy::JumpWhenFallingStrategy(CGameClient* client) : BotStrategy(client) {
}

void JumpWhenFallingStrategy::execute() {
	CCharacterCore* player = &client->m_PredictedChar;
	
	if (jumpedLastStep) {
		getControls()->m_InputData.m_Jump = 0;
		jumpedLastStep = false;
	} else if (player->m_Vel.y >= 0.0f
			&& !(player->m_Jumped & 2)
			&& !player->IsGrounded()) {
		getControls()->m_InputData.m_Jump = 1;
		jumpedLastStep = true;
	}
}
