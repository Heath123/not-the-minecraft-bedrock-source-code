CreativeGroupInfo::CreativeGroupInfo()
CreativeGroupInfo::CreativeGroupInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, short, short, CompoundTag const*)
Item::toBlockId(short)
Item::getDescriptionId[abi:cxx11]() const
Item::getRawNameId[abi:cxx11]() const
Item::resetId(short)
Item::setAtlasItemManager(std::shared_ptr<AtlasItemManager>)
itemVarientFromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Item::initServer(Json::Value&)
Item::initClient(Json::Value&, Json::Value&)
Item::tearDown()
Item::alterAvailableCreativeItems(ActorInfoRegistry*, LevelData&)
Item::beginCreativeGroup(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, ItemInstance const&)
Item::beginCreativeGroup(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, short, short, CompoundTag const*)
Item::beginCreativeGroup(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Block const*, CompoundTag const*)
Item::beginCreativeGroup(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Item*, short, CompoundTag const*)
Item::endCreativeGroup()
Item::addCreativeItem(short, short)
Item::addCreativeItem(ItemInstance const&)
Item::addCreativeItem(Block const&)
Item::addCreativeItem(Item*, short)
Item::addCreativeItem(ItemStack const&)
Item::findCreativeItem(ItemInstance const&)
Item::initCreativeItems(bool, ActorInfoRegistry*, BlockDefinitionGroup*, bool, BaseGameVersion const&, std::function<void (ActorInfoRegistry*, BlockDefinitionGroup*, bool)>)
Item::destroySpeedBonus(ItemInstance const&) const
Item::_helpChangeInventoryItemInPlace(Actor&, ItemStack&, ItemStack&, ItemAcquisitionMethod) const
Item::Item(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, short)
Item::getNamespace[abi:cxx11]() const
Item::~Item()
Item::~Item()
Item::getMaxStackSize(ItemDescriptor const&) const
Item::inventoryTick(ItemStack&, Level&, Actor&, int, bool) const
Item::refreshedInContainer(ItemStackBase&, Level&) const
Item::getCooldownType() const
Item::getCooldownTime() const
Item::fixupOnLoad(ItemStackBase&) const
Item::fixupOnLoad(ItemStackBase&, Level&) const
Item::getDamageValue(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&) const
Item::setDamageValue(ItemStackBase&, short) const
Item::getInHandUpdateType(Player const&, ItemInstance const&, ItemInstance const&, bool, bool) const
Item::getInHandUpdateType(Player const&, ItemStack const&, ItemStack const&, bool, bool) const
Item::isSameItem(ItemStackBase const&, ItemStackBase const&) const
Item::getInteractText[abi:cxx11](Player const&) const
Item::getFood() const
Item::getSeed() const
Item::getCamera() const
Item::setMaxStackSize(unsigned char)
Item::setRequiresWorldBuilder(bool)
Item::canBeDepleted() const
Item::getIcon(ItemStackBase const&, int, bool) const
Item::setIcon(TextureUVCoordinateSet const&)
Item::setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)
Item::setIconAtlas(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)
Item::setMinRequiredBaseGameVersion(BaseGameVersion const&)
Item::getBlockShape() const
Item::isMirroredArt() const
Item::setIsMirroredArt(bool)
Item::updateCustomBlockEntityTag(BlockSource&, ItemStack&, BlockPos&) const
Item::use(ItemStack&, Player&) const
Item::useOn(ItemStack&, Actor&, int, int, int, unsigned char, float, float, float) const
Item::canUseSeed(Actor&, BlockPos, unsigned char) const
Item::_checkUseOnPermissions(Actor&, ItemInstance&, unsigned char const&, BlockPos const&) const
Item::_checkUseOnPermissions(Actor&, ItemStack&, unsigned char const&, BlockPos const&) const
Item::_calculatePlacePos(ItemInstance&, Actor&, unsigned char&, BlockPos&) const
Item::_calculatePlacePos(ItemStack&, Actor&, unsigned char&, BlockPos&) const
Item::_useOn(ItemInstance&, Actor&, BlockPos, unsigned char, float, float, float) const
Item::_useOn(ItemStack&, Actor&, BlockPos, unsigned char, float, float, float) const
Item::dispense(BlockSource&, Container&, int, Vec3 const&, unsigned char) const
Item::useTimeDepleted(ItemInstance&, Level*, Player*) const
Item::useTimeDepleted(ItemStack&, Level*, Player*) const
Item::releaseUsing(ItemInstance&, Player*, int) const
Item::releaseUsing(ItemStack&, Player*, int) const
Item::getDestroySpeed(ItemInstance const&, Block const&) const
Item::canDestroySpecial(Block const&) const
Item::getLevelDataForAuxValue(int) const
Item::isStackedByData() const
Item::setCategory(CreativeItemCategory)
Item::getMaxDamage() const
Item::getAttackDamage() const
Item::hurtEnemy(ItemInstance&, Mob*, Mob*) const
Item::hurtEnemy(ItemStack&, Mob*, Mob*) const
Item::mineBlock(ItemInstance&, Block const&, int, int, int, Actor*) const
Item::mineBlock(ItemStack&, Block const&, int, int, int, Actor*) const
Item::setHandEquipped()
Item::isHandEquipped() const
Item::isArmor() const
Item::isDye() const
Item::isFertilizer(int) const
Item::allowOffhand() const
Item::setAllowOffhand(bool)
Item::showsDurabilityInCreative() const
Item::isWearableThroughLootTable(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&) const
Item::isGlint(ItemStackBase const&) const
Item::isThrowable() const
Item::isPattern() const
Item::canDestroyInCreative() const
Item::isDestructive(int) const
Item::buildDescriptionName[abi:cxx11](ItemStackBase const&) const
Item::buildDescriptionId[abi:cxx11](ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&) const
Item::buildEffectDescriptionName[abi:cxx11](ItemStackBase const&) const
Item::buildCategoryDescriptionName[abi:cxx11]() const
Item::appendFormattedHovertext(ItemStackBase const&, Level&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool) const
Item::readUserData(ItemStackBase&, IDataInput&, ReadOnlyBinaryStream&) const
Item::writeUserData(ItemStackBase const&, IDataOutput&) const
Item::setStackedByData(bool)
Item::setMaxDamage(int)
Item::getTextureUVCoordinateSet(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)
Item::getIconTextureUVSet(TextureAtlasItem const&, int, int)
Item::getTextureItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Item::getEnchantSlot() const
Item::getEnchantValue() const
Item::isComplex() const
Item::getDamageChance(int) const
Item::_textMatch(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)
Item::getFullItemName[abi:cxx11]() const
Item::getCommandName[abi:cxx11]() const
Item::getRendererId() const
Item::getSerializedName[abi:cxx11]() const
Item::getMaxUseDuration(ItemInstance const*) const
Item::getMaxUseDuration(ItemStack const*) const
Item::isExperimental(ItemDescriptor const*) const
Item::getRequiredBaseGameVersion() const
Item::executeOnResetBAIcallbacks() const
Item::addOnResetBAIcallback(std::function<void ()> const&)
Item::playSoundIncrementally(ItemInstance const&, Mob&) const
Item::playSoundIncrementally(ItemStack const&, Mob&) const
