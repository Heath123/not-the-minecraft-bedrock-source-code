Scheduler::ScopedChangeScheduler::ScopedChangeScheduler()
Scheduler::ScopedChangeScheduler::~ScopedChangeScheduler()
Scheduler::Scheduler(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned int)
Scheduler::setTargetFPS(unsigned int)
Scheduler::_assignToThread(std::thread::id)
Scheduler::~Scheduler()
Scheduler::_removeSchedulerAssignment()
Scheduler::_getCoroutineWorker()
Scheduler::getCoroutinePool()
Scheduler::_processNextCoroutine()
Scheduler::_runCoroutines(double)
Scheduler::_updateTimeCap(unsigned int)
Scheduler::processCoroutines(std::chrono::duration<long, std::ratio<1l, 1000000000l> >, std::chrono::duration<long, std::ratio<1l, 1000000000l> >)
Scheduler::getTotalFrameTime() const
Scheduler::_getNumberOfStarvedFrames() const
Scheduler::changeThread(std::thread::id)
Scheduler::isStarved() const
Scheduler::getEffectiveTargetFPS() const
Scheduler::queueCallback(std::shared_ptr<BackgroundTask>)
