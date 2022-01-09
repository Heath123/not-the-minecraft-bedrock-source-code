BoneOrientation::BoneOrientation(HashedString const&)
BoneOrientation::init(BoneOrientationTransform&)
BoneOrientation::add(float, float, float, BoneTransformType)
BoneOrientation::scale(float, float, float, BoneTransformType)
BoneOrientation::applyShortestPathBlend(BoneOrientation const&, BoneOrientation const&, float, float)
BoneOrientation::getTransform() const
BoneOrientation::setDefaultTransform(BoneOrientationTransform const&)
BoneOrientation::setTransform(BoneOrientationTransform const&)
BoneOrientation::getDefaultTransform() const
BoneOrientation::getDefaultTransform()
BoneOrientation::setRotationRelativeMode(BoneAnimationRelativeMode)
BoneOrientation::getRotationRelativeMode() const
BoneOrientation::setPivot(Vec3 const&)
BoneOrientation::getPivot() const
BoneOrientation::getPivot()
BoneOrientation::transform3(Vec3&)
BoneOrientation::getName() const
BoneOrientation::setMatrix(Matrix const&)
BoneOrientation::getMatrix() const
BoneOrientation::shouldOverrideStackMatrix() const
BoneOrientation::setOverrideStackMatrix(bool)
BoneOrientation::updateLocalPreTransformMatrix()
BoneOrientation::shouldApplyLocalPreTransformMatrix() const
BoneOrientation::rotateLocalPreTransformMatrix(float, Vec3 const&)
BoneOrientation::getLocalPreTransformMatrix() const
BoneOrientation::copySourceDataFrom(BoneOrientation const&)
BoneOrientation::getIdentityBoneOrientation()
BoneOrientation::setDefaultPose()
