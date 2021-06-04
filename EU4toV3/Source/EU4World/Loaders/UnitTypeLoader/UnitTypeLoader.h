#ifndef UNIT_TYPE_LOADER
#define UNIT_TYPE_LOADER
#include "Parser.h"
#include "ModLoader/ModLoader.h"
#include "UnitType.h"

namespace EU4
{
class UnitTypeLoader
{
  public:
	void loadUnitTypes(const std::string& EU4Path, const Mods& mods);
	void loadUnitType(const std::string& unitName, std::istream& theStream);

	[[nodiscard]] std::optional<UnitType> getUnitTypeForRegimentTypeName(const std::string& regimentTypeName) const;

  private:
	void addUnitFileToRegimentTypeMap(const std::string& directory, const std::string& filename);

	std::map<std::string, UnitType> unitTypeMap;
};
}; // namespace EU4

#endif // UNIT_TYPE_LOADER
