TaskResult::requeueAfter(std::chrono::duration<long, std::ratio<1l, 1000000000l> >)
TaskResult::requeueAt(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l> > >)
TaskResult::waitFor(std::shared_ptr<Bedrock::Threading::IAsyncResult<void> >, bool)
TaskResult::TaskResult()
TaskResult::TaskResult(bool)
TaskResult::TaskResult(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l> > >)
TaskResult::TaskResult(std::shared_ptr<Bedrock::Threading::IAsyncResult<void> >, bool)
TaskResult::isDone() const
TaskResult::hasDelay() const
TaskResult::isWaiting() const
TaskResult::getRunAtTime() const
TaskResult::getWaitingOperation() const
TaskResult::isWaitingOperationLinked() const
