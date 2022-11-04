/*
    LGCK Builder Runtime
    Copyright (C) 1999, 2011  Francois Blanchette

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ANIMATION_H
#define ANIMATION_H

class IFile;
#include "stdafx.h"

class CAnimation
{
public:
    CAnimation();    
    ~CAnimation();

    void read (IFile &file);
    void write (IFile & file);

    void removeAt(int i);
    void insertAt (int i, int imageId);
    void add (int imageId);
    void set(int i, int imageId);
    int16_t operator [] (int i) const ;
    CAnimation & operator = (const CAnimation & s);
    bool operator == (CAnimation & s);
    bool operator != (CAnimation & s);
    int getSize() const;
    int getSpeed() const;
    uint16_t getOptions() const;
    void setSpeed(int speed);
    void setOptions(uint16_t options);

    void forget();

protected:

    enum {
        MAX_IMAGES = 1000,
        DEFAULT_SPEED = -1
    };

    int16_t m_size;
    int16_t m_speed;
    uint16_t m_options;
    int16_t m_imageIds [ MAX_IMAGES ];

};

#endif // ANIMATION_H
