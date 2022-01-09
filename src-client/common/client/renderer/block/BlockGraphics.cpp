BlockSoundTypeFromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockSoundTypeToString[abi:cxx11](BlockSoundType)
BlockGraphics::getForBlock(Block const&)
BlockGraphics::getForBlock(BlockLegacy const&)
BlockGraphics::getBlocks()
BlockGraphics::setAtlasItemManager(std::shared_ptr<AtlasItemManager>)
BlockGraphics::setTextures(BlockGraphics&, Json::Value const&)
BlockGraphics::setTextureItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockGraphics::setTextureItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockGraphics::setTextureItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockGraphics::setCarriedTextures(BlockGraphics&, Json::Value const&)
BlockGraphics::setCarriedTextureItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockGraphics::setCarriedTextureItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockGraphics::setCarriedTextureItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockGraphics::setBlockShape(BlockGraphics&, Json::Value const&)
BlockGraphics::getBlockShape() const
BlockGraphics::setBlockShape(BlockShape)
BlockGraphics::setBrightnessGamma(BlockGraphics&, Json::Value const&)
BlockGraphics::setSoundType(BlockGraphics&, Json::Value const&)
BlockGraphics::setSoundType(BlockSoundType)
BlockGraphics::isInitialized()
BlockGraphics::useBlockModel() const
BlockGraphics::useTessellatedModel() const
BlockGraphics::getTessellatedModel(int, BlockPos const&) const
BlockGraphics::getTessellatedModel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, BlockPos const&) const
BlockGraphics::getTessellatedPartIndex(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
BlockGraphics::loadCustomIconTexture(Json::Value const&)
BlockGraphics::_findOrAppendTexture(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockGraphics::getTextureItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockGraphics::_loadCustomBlockShapeModel(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&, Json::Value const&)
BlockGraphics::findBlockModel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockGraphics::findOrTessellateModel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, BlockGeometry::Model const*)
BlockGraphics::loadCustomBlockShapeModels(Json::Value const&)
BlockGraphics::registerBlockGraphics(std::vector<Json::Value, std::allocator<Json::Value> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, BlockShape)
BlockGraphics::getBlock() const
BlockGraphics::texturePaletteSize() const
BlockGraphics::setDefaultCarriedTextures()
BlockGraphics::registerLooseBlockGraphics(std::vector<Json::Value, std::allocator<Json::Value> >&, BlockPalette const&)
BlockGraphics::initBlocks(ResourcePackManager&, BlockPalette const&)
BlockGraphics::_initBlockModels(ResourcePackManager&)
BlockGraphics::setMapColor(Color const&)
BlockGraphics::enableAllowSame()
BlockGraphics::teardownBlocks()
BlockGraphics::BlockGraphics(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockGraphics::BlockGraphics(Block const&, BlockGraphics::ConstructorToken)
BlockGraphics::~BlockGraphics()
BlockGraphics::~BlockGraphics()
BlockGraphics::getMapColor() const
BlockGraphics::animateTick(BlockSource&, BlockPos const&, Random&)
BlockGraphics::getIconTexture(int) const
BlockGraphics::getTextureCarriedVariations(unsigned long, int) const
BlockGraphics::getTexture(unsigned long, int) const
BlockGraphics::getTextureDefaultVariations(unsigned long, int) const
BlockGraphics::getTexture(unsigned long, Block const&) const
BlockGraphics::getTexture(BlockPos const&, unsigned long, int) const
BlockGraphics::chooseRandomTexture(float, std::vector<TextureUVCoordinateSet, std::allocator<TextureUVCoordinateSet> > const&)
BlockGraphics::getTexture(BlockPos const&, unsigned long, Block const&) const
BlockGraphics::_chooseRandomTexture(float, std::vector<TextureUVCoordinateSet, std::allocator<TextureUVCoordinateSet> > const&)
BlockGraphics::isValid() const
BlockGraphics::getAtlasItem(unsigned long) const
BlockGraphics::getCarriedTexture(unsigned long, int) const
BlockGraphics::randomlyModifyPosition(BlockPos const&, int&) const
BlockGraphics::randomlyModifyPosition(BlockPos const&) const
BlockGraphics::getColor(int) const
BlockGraphics::getColor(BlockSource&, BlockPos const&) const
BlockGraphics::getColorForParticle(BlockSource&, BlockPos const&, int) const
BlockGraphics::isSeasonTinted(BlockSource&, BlockPos const&) const
BlockGraphics::setVisualShape(Vec3 const&, Vec3 const&)
BlockGraphics::setVisualShape(AABB const&)
BlockGraphics::onGraphicsModeChanged(bool, bool)
BlockGraphics::getTextureUVCoordinateSet(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int, int)
BlockGraphics::getIconYOffset() const
BlockGraphics::isAlphaTested()
BlockGraphics::getRenderLayer(BlockSource&, BlockPos const&) const
BlockGraphics::getRenderLayer() const
BlockGraphics::getExtraRenderLayers()
BlockGraphics::isFull() const
BlockGraphics::isFullAndOpaque() const
BlockGraphics::isFullAndOpaque(Block const&)
BlockGraphics::getVisualShape(Block const&, AABB&, bool) const
BlockGraphics::getVisualShape(unsigned short, AABB&, bool) const
BlockGraphics::getSoundType() const
BlockGraphics::lookupByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)
BlockGraphics::getTessellatedModelTextures(unsigned long, BlockPos const&, int, bool, std::vector<TextureUVCoordinateSet, std::allocator<TextureUVCoordinateSet> >&) const
BlockGraphics::getPositionVariantIndex(int, BlockPos const&) const
