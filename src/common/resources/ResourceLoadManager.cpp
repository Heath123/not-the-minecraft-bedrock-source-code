ResourceLoadManager::TaskGroupState::start()
ResourceLoadManager::TaskGroupState::stop()
ResourceLoadManager::TaskGroupState::pause()
ResourceLoadManager::TaskGroupState::resume()
ResourceLoadManager::TaskGroupState::getIsRunning() const
ResourceLoadManager::TaskGroupState::getShouldTaskGroupPause() const
ResourceLoadManager::ResourceLoadTaskGroup::ResourceLoadTaskGroup(gsl::basic_string_span<char const, -1l>, ResourceLoadType, std::vector<ResourceLoadType, std::allocator<ResourceLoadType> >, Scheduler&, WorkerPool&)
ResourceLoadManager::ResourceLoadTaskGroup::_applyTaskGroupState()
ResourceLoadManager::ResourceLoadTaskGroup::~ResourceLoadTaskGroup()
ResourceLoadManager::ResourceLoadTaskGroup::isEmpty() const
ResourceLoadManager::ResourceLoadTaskGroup::queue(std::function<TaskResult ()>, std::function<void ()>, unsigned int)
ResourceLoadManager::ResourceLoadTaskGroup::getName() const
ResourceLoadManager::_wrapTaskCallback(ResourceLoadManager::ResourceLoadTaskGroup&, std::function<TaskResult ()>&&)
ResourceLoadManager::_wrapMainThreadCallback(ResourceLoadManager::ResourceLoadTaskGroup&, std::function<void ()>&&)
ResourceLoadManager::ResourceLoadTaskGroup::queueAsync(std::function<TaskResult ()>, unsigned int)
ResourceLoadManager::ResourceLoadTaskGroup::queueSync(std::function<TaskResult ()>, unsigned int)
ResourceLoadManager::ResourceLoadTaskGroup::start()
ResourceLoadManager::ResourceLoadTaskGroup::pause()
ResourceLoadManager::ResourceLoadTaskGroup::resume()
ResourceLoadManager::ResourceLoadTaskGroup::update()
ResourceLoadManager::ResourceLoadTaskGroup::reset()
ResourceLoadManager::ResourceLoadTaskGroup::sync()
ResourceLoadManager::ResourceLoadTaskGroup::getResourceLoadType()
ResourceLoadManager::ResourceLoadTaskGroup::getDependencies() const
ResourceLoadManager::ResourceLoadTaskGroup::isRunning() const
ResourceLoadManager::ResourceLoadManager()
ResourceLoadManager::_initializeResourceLoadTaskGroups()
ResourceLoadManager::ResourceLoadManager(Scheduler&)
ResourceLoadManager::~ResourceLoadManager()
ResourceLoadManager::registerResourceLoadTaskGroup(gsl::basic_string_span<char const, -1l>, ResourceLoadType, std::vector<ResourceLoadType, std::allocator<ResourceLoadType> >)
ResourceLoadManager::_prepareTaskGroupToRunAgain(ResourceLoadManager::ResourceLoadTaskGroup*)
ResourceLoadManager::queue(ResourceLoadType, std::function<TaskResult ()>, std::function<void ()>, unsigned int)
ResourceLoadManager::_getResourceLoadTaskGroupFor(ResourceLoadType) const
ResourceLoadManager::queueAsync(ResourceLoadType, std::function<TaskResult ()>, unsigned int)
ResourceLoadManager::queueSync(ResourceLoadType, std::function<TaskResult ()>, unsigned int)
ResourceLoadManager::update()
ResourceLoadManager::cancel()
ResourceLoadManager::cancel(ResourceLoadType)
ResourceLoadManager::isComplete(ResourceLoadType) const
ResourceLoadManager::isComplete() const
ResourceLoadManager::sync(ResourceLoadType)
ResourceLoadManager::setAppSuspended(bool)
ResourceLoadManager::isSuspended()
ResourceLoadManager::queueChild(std::function<TaskResult ()>, std::function<void ()>, unsigned int)
