// 函数名称: sub_67c120
// 虚拟地址: 0x67c120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_67c120(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edi = arg1[1]
    int32_t* i = *(edi + 0x44)
    int32_t esi = 0
    int32_t ebx = 0
    void* var_8_1 = edi
    
    for (; i != 0; i = i[0xb])
        if (*i == 0)
            int32_t ecx_1 = i[2]
            esi += i[3] * ecx_1
            ebx += i[1] * ecx_1
    
    int32_t* i_1
    
    for (i_1 = *(edi + 0x48); i_1 != 0; i_1 = i_1[0xb])
        if (*i_1 == 0)
            int32_t ecx_2 = i_1[2]
            esi += (i_1[3] * ecx_2) << 7
            ebx += (i_1[1] * ecx_2) << 7
    
    if (esi s> 0)
        int32_t var_18_1 = *(edi + 0x4c)
        int32_t var_1c_1 = ebx
        int32_t var_20_1 = esi
        i_1 = Platform::Details::Heap::Allocate(arg1)
        int32_t* i_4
        
        if (i_1 s< ebx)
            i_1 = divs.dp.d(sx.q(i_1), esi)
            i_4 = i_1
            
            if (i_4 s<= 0)
                i_4 = 1
        else
            i_4 = 0x3b9aca00
        
        for (int32_t* i_2 = *(edi + 0x44); i_2 != 0; i_2 = i_2[0xb])
            if (*i_2 == 0)
                int32_t edi_1 = i_2[1]
                int32_t ecx_4 = i_2[3]
                
                if (divu.dp.d(0:(edi_1 - 1), ecx_4) + 1 s> i_4)
                    int32_t var_18_2 = i_2[2] * edi_1
                    i_2[4] = ecx_4 * i_4
                    void* var_1c_2 = &i_2[0xc]
                    sub_67d290(arg1)
                    i_2[0xa] = 1
                else
                    i_2[4] = edi_1
                
                *i_2 = sub_67bee0(arg1, 1, i_2[2], i_2[4])
                i_2[5] = *(var_8_1 + 0x50)
                i_1 = nullptr
                i_2[6] = 0
                i_2[7] = 0
                i_2[9] = 0
                edi = var_8_1
        
        for (void** i_3 = *(edi + 0x48); i_3 != 0; i_3 = i_3[0xb])
            if (*i_3 == 0)
                int32_t edi_2 = i_3[1]
                int32_t ecx_8 = i_3[3]
                
                if (divu.dp.d(0:(edi_2 - 1), ecx_8) + 1 s> i_4)
                    i_3[4] = ecx_8 * i_4
                    int32_t var_18_4 = (i_3[2] * edi_2) << 7
                    void* var_1c_4 = &i_3[0xc]
                    sub_67d290(arg1)
                    i_3[0xa] = 1
                else
                    i_3[4] = edi_2
                
                *i_3 = sub_67bf90(arg1, 1, i_3[2], i_3[4])
                i_1 = nullptr
                i_3[5] = *(var_8_1 + 0x50)
                i_3[6] = 0
                i_3[7] = 0
                i_3[9] = 0
    
    return i_1
}
