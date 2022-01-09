BasicTimer::BasicTimer(double, std::function<double ()>)
BasicTimer::BasicTimer(double, double, std::function<double ()>)
BasicTimer::operator<(BasicTimer const&) const
BasicTimer::getTimeOverAt() const
BasicTimer::getTimeDelay() const
BasicTimer::isFinished() const
BasicTimer::resetTime()
BasicTimer::resetTime(double)
BasicTimer::resetTime(double, double)
BasicTimer::repeatIfFinished()
BasicTimer::repeatIfFinished(double)
BasicTimer::finishTimer()
BasicTimer::getStartTime()
BasicTimer::hasExpired() const
