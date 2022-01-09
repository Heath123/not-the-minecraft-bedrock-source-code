GeneDefinition::addGeneticVariant(GeneticVariant const&)
GeneticsDefinition::buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GeneticsDefinition> >&)
GeneticsDefinition::addGeneDefinition(GeneDefinition const&)
GeneticsDefinition::initialize(EntityContext&, GeneticsComponent&)
GeneticsComponent::_createRandomGene(GeneDefinition const&)
GeneticsDefinition::deserializeData(Json::Value&)
GeneticsDefinition::_parseGenes(Json::Value&)
GeneticsDefinition::serializeData(Json::Value&) const
GeneticsDefinition::_parseGeneticVariants(Json::Value&, GeneDefinition&)
GeneticsComponent::GeneticsComponent()
GeneticsComponent::addAdditionalSaveData(CompoundTag&) const
GeneticsComponent::readAdditionalSaveData(Actor&, CompoundTag const&, DataLoadHelper&)
GeneticsComponent::isCompatible(GeneticsComponent::Gene const&, GeneDefinition const&) const
GeneticsComponent::findGene(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
GeneticsComponent::initializeGenesFromParents(Actor&, Actor&, Actor&)
GeneticsComponent::_crossParentGenes(GeneDefinition const&, GeneticsComponent::Gene&, GeneticsComponent::Gene&)
GeneticsComponent::fireGeneEvents(Actor&) const
GeneticsComponent::_matchesGeneticVariant(GeneticsComponent::Gene const&, GeneticVariant const&) const
GeneticsComponent::hasMatchingGeneValues(unsigned long, int, int) const
GeneticsComponent::buildDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
GeneticsComponent::_shouldMutate()
GeneticsComponent::_createRandomAllele(GeneDefinition const&)
