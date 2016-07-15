/*
    LGCK Builder Runtime
    Copyright (C) 1999, 2016  Francois Blanchette

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

#ifndef FILEMEM_H
#define FILEMEM_H

#include <string>
#include "IFile.h"

class CFileMem: public IFile
{
public:

    CFileMem();
    virtual ~CFileMem();

    virtual CFileMem & operator >> (std::string & str);
    virtual CFileMem & operator << (const std::string & str);
    virtual CFileMem & operator += (const std::string & str);

    virtual CFileMem & operator >> (int & n);
    virtual CFileMem & operator << (int n);

    virtual CFileMem & operator >> (bool & b);
    virtual CFileMem & operator << (bool b);
    virtual CFileMem & operator += (const char *);

    virtual bool open(const char *filename ="", const char *mode= "rb");
    virtual int read(void *buf, int size);
    virtual int write(const void *buf, int size);

    virtual void close();
    virtual long getSize();
    virtual void seek(long i);
    virtual long tell();

    const char *buffer();
    void replace(const char *buffer, int size);

protected:
    void grow(int size);

    std::string m_filename;
    char *m_buffer;
    int m_size;
    int m_max;
    int m_ptr;

    enum {
        GROWBY = 8192
    };
};

#endif // FILEMEM_H 
