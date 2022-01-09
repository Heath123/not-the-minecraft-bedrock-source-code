Biome::writePacketData(CompoundTag&, TagRegistry&)
Biome::initFromPacketData(CompoundTag const&, TagRegistry&)
Biome::setTemperatureAndDownfall(float, float)
Biome::addTag(Util::HashString, TagRegistry&)
Biome::initEntity(EntityRegistryOwned&)
Biome::initBiomeDefault(Json::Value&)
Biome::initBiome(Json::Value&)
Biome::Biome(int)
Biome::setDepthAndScale(BiomeHeight const&)
Biome::~Biome()
Biome::~Biome()
Biome::setName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Biome::setColor(int)
Biome::setColor(int, bool)
Biome::setMapWaterColor(int)
Biome::setOddColor(int)
Biome::setWaterColors(Color const&, float, Color const&, float)
Biome::setFogDist(float)
Biome::setNoRain()
Biome::setSnowCovered()
Biome::setSnowAccumulation(float, float)
Biome::setOceanRuinConfig(OceanRuinConfiguration const&)
Biome::getSnowAccumulationLayers() const
Biome::hasTag(IDType<TagIDType> const&, TagRegistry const&) const
Biome::hasTag(WellKnownTagID const&) const
Biome::getSkyColor(float)
Biome::getMobs() const
Biome::getMobsMutable()
Biome::getFoliageColor(BlockPos const&) const
Biome::getDefaultBiomeTemperature() const
Biome::getDownfall() const
Biome::getBirchFoliageColor(BlockPos const&) const
Biome::getEvergreenFoliageColor(BlockPos const&) const
Biome::getMapFoliageColor(BlockPos const&) const
Biome::getMapBirchFoliageColor(BlockPos const&) const
Biome::getMapEvergreenFoliageColor(BlockPos const&) const
Biome::buildWaterColor(BlockPos const&, BlockPos const&, BlockSource&, Random&)
Biome::getWaterColor(BlockSource&, BlockPos const&)
Biome::getWaterNoise()
Biome::getGrassColor(BlockPos const&) const
Biome::getMapGrassColor(BlockPos const&) const
Biome::getDebugMapColor() const
Biome::getDebugMapOddColor() const
Biome::getBiomeInfoNoise() const
Biome::getBiomeType() const
Biome::getTemperatureCategory() const
Biome::getDownfallInt()
Biome::isSnowCovered() const
Biome::isHumid() const
Biome::getTemperature(BlockSource const&, BlockPos const&) const
Biome::getTemperatureWorldGen(BlockPos const&) const
Biome::buildCachedTemperatureNoise(LevelChunk&)
Biome::getFreezingHeight(BlockSource const&, BlockPos const&) const
Biome::canHaveSnowfall(BlockSource const&, BlockPos const&) const
