BreedableDefinition::buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreedableDefinition> >&)
BreedableDefinition::addBreedItemByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BreedableDefinition::addEnvironmentRequirement(EnvironmentRequirement const&)
BreedableDefinition::addBreedableType(BreedableType const&)
BreedableDefinition::initialize(EntityContext&, BreedableComponent&)
BreedableDefinition::deserializeData(Json::Value&)
BreedableDefinition::_parseEnvironmentRequirements(Json::Value)
BreedableDefinition::_parseBreedTypes(Json::Value)
BreedableDefinition::serializeData(Json::Value&) const
BreedableComponent::getInteraction(Actor&, Player&, ActorInteraction&)
BreedableComponent::_meetsEnvironmentRequirements(Actor&)
BreedableComponent::canMate(Actor const&, Actor const&) const
BreedableComponent::mate(Actor&, Actor&)
BreedableComponent::_handlePregnancy(Actor&, Actor&)
BreedableComponent::_handleMate(Actor&, Actor&)
BreedableComponent::setInLove(Actor&, Player const*)
BreedableComponent::getLoveTimer() const
BreedableComponent::setLoveTimer(int)
BreedableComponent::decrementLoveTimer()
BreedableComponent::getBreedCooldown() const
BreedableComponent::decrementBreedCooldown()
BreedableComponent::resetLove(Actor&)
BreedableComponent::getLoveCause(Actor const&) const
BreedableComponent::addAdditionalSaveData(CompoundTag&)
BreedableComponent::readAdditionalSaveData(Actor&, CompoundTag const&, DataLoadHelper&)
