BackgroundWorker::BackgroundWorker(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool, Bedrock::Threading::OSThreadPriority const&, std::optional<unsigned long>, WorkerPool&, bool)
BackgroundWorker::~BackgroundWorker()
BackgroundWorker::wake()
BackgroundWorker::~BackgroundWorker()
BackgroundWorker::isAsync() const
BackgroundWorker::canTaskRunAgain() const
BackgroundWorker::_hasAvailableWork() const
BackgroundWorker::queue(std::shared_ptr<BackgroundTask>)
BackgroundWorker::_assignWorkerToThisThread()
BackgroundWorker::start()
BackgroundWorker::_setCoreAffinity()
BackgroundWorker::_setOSPriority()
BackgroundWorker::_doNoWorkDelay()
BackgroundWorker::_sleepTimeoutElapsed() const
BackgroundWorker::_workerThread() const
BackgroundWorker::processTaskSync()
BackgroundWorker::_processNextTask()
BackgroundWorker::_tryPop()
BackgroundWorker::resortPriorityQueue()
BackgroundWorker::_canAccessInternalState()
BackgroundWorker::resetWorkerThreadID()
BackgroundWorker::setMaxSleepTimeout(std::chrono::duration<long, std::ratio<1l, 1000000000l> >)
BackgroundWorker::getThreadId() const
BackgroundWorker::getLocal()
BackgroundWorker::pushScope()
BackgroundWorker::popScope(BackgroundWorker*)
BackgroundWorker::_runOneTask()
BackgroundWorker::requestStop(bool)
BackgroundWorker::setOSPriority(Bedrock::Threading::OSThreadPriority const&)
BackgroundWorker::getName[abi:cxx11]() const
BackgroundWorker::isIdle() const
BackgroundWorker::getApproximateTaskCount() const
