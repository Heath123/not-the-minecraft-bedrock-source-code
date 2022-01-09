Path::Path()
Path::~Path()
Path::buildFromNodes(std::vector<Path::Node, std::allocator<Path::Node> >&&, PathCompletionType)
Path::next()
Path::isDone()
Path::isValid() const
Path::isValidIndex(unsigned long) const
Path::getSize() const
Path::setSize(unsigned long)
Path::getIndex() const
Path::setIndex(unsigned long)
Path::getPos(Actor const*, unsigned long) const
Path::getBlockPos(Actor const*, unsigned long) const
Path::currentPos(Actor const*) const
Path::getCompletionType() const
Path::currentPos() const
Path::getNodePos(unsigned long) const
Path::getNodeType(unsigned long) const
Path::getEndPos() const
Path::getLastPos() const
Path::sameAs(Path*) const
Path::endsInXZ(Vec3 const&)
Path::makeCopy() const
