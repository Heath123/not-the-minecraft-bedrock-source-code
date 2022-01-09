Interaction::setCooldown(float const&)
Interaction::setTransformItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Interaction::setParticleType(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Interaction::addLevelSoundEventByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Interaction::addActorDefinitionIdentifierByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
InteractDefinition::buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InteractDefinition> >&)
InteractDefinition::addInteraction(Interaction const&)
InteractDefinition::initialize(EntityContext&, InteractComponent&) const
InteractComponent::setCooldownCounter(short)
InteractDefinition::deserializeData(Json::Value&)
InteractDefinition::deserializeInteraction(Json::Value&)
InteractDefinition::serializeData(Json::Value&) const
InteractDefinition::serializeInteraction(Interaction const&, Json::Value&) const
InteractComponent::initFromDefinition(Actor&, InteractDefinition const&)
InteractComponent::getInteraction(Actor&, Player&, ActorInteraction&)
InteractComponent::_runInteraction(Actor&, Interaction const&, Player&, ActorInteraction&)
InteractComponent::getCooldownCounter() const
