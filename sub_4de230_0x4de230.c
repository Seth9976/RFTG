// 函数名称: sub_4de230
// 虚拟地址: 0x4de230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4de230(int32_t* arg1 @ edi, float arg2)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (data_3078598 != 0)
        result = data_2de8568
        
        if (result != 0)
            void* esi_3 = &(&data_27e83e8)[result * 0x60]
            int32_t entry_ebx
            
            if (*esi_3 == 1 && *(esi_3 + 0x48) == arg1 && *(esi_3 + 0x4c) == entry_ebx
                    && sub_4e3720(&data_27e8484, esi_3 + 0x16c).b == 0
                    && sub_4e3b60(&data_27e84a8, esi_3 + 0x80).b == 0
                    && sub_4e3b60(&data_27e8498, esi_3 + 0x90).b == 0
                    && sub_4e3b60(&data_27e84b8, esi_3 + 0xa0).b == 0)
                long double x87_r7_1 = fconvert.t(*(esi_3 + 0x120))
                long double x87_r6_1 = fconvert.t(data_27e84c8)
                x87_r6_1 - x87_r7_1
                result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (not(p_1) && sub_4e3b20(&data_27e8540, esi_3 + 0x124).b == 0
                        && sub_4e3b20(&data_27e8550, esi_3 + 0x134).b == 0
                        && *(esi_3 + 0x164) == data_27e8560)
                    long double x87_r7_2 = fconvert.t(*(esi_3 + 0x168))
                    long double x87_r6_2 = fconvert.t(data_27e8564)
                    x87_r6_2 - x87_r7_2
                    result.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_2))
                        result = sub_4dc440(arg1)
                        
                        if (*(esi_3 + 0x14c) == result)
                            result = sub_4dc4c0(arg1)
                            
                            if (*(esi_3 + 0x150) == result)
                                long double x87_r7_3 = fconvert.t(*(esi_3 + 0x154))
                                long double x87_r6_3 = fconvert.t(arg2)
                                x87_r6_3 - x87_r7_3
                                result.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                                    | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                                bool p_3 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_3))
                                    result.b = *(esi_3 + 0x4c) == entry_ebx
                                    return result
    
    result.b = 0
    return result
}
