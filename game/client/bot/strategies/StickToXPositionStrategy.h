#include "BotStrategy.h"

#ifndef STICKTOXPOSITIONSTRATEGY_H
#define STICKTOXPOSITIONSTRATEGY_H

class StickToXPositionStrategy : public BotStrategy {
public:
    StickToXPositionStrategy(float targetX);
    void execute(CCharacterCore *player, CControls *controls);

private:
    int targetX;

};

#endif /* STICKTOXPOSITIONSTRATEGY_H */
