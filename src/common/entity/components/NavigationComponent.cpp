NavigationComponent::NavigationComponent()
NavigationComponent::initializeFromDefinition(Mob&, NavigationDescription*)
NavigationComponent::setIsAmphibious(bool)
NavigationComponent::setAvoidSun(bool)
NavigationComponent::setCanPassDoors(bool)
NavigationComponent::setCanOpenDoors(bool)
NavigationComponent::setAvoidWater(bool)
NavigationComponent::setAvoidDamageBlocks(bool)
NavigationComponent::setCanFloat(bool)
NavigationComponent::setCanSink(bool)
NavigationComponent::setAvoidPortals(bool)
NavigationComponent::setCanBreach(bool)
NavigationComponent::setCanJump(bool)
NavigationComponent::getAvoidDamageBlocks() const
NavigationComponent::getAvoidPortals() const
NavigationComponent::getAvoidSun() const
NavigationComponent::getAvoidWater() const
NavigationComponent::getCanBreach() const
NavigationComponent::getCanFloat() const
NavigationComponent::getCanJump() const
NavigationComponent::getCanOpenDoors() const
NavigationComponent::getCanPassDoors() const
NavigationComponent::getCanSink() const
NavigationComponent::getEndPathRadiusSqr() const
NavigationComponent::setEndPathRadius(float)
NavigationComponent::getHasDestination() const
NavigationComponent::setHasDestination(bool)
NavigationComponent::getHasEndPathRadius() const
NavigationComponent::setHasEndPathRadius(bool)
NavigationComponent::setInternalType(std::unique_ptr<PathNavigation, std::default_delete<PathNavigation> >)
NavigationComponent::getIsAmphibious() const
NavigationComponent::getIsFollowingRivers() const
NavigationComponent::setIsFollowingRivers(bool)
NavigationComponent::getLastStuckCheckPosition() const
NavigationComponent::setLastStuckCheckPosition(Vec3 const&)
NavigationComponent::getMaxDistance(Actor const&) const
NavigationComponent::getPath() const
NavigationComponent::setPath(std::unique_ptr<Path, std::default_delete<Path> >)
NavigationComponent::resetPath()
NavigationComponent::getSpeed() const
NavigationComponent::setSpeed(float)
NavigationComponent::getTerminationThreshold() const
NavigationComponent::setTerminationThreshold(float)
NavigationComponent::getTickTimeout() const
NavigationComponent::setTickTimeout(int)
NavigationComponent::isDone() const
NavigationComponent::isStuck(int) const
NavigationComponent::incrementTick()
NavigationComponent::updateLastStuckCheck(Mob const&)
NavigationComponent::getTargetOffset() const
NavigationComponent::setTargetOffset(Vec3 const&)
NavigationComponent::canUpdatePath(Mob const&) const
NavigationComponent::createPath(Mob&, Vec3 const&)
NavigationComponent::moveTo(Mob&, Vec3 const&, float)
NavigationComponent::moveTo(Mob&, Vec3 const&, float, Vec3 const&)
NavigationComponent::createPath(Mob&, Actor&)
NavigationComponent::moveTo(Mob&, Actor&, float)
NavigationComponent::moveTo(Mob&, std::unique_ptr<Path, std::default_delete<Path> >, float)
NavigationComponent::update(Mob&)
NavigationComponent::stop(Mob&)
NavigationComponent::travel(Mob&, float&, float&, float&)
