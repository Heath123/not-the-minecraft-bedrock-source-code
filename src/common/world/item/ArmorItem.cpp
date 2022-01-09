ResetDefaultLeatherColor()
SetDefaultLeatherColor(int)
ArmorItem::ArmorMaterial::ArmorMaterial(int, int, int, int, int, int)
ArmorItem::ArmorMaterial::getHealthForSlot(ArmorSlot) const
ArmorItem::ArmorMaterial::getDefenseForSlot(ArmorSlot) const
ArmorItem::getTierItem() const
ArmorItem::isValidRepairItem(ItemInstance const&, ItemInstance const&) const
ArmorItem::ArmorMaterial::getEnchantValue() const
ArmorItem::hasCustomColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&) const
ArmorItem::getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&, ItemDescriptor const&) const
ArmorItem::clearColor(ItemStack&) const
ArmorItem::setColor(ItemStack&, Color const&) const
ArmorItem::isTintable() const
ArmorItem::ArmorItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int, ArmorItem::ArmorMaterial const&, int, ArmorSlot)
ArmorItem::isArmor() const
ArmorItem::getEnchantSlot() const
ArmorItem::isElytra() const
ArmorItem::getEnchantValue() const
ArmorItem::getArmorValue() const
ArmorItem::getArmorForSlot(ArmorSlot, int)
ArmorItem::dispense(BlockSource&, Container&, int, Vec3 const&, unsigned char) const
ArmorItem::dispenseArmor(BlockSource&, Container&, int, Vec3 const&, unsigned char, ArmorSlot)
ArmorItem::getSlotForItem(ItemStack const&)
ArmorItem::getDamageChance(int) const
ArmorItem::appendFormattedHovertext(ItemStackBase const&, Level&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool) const
ArmorItem::mineBlock(ItemStack&, Block const&, int, int, int, Actor*) const
ArmorItem::hurtEnemy(ItemStack&, Mob*, Mob*) const
ArmorItem::setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)
ArmorItem::getIcon(ItemStackBase const&, int, bool) const
ArmorItem::isElytraBroken(int)
ArmorItem::use(ItemStack&, Player&) const
ArmorItem::playEquipSound(BlockSource&, ArmorSlot, Player&) const
ArmorItem::isElytra(ItemDescriptor const&)
ArmorItem::isFlyEnabled(ItemInstance const&)
ArmorItem::isDamageable(ItemDescriptor const&)
