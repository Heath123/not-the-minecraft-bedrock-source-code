BaseCommandBlock::BaseCommandBlock()
BaseCommandBlock::save(CompoundTag&) const
BaseCommandBlock::load(CompoundTag const&, DataLoadHelper&)
BaseCommandBlock::getSuccessCount() const
BaseCommandBlock::setSuccessCount(int)
BaseCommandBlock::getLastOutput[abi:cxx11]() const
BaseCommandBlock::setCommand(BlockSource&, BlockPos const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BaseCommandBlock::_setCommand(BlockSource&, CommandOrigin const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BaseCommandBlock::setCommand(BlockSource&, ActorUniqueID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BaseCommandBlock::getCommand[abi:cxx11]() const
BaseCommandBlock::performCommand(BlockSource&, BlockPos const&, bool&)
BaseCommandBlock::_performCommand(BlockSource&, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin> >, bool&)
BaseCommandBlock::performCommand(BlockSource&, ActorUniqueID const&)
BaseCommandBlock::getRawName[abi:cxx11]() const
BaseCommandBlock::setName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BaseCommandBlock::getName[abi:cxx11]() const
BaseCommandBlock::setTickDelay(int)
BaseCommandBlock::getTickDelay() const
BaseCommandBlock::setShouldExecuteOnFirstTick(bool)
BaseCommandBlock::shouldExecuteOnFirstTick() const
BaseCommandBlock::setOutput(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&)
BaseCommandBlock::getTrackOutput() const
BaseCommandBlock::setLastOutput(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&)
BaseCommandBlock::_getTimeStamp[abi:cxx11]() const
BaseCommandBlock::setTrackOutput(bool)
BaseCommandBlock::compile(CommandOrigin const&, Level&)
