// 函数名称: sub_4a4bd0
// 虚拟地址: 0x4a4bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a4bd0(int32_t arg1, int32_t arg2 @ edi)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        sub_49b2a0()
        noreturn
    
    if (arg1 s< 0)
        sub_49b2a0()
        noreturn
    
    void* eax = arg1 * 0xb4
    int32_t i_1 = sx.d(*(eax + arg2 + 0x44))
    void* edx = eax + arg2
    int32_t i = i_1
    int32_t ecx = 0
    void* var_8 = edx
    
    if (i s< 0xffffffff)
        sub_49b2a0()
        noreturn
    
    while (i != 0xffffffff)
        i = sx.d(*(arg2 + ((i * 5 + 0x11d) << 2)))
        ecx += 1
    
    if (sx.d(*(edx + 0xae)) - sx.d(*(edx + 0xb0)) + ecx s> 0 && i_1 != 0xffffffff)
        do
            void* eax_4 = *(arg2 + i_1 * 0x14 + 0x46c)
            
            if (*(eax_4 + 6) == 1 && (*(eax_4 + 0x10) & 1) == 0)
                for (int32_t j = sx.d(*(edx + 0x46)); j != 0xffffffff; 
                        j = sx.d(*(arg2 + ((j * 5 + 0x11d) << 2))))
                    int32_t eax_5 = j * 5
                    
                    if (*(arg2 + (eax_5 << 2) + 0x467) == 3)
                        void* eax_7 = *(arg2 + (eax_5 << 2) + 0x46c)
                        
                        if (*(eax_7 + 6) == 1 && (*(eax_7 + 0x10) & 1) == 0)
                            if (sub_4a48c0(j, arg2, i_1) != 0)
                                return 1
                            
                            edx = var_8
            
            i_1 = sx.d(*(arg2 + ((i_1 * 5 + 0x11d) << 2)))
        while (i_1 != 0xffffffff)
    
    return 0
}
