Boat::Paddle::Paddle()
Boat::Boat(ActorDefinitionGroup*, ActorDefinitionIdentifier const&)
Boat::reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&)
Boat::reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&)
Boat::_hurt(ActorDamageSource const&, int, bool, bool)
Boat::destroy(Actor*)
Boat::tickBubbleColumn()
Boat::getBubbleTime()
Boat::setBubbleTime(int)
Boat::getWoodID() const
Boat::isPickable()
Boat::remove()
Boat::normalTick()
Boat::getRowingTime(Side) const
Boat::getPaddle(Side)
Boat::_float()
Boat::_control()
Boat::getPaddle(Side) const
Boat::getRowingTime(Side, float) const
Boat::setRowingTime(Side, float)
Boat::setPaddleForce(Side, float)
Boat::setPaddleState(Side, bool)
Boat::computePaddleForcesBasedOnGaze(Vec3&, float&, float&, float, float)
Boat::_computePaddleForce(float&, float&, float, float)
Boat::canExitBoat() const
Boat::getExitText[abi:cxx11](bool) const
Boat::getExitTip(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, InputMode) const
Boat::canAddRider(Actor&) const
Boat::addRider(Actor&)
Boat::getControllingPlayer() const
Boat::onAboveBubbleColumn(bool)
Boat::getBubbleAngle(float)
Boat::getRiderYRotation(Actor const&) const
Boat::isInvulnerableTo(ActorDamageSource const&) const
Boat::_calculatePaddleForce(Side) const
Boat::_addPaddleTime(Side, float)
Boat::_paddleControl(Side, Vec3&, Vec3&)
Boat::_isInAir() const
Boat::_resetPaddleToRest(Side)
