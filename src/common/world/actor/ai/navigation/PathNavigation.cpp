PathNavigation::~PathNavigation()
PathNavigation::~PathNavigation()
PathNavigation::initializeInternal(Mob&, NavigationDescription*)
PathNavigation::tick(NavigationComponent&, Mob&)
PathNavigation::_isPositionOnlyInAir(BlockSource const&, Vec3 const&, Vec2 const&) const
PathNavigation::_getHighestBlockHeight(BlockSource&, Mob&, Vec3 const&, Vec2 const&) const
PathNavigation::getTempMobPos(Mob const&) const
PathNavigation::createPath(NavigationComponent&, Mob&, Vec3 const&)
PathNavigation::moveTo(NavigationComponent&, Mob&, Vec3 const&, float)
PathNavigation::createPath(NavigationComponent&, Mob&, Actor&)
PathNavigation::moveTo(NavigationComponent&, Mob&, Actor&, float)
PathNavigation::moveTo(NavigationComponent&, Mob&, std::unique_ptr<Path, std::default_delete<Path> >, float)
PathNavigation::stop(NavigationComponent&, Mob&)
PathNavigation::travel(NavigationComponent&, Mob&, float&, float&, float&)
PathNavigation::canUpdatePath(Mob const&) const
PathNavigation::updatePath(NavigationComponent&, Mob&)
