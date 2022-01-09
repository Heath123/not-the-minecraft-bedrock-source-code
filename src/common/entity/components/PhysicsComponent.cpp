PhysicsDefinition::buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PhysicsDefinition> >&)
PhysicsDefinition::initialize(EntityContext&, PhysicsComponent&)
PhysicsDefinition::deserializeData(Json::Value&)
PhysicsDefinition::serializeData(Json::Value&) const
PhysicsComponent::setAffectedByGravity(Actor&, bool)
PhysicsComponent::isAffectedByGravity(Actor const&) const
PhysicsComponent::setHasCollision(Actor&, bool)
