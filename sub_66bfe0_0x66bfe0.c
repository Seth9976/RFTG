// 函数名称: sub_66bfe0
// 虚拟地址: 0x66bfe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_66bfe0(int32_t* arg1, void* arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t edx = arg3
    int32_t edx = arg3
    int32_t* ebx = arg1
    arg3:3.b = (edx u>> 8).b
    uint32_t eax_1
    eax_1.b = ebx[2].b
    int32_t* i_10 = *ebx
    
    if (eax_1.b == 0)
        eax_1.b = *(ebx + 9)
        char ecx
        
        if (eax_1.b == 8)
            if ((arg4 & 0x80) == 0)
                void* eax_4 = arg2 + i_10
                char* edi_2 = eax_4 + i_10
                
                if (i_10 != 0)
                    arg1 = i_10
                    int32_t* i
                    
                    do
                        ecx = *(eax_4 - 1)
                        eax_4 -= 1
                        edi_2[0xffffffff] = ecx
                        edi_2 -= 2
                        i = arg1
                        arg1 -= 1
                        *edi_2 = edx.b
                    while (i != 1)
                
                *(ebx + 0xa) = 0x1002
                ebx[1] = i_10 * 2
                return eax_4
            
            void* edi_1 = i_10 + arg2
            char* eax_2 = edi_1 + i_10
            
            if (i_10 u> 1)
                arg1 = i_10 - 1
                int32_t* i_1
                
                do
                    eax_2[0xffffffff] = edx.b
                    void* ecx_2
                    ecx_2.b = *(edi_1 - 1)
                    edi_1 -= 1
                    eax_2 -= 2
                    i_1 = arg1
                    arg1 -= 1
                    *eax_2 = ecx_2.b
                while (i_1 != 1)
            
            eax_2[0xffffffff] = edx.b
            *(ebx + 0xa) = 0x1002
            ebx[1] = i_10 * 2
            return eax_2
        
        if (eax_1.b == 0x10)
            void* edi_3 = arg2 + (i_10 << 1)
            char* eax_6 = edi_3 + (i_10 << 1)
            
            if ((arg4 & 0x80) == 0)
                if (i_10 != 0)
                    arg1 = i_10
                    int32_t* i_2
                    
                    do
                        eax_6[0xffffffff] = *(edi_3 - 1)
                        char ecx_7 = *(edi_3 - 2)
                        edi_3 -= 2
                        eax_6[0xfffffffe] = ecx_7
                        eax_6[0xfffffffd] = arg3:3.b
                        eax_6 -= 4
                        i_2 = arg1
                        arg1 -= 1
                        *eax_6 = edx.b
                    while (i_2 != 1)
                
                *(ebx + 0xa) = 0x2002
                ebx[1] = i_10 << 2
                return eax_6
            
            if (i_10 u> 1)
                arg1 = i_10 - 1
                int32_t* i_3
                
                do
                    eax_6[0xffffffff] = arg3:3.b
                    eax_6[0xfffffffe] = edx.b
                    eax_6[0xfffffffd] = *(edi_3 - 1)
                    ecx = *(edi_3 - 2)
                    edi_3 -= 2
                    eax_6 -= 4
                    i_3 = arg1
                    arg1 -= 1
                    *eax_6 = ecx
                while (i_3 != 1)
            
            eax_6[0xffffffff] = arg3:3.b
            eax_6[0xfffffffe] = edx.b
            *(ebx + 0xa) = 0x2002
            ebx[1] = i_10 << 2
            return eax_6
    else if (eax_1.b == 2)
        eax_1.b = *(ebx + 9)
        
        if (eax_1.b == 8)
            void* edi_5 = i_10 * 3 + arg2
            char* eax_8 = edi_5 + i_10
            
            if ((arg4 & 0x80) == 0)
                if (i_10 != 0)
                    arg1 = i_10
                    int32_t* i_4
                    
                    do
                        eax_8[0xffffffff] = *(edi_5 - 1)
                        eax_8[0xfffffffe] = *(edi_5 - 2)
                        char ecx_15 = *(edi_5 - 3)
                        edi_5 -= 3
                        eax_8[0xfffffffd] = ecx_15
                        eax_8 -= 4
                        i_4 = arg1
                        arg1 -= 1
                        *eax_8 = edx.b
                    while (i_4 != 1)
                
                *(ebx + 0xa) = 0x2004
                ebx[1] = i_10 << 2
                return eax_8
            
            if (i_10 u> 1)
                arg1 = i_10 - 1
                int32_t* i_5
                
                do
                    eax_8[0xffffffff] = edx.b
                    eax_8[0xfffffffe] = *(edi_5 - 1)
                    eax_8[0xfffffffd] = *(edi_5 - 2)
                    char ecx_12 = *(edi_5 - 3)
                    edi_5 -= 3
                    eax_8 -= 4
                    i_5 = arg1
                    arg1 -= 1
                    *eax_8 = ecx_12
                while (i_5 != 1)
            
            eax_8[0xffffffff] = edx.b
            *(ebx + 0xa) = 0x2004
            ebx[1] = i_10 << 2
            return eax_8
        
        if (eax_1.b == 0x10)
            void* ecx_17 = arg2 + i_10 * 6
            eax_1 = ecx_17 + (i_10 << 1)
            
            if ((arg4 & 0x80) != 0)
                if (i_10 u> 1)
                    void* i_8 = i_10 - 1
                    void* i_6
                    
                    do
                        *(eax_1 - 1) = arg3:3.b
                        *(eax_1 - 2) = edx.b
                        *(eax_1 - 3) = *(ecx_17 - 1)
                        *(eax_1 - 4) = *(ecx_17 - 2)
                        *(eax_1 - 5) = *(ecx_17 - 3)
                        *(eax_1 - 6) = *(ecx_17 - 4)
                        *(eax_1 - 7) = *(ecx_17 - 5)
                        char ebx_7 = *(ecx_17 - 6)
                        ecx_17 -= 6
                        eax_1 -= 8
                        i_6 = i_8
                        i_8 -= 1
                        *eax_1 = ebx_7
                    while (i_6 != 1)
                    ebx = arg1
                
                ecx_17.b = arg3:3.b
                *(eax_1 - 1) = ecx_17.b
                *(eax_1 - 2) = edx.b
            else if (i_10 != 0)
                int32_t* i_9 = i_10
                int32_t* i_7
                
                do
                    *(eax_1 - 1) = *(ecx_17 - 1)
                    *(eax_1 - 2) = *(ecx_17 - 2)
                    *(eax_1 - 3) = *(ecx_17 - 3)
                    *(eax_1 - 4) = *(ecx_17 - 4)
                    *(eax_1 - 5) = *(ecx_17 - 5)
                    char ebx_13 = *(ecx_17 - 6)
                    ecx_17 -= 6
                    *(eax_1 - 6) = ebx_13
                    *(eax_1 - 7) = arg3:3.b
                    eax_1 -= 8
                    i_7 = i_9
                    i_9 -= 1
                    *eax_1 = edx.b
                while (i_7 != 1)
                ebx = arg1
            
            *(ebx + 0xa) = 0x4004
            ebx[1] = i_10 << 3
    
    return eax_1
}
