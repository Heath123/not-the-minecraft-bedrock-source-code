Weather::Weather(Dimension&)
Weather::setRainLevel(float)
Weather::setLightningLevel(float)
Weather::~Weather()
Weather::~Weather()
Weather::isSnowTemperature(BlockSource&, BlockPos const&) const
Weather::levelEvent(LevelEvent, Vec3 const&, int)
Weather::tick()
Weather::serverTick()
Weather::calcLightningCycleTime() const
Weather::_notifyWeatherChangedEvent(LevelData const&) const
Weather::calcRainCycleTime() const
Weather::calcRainDuration() const
Weather::getLightningLevel(float) const
Weather::getRainLevel(float) const
Weather::getFogLevel() const
Weather::setFogLevel(float)
Weather::isLightning() const
Weather::isRaining() const
Weather::isPrecipitatingAt(BlockSource&, BlockPos const&) const
Weather::isRainingAt(BlockSource&, BlockPos const&) const
Weather::isSnowingAt(BlockSource&, BlockPos const&) const
Weather::getSkyFlashTime() const
Weather::setSkyFlashTime(int)
Weather::stop()
Weather::canPlaceTopSnow(BlockSource&, BlockPos const&, bool, bool, int*) const
Weather::calcSnowBlockDepth(BlockSource&, BlockPos const&, int) const
Weather::blockSupportsFallingSnow(Block const&) const
Weather::tryToPlaceTopSnow(BlockSource&, BlockPos const&, bool, bool)
Weather::rebuildTopSnowToDepth(BlockSource&, BlockPos const&, int)
