// 函数名称: sub_4b1e20
// 虚拟地址: 0x4b1e20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b1e20(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* edx = arg2
    void* edx = arg2
    int32_t ebx = arg1
    void* esi_1 = ebx * 0xb4
    arg1.w = *(esi_1 + edx + 0xa6)
    void* esi_2 = esi_1 + edx
    int32_t i = sx.d(*(esi_2 + 0x46))
    *(esi_2 + 0xa8) = 0
    *(esi_2 + 0xaa) = arg1.w
    
    for (; i != 0xffffffff; i = sx.d(*(edx + ((i * 5 + 0x11d) << 2))))
        void* ecx_2
        ecx_2.w = sx.w(*(*(edx + i * 0x14 + 0x46c) + 8))
        *(esi_2 + 0xaa) += ecx_2.w
        void* eax_1 = *(edx + i * 0x14 + 0x46c)
        
        if (*(eax_1 + 0x90) != 0)
            int16_t eax_2 = sub_4b1ae0(eax_1, edx, ebx, i, 0)
            edx = arg2
            *(esi_2 + 0xaa) += eax_2
    
    int32_t i_1 = 0
    void* ecx_5 = edx + 0x1e08
    
    do
        if (*(ecx_5 - 2) != 0 && *(i_1 + esi_2 + 0x67) != 0)
            *(esi_2 + 0xa8) += 3
        
        if (*ecx_5 != 0 && *(i_1 + esi_2 + 0x68) != 0)
            *(esi_2 + 0xa8) += 3
        
        if (*(ecx_5 + 2) != 0 && *(i_1 + esi_2 + 0x69) != 0)
            *(esi_2 + 0xa8) += 3
        
        if (*(ecx_5 + 4) != 0 && *(i_1 + esi_2 + 0x6a) != 0)
            *(esi_2 + 0xa8) += 3
        
        if (*(ecx_5 + 6) != 0 && *(i_1 + esi_2 + 0x6b) != 0)
            *(esi_2 + 0xa8) += 3
        
        if (*(ecx_5 + 8) != 0 && *(i_1 + esi_2 + 0x6c) != 0)
            *(esi_2 + 0xa8) += 3
        
        i_1 += 6
        ecx_5 += 0xc
    while (i_1 s<= 0xb)
    
    int32_t i_2
    
    for (i_2 = 0xc; i_2 s<= 0x13; i_2 += 1)
        if (*(edx + (i_2 << 1) + 0x1e06) != 0)
            int32_t edi = sx.d(*(esi_2 + i_2 + 0x8f))
            
            switch (i_2)
                case 0
                    i_1 = 5
                case 1, 7, 0xe, 0xf
                    i_1 = 4
                case 2, 6, 0xd, 0x10, 0x11, 0x12, 0x13
                    i_1 = 3
                case 4, 0xc
                    i_1 = 6
                case 8
                    i_1 = 8
                default
                    i_1 = 1
            
            if (edi s>= i_1)
                if (*(i_2 + esi_2 + 0x67) == 0)
                    i_1 = sx.d(*(i_2 + edx + 0x1e56))
                    
                    if (edi == i_1)
                        *(esi_2 + 0xa8) += 3
                else
                    *(esi_2 + 0xa8) += 5
    
    i_2.w = sx.w(*(esi_2 + 0xa3))
    i_2.w += *(esi_2 + 0xa8)
    *(esi_2 + 0xaa) += i_2.w
    return i_1
}
