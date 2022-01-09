WorkerPool::getAllPools()
WorkerPool::_registerPool(WorkerPool&)
WorkerPool::_unregisterPool(WorkerPool&)
WorkerPool::WorkerPool(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned long, Bedrock::Threading::OSThreadPriority const&, std::optional<unsigned long>, bool)
WorkerPool::WorkerPool(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, Scheduler&)
WorkerPool::~WorkerPool()
WorkerPool::kick(unsigned long)
WorkerPool::getBacklogSizeBusyLimit() const
WorkerPool::queue(std::shared_ptr<BackgroundTask>, bool)
WorkerPool::tryPop(int)
WorkerPool::_checkPendingWork()
WorkerPool::resortPriorityQueue()
WorkerPool::size() const
WorkerPool::getThreadIds() const
WorkerPool::allWorkersIdle() const
WorkerPool::shiftWorkersPriority(Bedrock::Threading::OSThreadPriority const&)
