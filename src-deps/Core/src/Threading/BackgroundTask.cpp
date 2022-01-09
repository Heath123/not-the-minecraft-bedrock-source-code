BackgroundTask::PriorityComparer::operator()(std::shared_ptr<BackgroundTask> const&, std::shared_ptr<BackgroundTask> const&) const
BackgroundTask::PendingComparer::operator()(std::shared_ptr<BackgroundTask> const&, std::shared_ptr<BackgroundTask> const&) const
BackgroundTask::create(gsl::not_null<ITaskGroup*>, TaskStartInfo&, bool, std::function<TaskResult ()>)
BackgroundTask::_setPredecessor(std::shared_ptr<Bedrock::Threading::IAsyncResult<void> >, bool)
BackgroundTask::BackgroundTask(gsl::not_null<ITaskGroup*>, TaskStartInfo&, bool, std::function<TaskResult ()>)
BackgroundTask::~BackgroundTask()
BackgroundTask::~BackgroundTask()
BackgroundTask::getPrev()
BackgroundTask::getNext()
BackgroundTask::setPrev(BackgroundTask*)
BackgroundTask::setNext(std::shared_ptr<BackgroundTask>)
BackgroundTask::getStatus() const
BackgroundTask::getError() const
BackgroundTask::getException() const
BackgroundTask::cancel()
BackgroundTask::_tryTransitionTo(BackgroundTask::TaskStatus, bool, bool)
BackgroundTask::addOnComplete(std::function<void (Bedrock::Threading::IAsyncResult<void> const&)>)
BackgroundTask::isReady() const
BackgroundTask::isAsync() const
BackgroundTask::getGroup()
BackgroundTask::hasAffinity() const
BackgroundTask::canBeRunBy(std::thread::id) const
BackgroundTask::setStartAfterTime(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l> > >)
BackgroundTask::getStartAfterTime() const
BackgroundTask::isReadyToStart(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l> > >) const
BackgroundTask::getPriority() const
BackgroundTask::_backDownPriority()
BackgroundTask::getGroupState() const
BackgroundTask::setSyncPriority()
BackgroundTask::run(ITaskExecutionContext const*)
BackgroundTask::_isCancelPending()
BackgroundTask::invoke()
