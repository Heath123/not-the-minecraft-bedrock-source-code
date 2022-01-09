ExplodeDefinition::buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExplodeDefinition> >&)
ExplodeDefinition::initialize(EntityContext&, ExplodeComponent&) const
ExplodeDefinition::deserializeData(Json::Value&)
ExplodeDefinition::serializeData(Json::Value&) const
ExplodeComponent::initFromDefinition(Actor&, ExplodeDefinition const&)
ExplodeComponent::addAdditionalSaveData(CompoundTag&)
ExplodeComponent::readAdditionalSaveData(Actor&, CompoundTag const&, DataLoadHelper&)
ExplodeComponent::explode(Actor&, Vec3 const&)
ExplodeComponent::getFuseLength() const
ExplodeComponent::setFuseLength(int)
ExplodeComponent::getInitialFuseLength() const
ExplodeComponent::getIsFuseLit() const
ExplodeComponent::setAllowUnderwater(bool)
ExplodeComponent::isFuseLit() const
