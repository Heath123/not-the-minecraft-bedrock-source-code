InsomniaDefinition::buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InsomniaDefinition> >&)
InsomniaDefinition::initialize(EntityContext&, InsomniaComponent&)
InsomniaDefinition::deserializeData(Json::Value&)
InsomniaDefinition::serializeData(Json::Value&) const
InsomniaComponent::restartTimer()
InsomniaComponent::hasInsomnia() const
InsomniaComponent::setInsomnia(int)
InsomniaComponent::getInsomniaTimerTicks() const
InsomniaComponent::getTicksUntilInsomnia() const
InsomniaComponent::addAdditionalSaveData(CompoundTag&)
InsomniaComponent::readAdditionalSaveData(Actor&, CompoundTag const&, DataLoadHelper&)
InsomniaComponent::incrementTimeSinceRest()
