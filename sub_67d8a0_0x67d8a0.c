// 函数名称: sub_67d8a0
// 虚拟地址: 0x67d8a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67d8a0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* (** eax_1)(int32_t* arg1, int32_t arg2) = (*arg1[1])(arg1, 1, 0x50)
    int32_t* (** eax_1)(int32_t* arg1, int32_t arg2) = (*arg1[1])(arg1, 1, 0x50)
    arg1[0x6a] = eax_1
    *eax_1 = sub_67d820
    
    if (arg2 != 0)
        *(*arg1 + 0x14) = 4
        (**arg1)(arg1)
    
    int32_t* eax_5
    
    if (*(arg1[0x71] + 8) == 0)
        eax_5 = arg1[0x4f]
    else
        if (arg1[0x4f] s< 2)
            *(*arg1 + 0x14) = 0x2f
            (**arg1)(arg1)
        
        sub_67d2c0(arg1)
        eax_5 = arg1[0x4f] + 2
    
    void* i = arg1[0x36]
    arg2 = nullptr
    
    if (arg1[9] s> 0)
        int32_t* edi_1 = i + 0x24
        void* ebx_1 = &eax_1[2]
        
        do
            int32_t ecx_3 = *edi_1
            *ebx_1 = (*(arg1[1] + 8))(arg1, 1, edi_1[-2] * ecx_3, 
                divs.dp.d(sx.q(edi_1[-6] * ecx_3), arg1[0x4f]) * eax_5)
            i = arg2 + 1
            ebx_1 += 4
            edi_1 = &edi_1[0x15]
            arg2 = i
        while (i s< arg1[9])
    
    return i
}
