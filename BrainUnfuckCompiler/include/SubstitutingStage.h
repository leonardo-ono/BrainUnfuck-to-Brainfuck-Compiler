#ifndef SUBSTITUTIONSTAGE_H
#define SUBSTITUTIONSTAGE_H

#include "Stage.h"

class SubstitutingStage : public Stage
{
public:
    SubstitutingStage();
    virtual ~SubstitutingStage();

    void process(CompilerContext& context) const override;
private:
};

#endif // SUBSTITUTIONSTAGE_H
