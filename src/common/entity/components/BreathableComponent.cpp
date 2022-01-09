BreathableDefinition::buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreathableDefinition> >&)
BreathableDefinition::addBreathableBlockByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BreathableDefinition::addNonBreathableBlockByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BreathableDefinition::initialize(EntityContext&, BreathableComponent&)
BreathableDefinition::deserializeData(Json::Value&)
BreathableDefinition::serializeData(Json::Value&) const
BreathableComponent::BreathableComponent()
BreathableComponent::addAdditionalSaveData(CompoundTag&)
BreathableComponent::readAdditionalSaveData(Actor&, CompoundTag const&, DataLoadHelper&)
BreathableComponent::getAirSupply() const
BreathableComponent::setAirSupply(short)
BreathableComponent::getMaxAirSupply() const
BreathableComponent::setMaxAirSupply(short)
BreathableComponent::getSuffocateTime() const
BreathableComponent::getInhaleTime() const
BreathableComponent::getAirRegenPerTick() const
BreathableComponent::updateBreathableState(Actor&)
BreathableComponent::canBreathe(Actor const&) const
BreathableComponent::canBreatheAir() const
BreathableComponent::canBreatheWater() const
BreathableComponent::canBreatheLava() const
BreathableComponent::canBreathSolids() const
BreathableComponent::generatesBubbles() const
BreathableComponent::getBreathableState()
