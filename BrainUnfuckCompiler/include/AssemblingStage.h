#ifndef ASSEMBLINGSTAGE_H
#define ASSEMBLINGSTAGE_H

#include "Stage.h"
#include "Util.h"

#include <sstream>

class AssemblingStage : public Stage
{
public:
    AssemblingStage();
    virtual ~AssemblingStage();

    void process(CompilerContext& context) const override;
private:
};

#endif // ASSEMBLINGSTAGE_H
