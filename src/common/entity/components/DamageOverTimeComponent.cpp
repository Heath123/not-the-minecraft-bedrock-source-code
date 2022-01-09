DamageOverTimeDefinition::buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageOverTimeDefinition> >&)
DamageOverTimeDefinition::initialize(EntityContext&, DamageOverTimeComponent&)
DamageOverTimeDefinition::deserializeData(Json::Value&)
DamageOverTimeDefinition::serializeData(Json::Value&) const
DamageOverTimeComponent::addAdditionalSaveData(CompoundTag&) const
DamageOverTimeComponent::readAdditionalSaveData(Actor&, CompoundTag const&, DataLoadHelper&)
DamageOverTimeComponent::getHurtValue() const
DamageOverTimeComponent::getDamageTimeInterval() const
DamageOverTimeComponent::getDamageTime() const
DamageOverTimeComponent::setDamageTime(int)
