BaseCircuitComponent::BaseCircuitComponent()
BaseCircuitComponent::getDirection() const
BaseCircuitComponent::getStrength() const
BaseCircuitComponent::setStrength(int)
BaseCircuitComponent::setDirection(unsigned char)
BaseCircuitComponent::removeSource(BlockPos const&, BaseCircuitComponent const*)
BaseCircuitComponent::hasDirectPower()
BaseCircuitComponent::addSource(CircuitSceneGraph&, CircuitTrackingInfo const&, int&, bool&)
BaseCircuitComponent::trackPowerSource(CircuitTrackingInfo const&, int, bool, int)
BaseCircuitComponent::trackPowerSourceDuplicates(CircuitTrackingInfo const&, int, bool)
BaseCircuitComponent::calculateValue(CircuitSystem&)
BaseCircuitComponent::hasSource(BaseCircuitComponent&)
BaseCircuitComponent::setRemoved()
BaseCircuitComponent::isRemoved() const
