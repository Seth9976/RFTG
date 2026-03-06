// 函数名称: sub_4c33e0
// 虚拟地址: 0x4c33e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c33e0(void* arg1 @ esi)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(*(arg1 + 4))
    long double x87_r7 = fconvert.t(*(arg1 + 4))
    long double x87_r6 = float.t(1)
    x87_r6 - x87_r7
    int32_t eax
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p))
        int32_t i = 0
        void* eax_1 = arg1 + 0x1a5
        
        do
            if (*eax_1 != 0)
                char edx = *(eax_1 + 2)
                
                if (edx == 0 || *(eax_1 + 3) != 0 || edx == 0)
                    return 2
            
            i += 1
            eax_1 += 0x1c
        while (i s< 9)
        
        if (*(arg1 + 0x2ec) != 0)
            return 2
    
    return 1
}
