#include <vector>
class FarmTimer
{
    enum PlantType {
        Oak,
        Willow,
        Maple,
        Yew,
        Magic,
        Fruit,
        Herb
    };

public:
const static int TREE_GROWTH_CYCLE = 40;
const static int FRUIT_TREE_GROWTH_CYCLE = 160;
const static int HERB_GROWTH_CYCLE = 20;
const static int OAK_CYCLES = 4;
const static int WILLOW_CYCLES = 4;
const static int MAPLE_CYCLES = 4;
const static int YEW_CYCLES = 4;
const static int MAGIC_CYCLES = 4;
const static int FRUIT_CYCLE = 6;
bool logEndTime();
FarmTimer(PlantType);
bool calculateEndTime();
protected:
PlantType plantType;
};