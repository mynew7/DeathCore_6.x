/*
 * Copyright (C) 2013-2015 DeathCore <http://www.noffearrdeathproject.net/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/*
This placeholder for the instance is needed for dungeon finding to be able
to give credit after the boss defined in lastEncounterDungeon is killed.
Without it, the party doing random dungeon won't get satchel of spoils and
gets instead the deserter debuff.
*/

#include "ScriptMgr.h"
#include "InstanceScript.h"

class Garrison_Frostwall : public InstanceMapScript
{
public:
    Garrison_Frostwall() : InstanceMapScript("Garrison_Frostwall", 1152) { }

    InstanceScript* GetInstanceScript(InstanceMap* map) const override
    {
        return new Garrison_Frostwall_InstanceMapScript(map);
    }

    struct Garrison_Frostwall_InstanceMapScript : public InstanceScript
    {
        Garrison_Frostwall_InstanceMapScript(Map* map) : InstanceScript(map) { }
    };
};

void AddSC_Garrison_Frostwall()
{
    new Garrison_Frostwall();
}
