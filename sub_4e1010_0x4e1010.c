// 函数名称: sub_4e1010
// 虚拟地址: 0x4e1010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e1010(void* arg1 @ edi)
{
    // 第一条实际指令: if (data_307858c == 0)
    if (data_307858c == 0)
        int32_t eax
        eax.b = 0
        return eax
    
    void* esi_2 = *((data_3078588 << 2) + &data_3068588) * 0x180 + 0x27e8568
    int32_t eax_2
    
    if (*(esi_2 + 0x48) == *(arg1 + 0x48) && *(esi_2 + 0x4c) == *(arg1 + 0x4c)
            && sub_4e3b60(arg1 + 0x80, esi_2 + 0x80).b == 0
            && sub_4e3b60(arg1 + 0x90, esi_2 + 0x90).b == 0
            && sub_4e3b60(arg1 + 0xa0, esi_2 + 0xa0).b == 0)
        long double x87_r7_1 = fconvert.t(*(esi_2 + 0x120))
        long double x87_r6_1 = fconvert.t(*(arg1 + 0x120))
        x87_r6_1 - x87_r7_1
        eax_2.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1) && sub_4e3b20(arg1 + 0x124, esi_2 + 0x124).b == 0
                && sub_4e3b20(arg1 + 0x134, esi_2 + 0x134).b == 0)
            long double x87_r7_2 = fconvert.t(*(esi_2 + 0x168))
            long double x87_r6_2 = fconvert.t(*(arg1 + 0x168))
            x87_r6_2 - x87_r7_2
            eax_2.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                eax_2.b = 1
                return eax_2
    
    eax_2.b = 0
    return eax_2
}
