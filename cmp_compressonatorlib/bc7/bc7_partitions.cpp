//===============================================================================
// Copyright (c) 2007-2016  Advanced Micro Devices, Inc. All rights reserved.
// Copyright (c) 2004-2006 ATI Technologies Inc.
//===============================================================================
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#include "BC7_Partitions.h"

//
// Verified to match the final definitions as detailedin the OpenGL BPTC spec
//


CMP_DWORD   BC7_PARTITIONS[MAX_SUBSETS][MAX_PARTITIONS][MAX_SUBSET_SIZE] = {
    // Single subset partitions for both BC6H abd BC7
    {
        {
            0, 0, 0, 0,
            0, 0, 0, 0,
            0, 0, 0, 0,
            0, 0, 0, 0,
        },
    },

    {
        {
            // 0
            0,0,1,1,
            0,0,1,1,
            0,0,1,1,
            0,0,1,1
        },

        {
            // 1
            0,0,0,1,
            0,0,0,1,
            0,0,0,1,
            0,0,0,1
        },

        {
            // 2
            0,1,1,1,
            0,1,1,1,
            0,1,1,1,
            0,1,1,1
        },

        {
            // 3
            0,0,0,1,
            0,0,1,1,
            0,0,1,1,
            0,1,1,1
        },

        {
            // 4
            0,0,0,0,
            0,0,0,1,
            0,0,0,1,
            0,0,1,1
        },

        {
            // 5
            0,0,1,1,
            0,1,1,1,
            0,1,1,1,
            1,1,1,1
        },

        {
            // 6
            0,0,0,1,
            0,0,1,1,
            0,1,1,1,
            1,1,1,1
        },

        {
            // 7
            0,0,0,0,
            0,0,0,1,
            0,0,1,1,
            0,1,1,1
        },

        {
            // 8
            0,0,0,0,
            0,0,0,0,
            0,0,0,1,
            0,0,1,1
        },

        {
            // 9
            0,0,1,1,
            0,1,1,1,
            1,1,1,1,
            1,1,1,1
        },

        {
            // 10
            0,0,0,0,
            0,0,0,1,
            0,1,1,1,
            1,1,1,1
        },

        {
            // 11
            0,0,0,0,
            0,0,0,0,
            0,0,0,1,
            0,1,1,1
        },

        {
            // 12
            0,0,0,1,
            0,1,1,1,
            1,1,1,1,
            1,1,1,1
        },

        {
            // 13
            0,0,0,0,
            0,0,0,0,
            1,1,1,1,
            1,1,1,1
        },

        {
            // 14
            0,0,0,0,
            1,1,1,1,
            1,1,1,1,
            1,1,1,1
        },

        {
            // 15
            0,0,0,0,
            0,0,0,0,
            0,0,0,0,
            1,1,1,1
        },

        {
            // 16
            0,0,0,0,
            1,0,0,0,
            1,1,1,0,
            1,1,1,1
        },

        {
            // 17
            0,1,1,1,
            0,0,0,1,
            0,0,0,0,
            0,0,0,0
        },

        {
            // 18
            0,0,0,0,
            0,0,0,0,
            1,0,0,0,
            1,1,1,0
        },

        {
            // 19
            0,1,1,1,
            0,0,1,1,
            0,0,0,1,
            0,0,0,0
        },

        {
            // 20
            0,0,1,1,
            0,0,0,1,
            0,0,0,0,
            0,0,0,0
        },

        {
            // 21
            0,0,0,0,
            1,0,0,0,
            1,1,0,0,
            1,1,1,0
        },

        {
            // 22
            0,0,0,0,
            0,0,0,0,
            1,0,0,0,
            1,1,0,0
        },

        {
            // 23
            0,1,1,1,
            0,0,1,1,
            0,0,1,1,
            0,0,0,1
        },

        {
            // 24
            0,0,1,1,
            0,0,0,1,
            0,0,0,1,
            0,0,0,0
        },

        {
            // 25
            0,0,0,0,
            1,0,0,0,
            1,0,0,0,
            1,1,0,0
        },

        {
            // 26
            0,1,1,0,
            0,1,1,0,
            0,1,1,0,
            0,1,1,0
        },

        {
            // 27
            0,0,1,1,
            0,1,1,0,
            0,1,1,0,
            1,1,0,0
        },

        {
            // 28
            0,0,0,1,
            0,1,1,1,
            1,1,1,0,
            1,0,0,0
        },

        {
            // 29
            0,0,0,0,
            1,1,1,1,
            1,1,1,1,
            0,0,0,0
        },

        {
            // 30
            0,1,1,1,
            0,0,0,1,
            1,0,0,0,
            1,1,1,0
        },

        {
            // 31
            0,0,1,1,
            1,0,0,1,
            1,0,0,1,
            1,1,0,0
        },
        // -----------  BC7 only shapes from here on -------------
        {
            // 32
            0,1,0,1,
            0,1,0,1,
            0,1,0,1,
            0,1,0,1
        },

        {
            // 33
            0,0,0,0,
            1,1,1,1,
            0,0,0,0,
            1,1,1,1
        },

        {
            // 34
            0,1,0,1,
            1,0,1,0,
            0,1,0,1,
            1,0,1,0
        },

        {
            // 35
            0,0,1,1,
            0,0,1,1,
            1,1,0,0,
            1,1,0,0
        },

        {
            // 36
            0,0,1,1,
            1,1,0,0,
            0,0,1,1,
            1,1,0,0
        },

        {
            // 37
            0,1,0,1,
            0,1,0,1,
            1,0,1,0,
            1,0,1,0
        },

        {
            // 38
            0,1,1,0,
            1,0,0,1,
            0,1,1,0,
            1,0,0,1
        },

        {
            // 39
            0,1,0,1,
            1,0,1,0,
            1,0,1,0,
            0,1,0,1
        },

        {
            // 40
            0,1,1,1,
            0,0,1,1,
            1,1,0,0,
            1,1,1,0
        },

        {
            // 41
            0,0,0,1,
            0,0,1,1,
            1,1,0,0,
            1,0,0,0
        },

        {
            // 42
            0,0,1,1,
            0,0,1,0,
            0,1,0,0,
            1,1,0,0
        },

        {
            // 43
            0,0,1,1,
            1,0,1,1,
            1,1,0,1,
            1,1,0,0
        },

        {
            // 44
            0,1,1,0,
            1,0,0,1,
            1,0,0,1,
            0,1,1,0
        },

        {
            // 45
            0,0,1,1,
            1,1,0,0,
            1,1,0,0,
            0,0,1,1
        },

        {
            // 46
            0,1,1,0,
            0,1,1,0,
            1,0,0,1,
            1,0,0,1
        },

        {
            // 47
            0,0,0,0,
            0,1,1,0,
            0,1,1,0,
            0,0,0,0
        },

        {
            // 48
            0,1,0,0,
            1,1,1,0,
            0,1,0,0,
            0,0,0,0
        },

        {
            // 49
            0,0,1,0,
            0,1,1,1,
            0,0,1,0,
            0,0,0,0
        },

        {
            // 50
            0,0,0,0,
            0,0,1,0,
            0,1,1,1,
            0,0,1,0
        },

        {
            // 51
            0,0,0,0,
            0,1,0,0,
            1,1,1,0,
            0,1,0,0
        },

        {
            // 52
            0,1,1,0,
            1,1,0,0,
            1,0,0,1,
            0,0,1,1
        },

        {
            // 53
            0,0,1,1,
            0,1,1,0,
            1,1,0,0,
            1,0,0,1
        },

        {
            // 54
            0,1,1,0,
            0,0,1,1,
            1,0,0,1,
            1,1,0,0
        },

        {
            // 55
            0,0,1,1,
            1,0,0,1,
            1,1,0,0,
            0,1,1,0
        },

        {
            // 56
            0,1,1,0,
            1,1,0,0,
            1,1,0,0,
            1,0,0,1
        },

        {
            // 57
            0,1,1,0,
            0,0,1,1,
            0,0,1,1,
            1,0,0,1
        },

        {
            // 58
            0,1,1,1,
            1,1,1,0,
            1,0,0,0,
            0,0,0,1
        },

        {
            // 59
            0,0,0,1,
            1,0,0,0,
            1,1,1,0,
            0,1,1,1
        },

        {
            // 60
            0,0,0,0,
            1,1,1,1,
            0,0,1,1,
            0,0,1,1
        },

        {
            // 61
            0,0,1,1,
            0,0,1,1,
            1,1,1,1,
            0,0,0,0
        },

        {
            // 62
            0,0,1,0,
            0,0,1,0,
            1,1,1,0,
            1,1,1,0
        },

        {
            // 63
            0,1,0,0,
            0,1,0,0,
            0,1,1,1,
            0,1,1,1
        },
    },


    // Table.P3 - only for BC7

    {

        {
            0,0,1,1,
            0,0,1,1,
            0,2,2,1,
            2,2,2,2
        },

        {
            0,0,0,1,
            0,0,1,1,
            2,2,1,1,
            2,2,2,1
        },

        {
            0,0,0,0,
            2,0,0,1,
            2,2,1,1,
            2,2,1,1
        },

        {
            0,2,2,2,
            0,0,2,2,
            0,0,1,1,
            0,1,1,1
        },

        {
            0,0,0,0,
            0,0,0,0,
            1,1,2,2,
            1,1,2,2
        },

        {
            0,0,1,1,
            0,0,1,1,
            0,0,2,2,
            0,0,2,2
        },

        {
            0,0,2,2,
            0,0,2,2,
            1,1,1,1,
            1,1,1,1
        },

        {
            0,0,1,1,
            0,0,1,1,
            2,2,1,1,
            2,2,1,1
        },

        {
            0,0,0,0,
            0,0,0,0,
            1,1,1,1,
            2,2,2,2
        },

        {
            0,0,0,0,
            1,1,1,1,
            1,1,1,1,
            2,2,2,2
        },

        {
            0,0,0,0,
            1,1,1,1,
            2,2,2,2,
            2,2,2,2
        },

        {
            0,0,1,2,
            0,0,1,2,
            0,0,1,2,
            0,0,1,2
        },

        {
            0,1,1,2,
            0,1,1,2,
            0,1,1,2,
            0,1,1,2
        },

        {
            0,1,2,2,
            0,1,2,2,
            0,1,2,2,
            0,1,2,2
        },

        {
            0,0,1,1,
            0,1,1,2,
            1,1,2,2,
            1,2,2,2
        },

        {
            0,0,1,1,
            2,0,0,1,
            2,2,0,0,
            2,2,2,0
        },

        {
            0,0,0,1,
            0,0,1,1,
            0,1,1,2,
            1,1,2,2
        },

        {
            0,1,1,1,
            0,0,1,1,
            2,0,0,1,
            2,2,0,0
        },

        {
            0,0,0,0,
            1,1,2,2,
            1,1,2,2,
            1,1,2,2
        },

        {
            0,0,2,2,
            0,0,2,2,
            0,0,2,2,
            1,1,1,1
        },

        {
            0,1,1,1,
            0,1,1,1,
            0,2,2,2,
            0,2,2,2
        },

        {
            0,0,0,1,
            0,0,0,1,
            2,2,2,1,
            2,2,2,1
        },

        {
            0,0,0,0,
            0,0,1,1,
            0,1,2,2,
            0,1,2,2
        },

        {
            0,0,0,0,
            1,1,0,0,
            2,2,1,0,
            2,2,1,0
        },

        {
            0,1,2,2,
            0,1,2,2,
            0,0,1,1,
            0,0,0,0
        },

        {
            0,0,1,2,
            0,0,1,2,
            1,1,2,2,
            2,2,2,2
        },

        {
            0,1,1,0,
            1,2,2,1,
            1,2,2,1,
            0,1,1,0
        },

        {
            0,0,0,0,
            0,1,1,0,
            1,2,2,1,
            1,2,2,1
        },

        {
            0,0,2,2,
            1,1,0,2,
            1,1,0,2,
            0,0,2,2
        },

        {
            0,1,1,0,
            0,1,1,0,
            2,0,0,2,
            2,2,2,2
        },

        {
            0,0,1,1,
            0,1,2,2,
            0,1,2,2,
            0,0,1,1
        },

        {
            0,0,0,0,
            2,0,0,0,
            2,2,1,1,
            2,2,2,1
        },

        {
            0,0,0,0,
            0,0,0,2,
            1,1,2,2,
            1,2,2,2
        },

        {
            0,2,2,2,
            0,0,2,2,
            0,0,1,2,
            0,0,1,1
        },

        {
            0,0,1,1,
            0,0,1,2,
            0,0,2,2,
            0,2,2,2
        },

        {
            0,1,2,0,
            0,1,2,0,
            0,1,2,0,
            0,1,2,0
        },

        {
            0,0,0,0,
            1,1,1,1,
            2,2,2,2,
            0,0,0,0
        },

        {
            0,1,2,0,
            1,2,0,1,
            2,0,1,2,
            0,1,2,0
        },

        {
            0,1,2,0,
            2,0,1,2,
            1,2,0,1,
            0,1,2,0
        },

        {
            0,0,1,1,
            2,2,0,0,
            1,1,2,2,
            0,0,1,1
        },

        {
            0,0,1,1,
            1,1,2,2,
            2,2,0,0,
            0,0,1,1
        },

        {
            0,1,0,1,
            0,1,0,1,
            2,2,2,2,
            2,2,2,2
        },

        {
            0,0,0,0,
            0,0,0,0,
            2,1,2,1,
            2,1,2,1
        },

        {
            0,0,2,2,
            1,1,2,2,
            0,0,2,2,
            1,1,2,2
        },

        {
            0,0,2,2,
            0,0,1,1,
            0,0,2,2,
            0,0,1,1
        },

        {
            0,2,2,0,
            1,2,2,1,
            0,2,2,0,
            1,2,2,1
        },

        {
            0,1,0,1,
            2,2,2,2,
            2,2,2,2,
            0,1,0,1
        },

        {
            0,0,0,0,
            2,1,2,1,
            2,1,2,1,
            2,1,2,1
        },

        {
            0,1,0,1,
            0,1,0,1,
            0,1,0,1,
            2,2,2,2
        },

        {
            0,2,2,2,
            0,1,1,1,
            0,2,2,2,
            0,1,1,1
        },

        {
            0,0,0,2,
            1,1,1,2,
            0,0,0,2,
            1,1,1,2
        },

        {
            0,0,0,0,
            2,1,1,2,
            2,1,1,2,
            2,1,1,2
        },

        {
            0,2,2,2,
            0,1,1,1,
            0,1,1,1,
            0,2,2,2
        },

        {
            0,0,0,2,
            1,1,1,2,
            1,1,1,2,
            0,0,0,2
        },

        {
            0,1,1,0,
            0,1,1,0,
            0,1,1,0,
            2,2,2,2
        },

        {
            0,0,0,0,
            0,0,0,0,
            2,1,1,2,
            2,1,1,2
        },

        {
            0,1,1,0,
            0,1,1,0,
            2,2,2,2,
            2,2,2,2
        },

        {
            0,0,2,2,
            0,0,1,1,
            0,0,1,1,
            0,0,2,2
        },

        {
            0,0,2,2,
            1,1,2,2,
            1,1,2,2,
            0,0,2,2
        },

        {
            0,0,0,0,
            0,0,0,0,
            0,0,0,0,
            2,1,1,2
        },

        {
            0,0,0,2,
            0,0,0,1,
            0,0,0,2,
            0,0,0,1
        },

        {
            0,2,2,2,
            1,2,2,2,
            0,2,2,2,
            1,2,2,2
        },

        {
            0,1,0,1,
            2,2,2,2,
            2,2,2,2,
            2,2,2,2
        },

        {
            0,1,1,1,
            2,0,1,1,
            2,2,0,1,
            2,2,2,0
        },
    },
};




CMP_DWORD  BC7_FIXUPINDICES[MAX_SUBSETS][MAX_PARTITIONS][3] = {
    // One subset
    {
        {0, 0, 0},
    },

    {
        {0, 15},{0, 15},{0, 15},{0, 15},
        {0, 15},{0, 15},{0, 15},{0, 15},
        {0, 15},{0, 15},{0, 15},{0, 15},
        {0, 15},{0, 15},{0, 15},{0, 15},
        {0, 15},{0,  2},{0,  8},{0,  2},
        {0,  2},{0,  8},{0,  8},{0, 15},
        {0,  2},{0,  8},{0,  2},{0,  2},
        {0,  8},{0,  8},{0,  2},{0,  2},
        {0, 15},{0, 15},{0,  6},{0,  8},
        {0,  2},{0,  8},{0, 15},{0, 15},
        {0,  2},{0,  8},{0,  2},{0,  2},
        {0,  2},{0, 15},{0, 15},{0,  6},
        {0,  6},{0,  2},{0,  6},{0,  8},
        {0, 15},{0, 15},{0,  2},{0,  2},
        {0, 15},{0, 15},{0, 15},{0, 15},
        {0, 15},{0,  2},{0,  2},{0, 15},
    },

    // Three subsets
    {
        {0, 3,15}, {0, 3, 8}, {0,15, 8}, {0,15, 3},
        {0, 8,15}, {0, 3,15}, {0,15, 3}, {0,15, 8},
        {0, 8,15}, {0, 8,15}, {0, 6,15}, {0, 6,15},
        {0, 6,15}, {0, 5,15}, {0, 3,15}, {0, 3, 8},
        {0, 3,15}, {0, 3, 8}, {0, 8,15}, {0,15, 3},
        {0, 3,15}, {0, 3, 8}, {0, 6,15}, {0,10, 8},
        {0, 5, 3}, {0, 8,15}, {0, 8, 6}, {0, 6,10},
        {0, 8,15}, {0, 5,15}, {0,15,10}, {0,15, 8},
        {0, 8,15}, {0,15, 3}, {0, 3,15}, {0, 5,10},
        {0, 6,10}, {0,10, 8}, {0, 8, 9}, {0,15,10},
        {0,15, 6}, {0, 3,15}, {0,15, 8}, {0, 5,15},
        {0,15, 3}, {0,15, 6}, {0,15, 6}, {0,15, 8},
        {0, 3,15}, {0,15, 3}, {0, 5,15}, {0, 5,15},
        {0, 5,15}, {0, 8,15}, {0, 5,15}, {0,10,15},
        {0, 5,15}, {0,10,15}, {0, 8,15}, {0,13,15},
        {0,15, 3}, {0,12,15}, {0, 3,15}, {0, 3, 8}

    },

};



//
// Reversible partitioning operation for BC7
//

extern FILE *fp;

void    Partition(CMP_DWORD partition,
                  double in[][MAX_DIMENSION_BIG],
                  double subsets[MAX_SUBSETS][MAX_SUBSET_SIZE][MAX_DIMENSION_BIG],
                  CMP_DWORD count[MAX_SUBSETS],
                  CMP_DWORD blockType,
                  int   dimension) {

    int   i,j;
    CMP_DWORD   *table = NULL;

    for(i=0; i<MAX_SUBSETS; i++) {
        count[i] = 0;
    }

    int insubset = 0,inpart;

    switch(bti[blockType].subsetCount) {
    case    0:
    case    1:
        insubset = 0;
        inpart   = 0;
        table = &(BC7_PARTITIONS[0][0][0]);
        break;
    case    2:
        insubset = 1;
        inpart   = partition;
        table = &(BC7_PARTITIONS[1][partition][0]);
        break;
    case    3:
        insubset = 2;
        inpart   = partition;
        table = &(BC7_PARTITIONS[2][partition][0]);
        break;
    default:
        break;
    }

    if (table == NULL) return; // Nothing to do!!

#ifdef USE_DBGTRACE
    DbgTrace(("insubset [%d] inpart [%2d]",insubset,inpart));
#endif

    for(i=0; i<MAX_SUBSET_SIZE; i++) {
        CMP_DWORD   subset = table[i];
        for(j=0; j<dimension; j++) {
            subsets[subset][count[subset]][j] = in[i][j];
        }
        if(dimension < MAX_DIMENSION_BIG) {
            subsets[subset][count[subset]][j] = 0.0;
        }
        count[subset]++;
    }
}


