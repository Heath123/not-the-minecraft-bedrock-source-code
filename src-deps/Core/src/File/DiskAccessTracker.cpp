Core::DiskAccessTracker::DiskAccessTracker(std::chrono::duration<long, std::ratio<1l, 1000000000l> >, std::chrono::duration<long, std::ratio<1l, 1000000000l> >)
Core::DiskAccessTracker::getDiskAccessTracker()
Core::DiskAccessTracker::trackWriteOperation(Core::Path const&)
Core::DiskAccessTracker::_ignoreWrite(Core::Path const&) const
Core::DiskAccessTracker::_addNewWriteOperation(unsigned long)
Core::DiskAccessTracker::trackWriteAmount(Core::Path const&, unsigned long)
Core::DiskAccessTracker::getAverageBytesWrittenPerSecond() const
Core::DiskAccessTracker::getAverageNumberOfWritesPerSecond() const
Core::DiskAccessTracker::addIgnoredPath(Core::Path const&)
Core::DiskAccessTracker::removeIgnoredPath(Core::Path const&)
Core::DiskAccessTracker::update()
