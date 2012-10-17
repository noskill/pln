
/*
 * opencog/embodiment/Learning/LearningServerMessages/SchemaMessage.cc
 *
 * Copyright (C) 2012 Linas Vepstas
 * All Rights Reserved
 * Author(s): Linas Vepstas <linasvepstas@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License v3 as
 * published by the Free Software Foundation and including the exceptions
 * at http://opencog.org/wiki/Licenses
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program; if not, write to:
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "SpaceTime.h"

namespace opencog {

SpaceServer* SpaceTimeCogServer::spacer = NULL;
TimeServer* SpaceTimeCogServer::timeser = NULL;

SpaceServer& SpaceTimeCogServer::getSpaceServer()
{
    return *spacer;
}

TimeServer& SpaceTimeCogServer::getTimeServer()
{
    return *timeser;
}

SpaceTimeCogServer::SpaceTimeCogServer()
{
    spacer = new SpaceServer(getAtomSpace());
    timeser = new TimeServer(getAtomSpace(), spacer);
}

SpaceServer& spaceServer()
{
   return dynamic_cast<SpaceTimeCogServer&>(server()).getSpaceServer();
}

TimeServer& timeServer()
{
   return dynamic_cast<SpaceTimeCogServer&>(server()).getTimeServer();
}

} // namespace opencog
