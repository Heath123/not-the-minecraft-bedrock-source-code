TaskGroup::getCurrentTaskGroup()
TaskGroup::queueChild(gsl::basic_string_span<char const, -1l>, std::function<TaskResult ()>&&, std::function<void ()>&&)
TaskGroup::queueChild(TaskStartInfo&, std::function<TaskResult ()>&&, std::function<void ()>&&)
TaskGroup::queue(TaskStartInfo&, std::function<TaskResult ()>&&, std::function<void ()>&&)
TaskGroup::queueChildSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult ()>&&)
TaskGroup::queueChildSync(TaskStartInfo&, std::function<TaskResult ()>&&)
TaskGroup::queueSync(TaskStartInfo&, std::function<TaskResult ()>&&)
TaskGroup::TaskGroup(WorkerPool&, Scheduler&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)
TaskGroup::TaskGroup(WorkerPool&, Scheduler&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, TaskType)
TaskGroup::~TaskGroup()
TaskGroup::flush(std::function<void ()>)
TaskGroup::~TaskGroup()
TaskGroup::queue(gsl::basic_string_span<char const, -1l>, std::function<TaskResult ()>&&, std::function<void ()>&&)
TaskGroup::_queueInternal(std::shared_ptr<BackgroundTask>)
TaskGroup::queueSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult ()>&&)
TaskGroup::sync_DEPRECATED_ASK_TOMMO(std::function<void ()>)
TaskGroup::isEmpty() const
TaskGroup::pause()
TaskGroup::resume()
TaskGroup::count() const
TaskGroup::getMaxConcurrency() const
TaskGroup::disableOwnerThreadChecks()
TaskGroup::getName() const
TaskGroup::getWorkerPool()
TaskGroup::getScheduler()
TaskGroup::_forAllTasks(std::unique_lock<std::mutex>&, std::function<void (std::shared_ptr<BackgroundTask> const&)>)
TaskGroup::getState() const
TaskGroup::getOwnerThreadID() const
TaskGroup::kick(unsigned int)
TaskGroup::taskComplete(gsl::not_null<BackgroundTask*>)
TaskGroup::processCoroutines()
TaskGroup::taskRegister(std::shared_ptr<BackgroundTask>)
TaskGroup::requeueTask(std::shared_ptr<BackgroundTask>, bool)
TaskGroup::_isOwner() const
