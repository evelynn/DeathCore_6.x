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

#include "GameObjectPackets.h"

void WorldPackets::GameObject::GameObjUse::Read()
{
    _worldPacket >> Guid;
}

void WorldPackets::GameObject::GameObjReportUse::Read()
{
    _worldPacket >> Guid;
}

WorldPacket const* WorldPackets::GameObject::GameObjectDespawn::Write()
{
    _worldPacket << ObjectGUID;
    return &_worldPacket;
}

WorldPacket const* WorldPackets::GameObject::PageText::Write()
{
    _worldPacket << GameObjectGUID;
    return &_worldPacket;
}
