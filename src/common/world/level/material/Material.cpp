Material::operator==(Material const&) const
Material::operator!=(Material const&) const
Material::initMaterials()
Material::teardownMaterials()
Material::_setupSurfaceMaterials()
Material::Material(MaterialType, Material::Settings, float)
Material::_setReplaceable()
Material::~Material()
Material::isType(MaterialType) const
Material::isSolidBlocking() const
Material::getBlocksMotion() const
Material::isFlammable() const
Material::isNeverBuildable() const
Material::isAlwaysDestroyable() const
Material::isReplaceable() const
Material::isLiquid() const
Material::getTranslucency() const
Material::getBlocksPrecipitation() const
Material::isSolid() const
Material::getColor() const
Material::isSuperHot() const
Material::isTopSolid(bool, bool) const
Material::getMaterial(MaterialType)
Material::addMaterial(std::unique_ptr<Material, std::default_delete<Material> >)
Material::_setFlammable()
Material::_setNotAlwaysDestroyable()
Material::_setNeverBuildable()
Material::_setNotBlockingMotion()
Material::_setNotBlockingPrecipitation()
Material::_setNotSolid()
Material::_setSuperHot()
Material::_setMapColor(Color const&)
