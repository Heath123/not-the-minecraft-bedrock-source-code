BackgroundTaskQueue::BackgroundTaskQueue()
BackgroundTaskQueue::~BackgroundTaskQueue()
BackgroundTaskQueue::flush()
BackgroundTaskQueue::queue(std::shared_ptr<BackgroundTask>, bool)
BackgroundTaskQueue::getApproximateTaskCount() const
BackgroundTaskQueue::resortPriorityQueue()
BackgroundTaskQueue::tryPop(int)
BackgroundTaskQueue::_fetchAllAvailableTasks()
BackgroundTaskQueue::getNextItemPriority() const
