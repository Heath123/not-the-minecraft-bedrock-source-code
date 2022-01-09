FunctionManager::FunctionManager(std::unique_ptr<ICommandDispatcher, std::default_delete<ICommandDispatcher> >, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin> >, GameRule const*)
FunctionManager::~FunctionManager()
FunctionManager::~FunctionManager()
FunctionManager::load(ResourcePackManager&, CommandRegistry&)
FunctionManager::_addTickFunctionsFromJson(Json::Value const&)
FunctionManager::getFunctionNameFromPath[abi:cxx11](Core::Path const&)
FunctionManager::execute(FunctionEntry&, CommandOrigin const&)
FunctionManager::_isRecursiveCall() const
FunctionManager::_processCommandStack(FunctionEntry&, CommandOrigin const&)
FunctionManager::queueCommands(std::vector<std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry> >, std::allocator<std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry> > > > const&, CommandOrigin const&)
FunctionManager::getExecutionLimit() const
FunctionManager::_addOriginReference(CommandOrigin const&, unsigned int)
FunctionManager::tick()
FunctionManager::getCommandDispatcher()
FunctionManager::getFunction(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
FunctionManager::getEarliestSupportedCommandVersion()
FunctionManager::_createFunction(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry> >, std::allocator<std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry> > > >&&)
FunctionManager::_createFunctionWithError(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, FunctionState)
FunctionManager::_processFunctionEntry(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, CurrentCmdVersion, CommandRegistry const&)
FunctionManager::_getCommandList() const
FunctionManager::_getTickList() const
FunctionManager::_removeOriginReference(CommandOrigin const&, unsigned int)
