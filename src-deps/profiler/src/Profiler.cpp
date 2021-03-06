Core::Profile::ProfileThread::ProfileThread(char const*)
Core::Profile::ProfileThread::~ProfileThread()
Core::Profile::ProfileSectionCPU::ProfileSectionCPU(Core::Profile::CPUProfileToken const&)
Core::Profile::ProfileSectionCPU::~ProfileSectionCPU()
Core::Profile::ProfileMultiSectionCPU::ProfileSectionSuspend::ProfileSectionSuspend(Core::Profile::ProfileMultiSectionCPU&)
Core::Profile::ProfileMultiSectionCPU::ProfileSectionSuspend::~ProfileSectionSuspend()
Core::Profile::ProfileMultiSectionCPU::ProfileMultiSectionCPU()
Core::Profile::ProfileMultiSectionCPU::ProfileMultiSectionCPU(Core::Profile::CPUProfileToken)
Core::Profile::ProfileMultiSectionCPU::~ProfileMultiSectionCPU()
Core::Profile::ProfileMultiSectionCPU::begin()
Core::Profile::ProfileMultiSectionCPU::end()
Core::Profile::ProfileMultiSectionCPU::suspend()
Core::Profile::CPUProfileToken::CPUProfileToken()
Core::Profile::CPUProfileToken::CPUProfileToken(unsigned long, char const*, char const*, unsigned int)
Core::Profile::CPUProfileToken::isValid() const
Core::Profile::CounterToken::CounterToken()
Core::Profile::CounterToken::CounterToken(unsigned long)
Core::Profile::getProfileTimeMS(char const*, char const*)
Core::Profile::generateCPUProfileToken(char const*, char const*, unsigned int)
Core::Profile::generateCounterToken(char const*)
Core::Profile::generateCounterTokenWithConfig(char const*, Core::Profile::CounterFormat, long, Core::Profile::CounterFlags)
Core::Profile::findCPUProfileToken(char const*, char const*)
Core::Profile::getLargestFrameTimeMS(Core::Profile::CPUProfileToken)
Core::Profile::getSmallestFrameTimeMS(Core::Profile::CPUProfileToken)
Core::Profile::getFrameTimeTotalMS(Core::Profile::CPUProfileToken)
Core::Profile::getFrameCount(Core::Profile::CPUProfileToken)
Core::Profile::onThreadCreate(char const*)
Core::Profile::onThreadDestroy()
Core::Profile::onMainThreadCreate()
Core::Profile::enterCPUProfile(Core::Profile::CPUProfileToken const&)
Core::Profile::leaveCPUProfile(Core::Profile::CPUProfileToken const&)
Core::Profile::counterAdd(Core::Profile::CounterToken, long)
Core::Profile::counterAdd(char const*, long)
Core::Profile::counterSet(Core::Profile::CounterToken, long)
Core::Profile::counterSet(char const*, long)
Core::Profile::initializeProfile()
Core::Profile::shutdownProfile()
Core::Profile::profileFlip()
Core::Profile::constructLabel[abi:cxx11](char const*)
Core::Profile::dumpFile(char const*, Core::Profile::FileExtension)
Core::Profile::onFileOpenRequest(bool)
Core::Profile::onFileOpenRetry(bool)
Core::Profile::onFileOpenRetrySuccess(bool)
Core::Profile::onFileOpenFailed(bool)
Core::Profile::getFileOpenStats(Core::Profile::FileCounters&, Core::Profile::FileCounters&)
