BlockDefinitionGroup::BlockDefinitionGroup()
BlockDefinitionGroup::~BlockDefinitionGroup()
BlockDefinitionGroup::registerBlocks()
BlockDefinitionGroup::clearDefinitions()
BlockDefinitionGroup::getBlockDefinitions() const
BlockDefinitionGroup::tryGetBlockDefinition(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
BlockDefinitionGroup::digestServerBlockProperties(UpdateBlockPropertiesPacket const&, BlockComponentFactory const&)
BlockDefinitionGroup::buildBlockSchema(BlockComponentFactory const&)
BlockDefinitionGroup::_buildBlockDescriptionSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition>&)
BlockDefinitionGroup::_buildBlockComponentsSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition>&, BlockComponentFactory const&)
BlockDefinitionGroup::loadResources(ResourcePackManager&, BlockComponentFactory const&)
BlockDefinitionGroup::_loadDefinitionFormatVersion(Json::Value const&, SemVersion&)
BlockDefinitionGroup::_loadBlockDescription(Json::Value const&, BlockDescription&)
BlockDefinitionGroup::_loadComponents(Json::Value&, BlockDefinition&, BlockComponentFactory const&, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockDefinition> >&)
