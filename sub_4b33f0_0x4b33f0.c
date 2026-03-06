// 函数名称: sub_4b33f0
// 虚拟地址: 0x4b33f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4b33f0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t* ebx = nullptr
    int32_t* ebx = nullptr
    
    if (arg1[1] == 0)
        arg1[1] = sub_5a881a(0x1ef0)
    
    sub_5abfc0(arg1[1], 0, 0x1ef0)
    int32_t* i = 0x2404
    int32_t var_8 = 0
    int32_t* var_14 = nullptr
    int32_t* i_1 = 0x2404
    
    do
        int32_t j_1 = 0
        
        if (*(i + *arg1) s> 0)
            int32_t j
            
            do
                int32_t k = 0
                
                if (0 s< arg1[0x118].w)
                    void* eax_3 = &arg1[0x11b]
                    
                    do
                        if (*(eax_3 - 7) == 0)
                            int32_t ecx_2 = *arg1
                            
                            if (*eax_3 == *(ebx + ecx_2 + 0x544))
                                int32_t var_20_1 = 7
                                sub_49cc30(arg1, k, ecx_2, var_8)
                                *(ebx + arg1[1]) = k
                                break
                        
                        k += 1
                        eax_3 += 0x14
                    while (k s< sx.d(arg1[0x118].w))
                
                int32_t ecx_4 = *arg1
                
                if (*(ebx + ecx_4 + 0x544) == 0)
                    *(ebx + arg1[1]) = 0xffffffff
                else if (k == sx.d(arg1[0x118].w))
                    int32_t var_20_2 = **(ecx_4 + ((var_8 * 0x148 + j_1) << 2) + 0x544)
                    sub_5a8559(&data_8b80d0, "Could not find enough %s.\n")
                    sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\init.cpp", 0x41f, "init_campaign")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                i = i_1
                j = j_1 + 1
                ebx = &ebx[1]
                j_1 = j
            while (j s< *(i + *arg1))
        
        var_8 += 1
        *(i + arg1[1] - 0x52c) = *(i + *arg1)
        i = &i[1]
        ebx = &var_14[0x148]
        i_1 = i
        var_14 = ebx
    while (i s< 0x241c)
    
    return i
}
