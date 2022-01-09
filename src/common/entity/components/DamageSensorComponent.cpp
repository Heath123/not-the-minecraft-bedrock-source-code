DamageSensorTrigger::setCause(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
DamageSensorDefinition::buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageSensorDefinition> >&)
DamageSensorDefinition::addDamageSensorTrigger(DamageSensorTrigger const&)
DamageSensorDefinition::initialize(EntityContext&, DamageSensorComponent&) const
DamageSensorDefinition::uninitialize(EntityContext&, DamageSensorComponent&) const
DamageSensorDefinition::deserializeData(Json::Value&)
DamageSensorDefinition::deserializeTrigger(Json::Value&)
DamageSensorDefinition::serializeData(Json::Value&) const
DamageSensorDefinition::serializeTrigger(DamageSensorTrigger const&, Json::Value&) const
DamageSensorComponent::DamageSensorComponent()
DamageSensorComponent::initFromDefinition(Actor&, DamageSensorDefinition const&)
DamageSensorComponent::getCause() const
DamageSensorComponent::isFatal() const
DamageSensorComponent::getDamageMultipler()
DamageSensorComponent::recordDamage(Actor&, Actor*, ActorDamageCause, int, bool, VariantParameterList)
