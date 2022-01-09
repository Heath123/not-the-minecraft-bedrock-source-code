CommandSelectorBase::CommandSelectorBase(bool)
CommandSelectorBase::setVersion(int)
CommandSelectorBase::setType(CommandSelectionType)
CommandSelectorBase::isExplicitIdSelector() const
CommandSelectorBase::getType() const
CommandSelectorBase::setOrder(CommandSelectionOrder)
CommandSelectorBase::getOrder() const
CommandSelectorBase::addNameFilter(InvertableFilter<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > const&)
CommandSelectorBase::hasName() const
CommandSelectorBase::getName[abi:cxx11]() const
CommandSelectorBase::addTypeFilter(InvertableFilter<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > const&)
CommandSelectorBase::addTagFilter(InvertableFilter<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > const&)
CommandSelectorBase::setResultCount(unsigned long)
CommandSelectorBase::setPosition(CommandPosition)
CommandSelectorBase::setBox(BlockPos)
CommandSelectorBase::setRadiusMin(float)
CommandSelectorBase::setRadiusMax(float)
CommandSelectorBase::setIncludeDeadPlayers(bool)
CommandSelectorBase::addFilter(std::function<bool (CommandOrigin const&, Actor const&)>)
CommandSelectorBase::setExplicitIdSelector(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
CommandSelectorBase::compile(CommandOrigin const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
CommandSelectorBase::isExpansionAllowed(CommandOrigin const&) const
CommandSelectorBase::matchName(Actor const&) const
CommandSelectorBase::matchType(Actor const&) const
CommandSelectorBase::matchTag(Actor const&) const
CommandSelectorBase::newResults(CommandOrigin const&) const
CommandSelectorBase::filter(CommandOrigin const&, Actor&, float) const
checkTypeFilter(ActorDefinitionIdentifier const&, ActorDefinitionIdentifier const&)
CommandSelectorBase::isInDimension(CommandOrigin const&, Actor&) const
CommandSelectorBase::getExplicitPlayerName[abi:cxx11]() const
