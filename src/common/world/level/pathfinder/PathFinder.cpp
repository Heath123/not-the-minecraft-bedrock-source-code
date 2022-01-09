PathFinder::PathFinder(BlockSource*, NavigationComponent const&)
PathFinder::~PathFinder()
PathFinder::findPath(Actor*, Actor*, float)
PathFinder::findPath(Actor*, float, float, float, float)
PathFinder::findPath(Actor*, int, int, int, float)
PathFinder::_findNearestPathableNeighbor(BlockPos&, Actor*, BlockPos const&)
PathFinder::getNode(BlockPos const&, NodeType)
PathFinder::findPath(Actor*, PathfinderNode*, PathfinderNode*, PathfinderNode*, float)
PathFinder::_isBlockWater(BlockPos const&) const
PathFinder::_classifyNode(Actor*, BlockPos const&, BlockPos const&)
PathFinder::_classifyDoorNode(Actor*, Block const&, BlockPos const&)
PathFinder::_reconstructPath(PathfinderNode*, PathCompletionType, ActorUniqueID)
PathFinder::_getNeighbors(Actor*, PathfinderNode*, PathfinderNode*, PathfinderNode*, unsigned int)
PathFinder::isFree(Actor*, BlockPos const&, BlockPos const&, PathfinderNode*, bool)
PathFinder::calculateMoveCost(PathfinderNode&, BlockPos const&, BlockSource&)
PathFinder::getWaterNode(Actor*, BlockPos const&)
PathFinder::isFreeWaterNode(Actor*, BlockPos const&)
PathFinder::getNode(Actor*, BlockPos const&, BlockPos const&, PathfinderNode*, int)
PathFinder::_checkForDamagingBlock(Actor*, BlockPos const&, Block const*, int, BreakBlocksComponent const*)
PathFinder::_getActorRadius(Actor const&) const
PathFinder::_getPathfindingMalus(Actor*, NodeType, BlockPos const&)
PathFinder::_canJumpIntoNodeOfType(NodeType, Actor const&) const
PathFinder::_addNeighbor(PathfinderNode*, PathfinderNode*, unsigned int, unsigned long&)
PathFinder::_classifyNode(Actor*, BlockPos const&, Block const&, BlockPos const&, bool)
PathFinder::_checkBlockAndNeighborsProperty(Actor*, BlockPos const&, Block const*, BlockProperty, int, BreakBlocksComponent const*, std::function<bool (Block const&, BlockPos const&)>)
PathFinder::_belowBlockExtendsIntoAboveBlock(BlockSource&, BlockPos const&) const
PathFinder::_isBlockWater(int, int, int) const
