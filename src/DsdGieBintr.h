
/*
The MIT License

Copyright (c) 2019-Present, ROBERT HOWELL

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in-
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef _DSD_GIE_BINTR_H
#define _DSD_GIE_BINTR_H

#include "Dsd.h"
#include "DsdBintr.h"

namespace DSD
{
    
    class GieBintr : public Bintr
    {
    public: 
    
        GieBintr(const std::string& osd, gboolean isClockEnabled);

        ~GieBintr();
        
    private:

        gboolean m_isClockEnabled;
        
        static std::string m_sClockFont;
        static guint m_sClockFontSize;
        
        /**
         @brief
         */
        guint m_processMode;
        
        GstElement* m_pQueue;
        GstElement* m_pVidConv;
        GstElement* m_pCapsFilter;
        GstElement* m_pConvQueue;
        GstElement* m_pOsd;
    
    };
}

#endif // _DSD_GIE_BINTR_H