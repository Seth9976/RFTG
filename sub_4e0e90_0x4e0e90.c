// 函数名称: sub_4e0e90
// 虚拟地址: 0x4e0e90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4e0e90(void* arg1 @ edi)
{
    // 第一条实际指令: void* result
    void* result
    
    if (data_3078594 != 0)
        int32_t eax
        int32_t ecx_1
        eax, ecx_1 = sub_54c2d0(*(arg1 + 0x48))
        int32_t* eax_1 = sub_54c4b0(ecx_1, eax)
        
        if (eax_1[0x3e0].b == 0)
            char** eax_2 = *eax_1
            sub_5349c0(eax_2, eax, &eax_1[1], eax_2)
            eax_1[0x3e0].b = 1
        
        result = sub_54c910(eax_1[1])
        
        if (data_3078594 != *(result + 0x2c))
            int32_t eax_3 = *((data_3078590 << 2) + &data_3068588)
            
            if (*(eax_3 * 0x180 + 0x27e856c) == *(arg1 + 4)
                    && *(eax_3 * 0x180 + 0x27e85b0) == *(arg1 + 0x48)
                    && *(eax_3 * 0x180 + 0x27e85b4) == *(arg1 + 0x4c)
                    && sub_4e3b60(arg1 + 0x80, eax_3 * 0x180 + 0x27e85e8).b == 0
                    && sub_4e3b60(arg1 + 0x90, eax_3 * 0x180 + 0x27e85f8).b == 0
                    && sub_4e3b60(arg1 + 0xa0, eax_3 * 0x180 + 0x27e8608).b == 0)
                long double x87_r7_1 = fconvert.t(*(eax_3 * 0x180 + 0x27e8688))
                long double x87_r6_1 = fconvert.t(*(arg1 + 0x120))
                x87_r6_1 - x87_r7_1
                result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (not(p_1))
                    result.b = 1
                    return result
    
    result.b = 0
    return result
}
