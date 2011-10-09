// HEXplorer is an Asap and HEX file editor
// Copyright (C) 2011  <Christophe Ho�l>
//
// This file is part of HEXplorer.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// please contact the author at : christophe.hoel@gmail.com

#ifndef NO_AXIS_PTS_X_H
#define NO_AXIS_PTS_X_H

#include "item.h"
#include "lexer.h"
#include "basefactory.h"

class NO_AXIS_PTS_X : public Item
{
    public:
        NO_AXIS_PTS_X( Node *parentNode);
        ~NO_AXIS_PTS_X();
        QMap<std::string, std::string> getParameters();
        static Factory<Item,NO_AXIS_PTS_X> itemFactory;
        char* getPar(std::string str);

    private:
        void parseFixPar(QList<TokenTyp> *typePar);
        QList<TokenTyp> *typePar;
        QList<std::string> *namePar;
        QList<char*> parameters;
};

#endif // NO_AXIS_PTS_X_H
