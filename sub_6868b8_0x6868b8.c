// 函数名称: sub_6868b8
// 虚拟地址: 0x6868b8
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_6868b8(int32_t arg1, int16_t arg2 @ x87control, long double arg3 @ st0, int32_t arg4)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    int32_t var_4 = edx
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg2)
    var_4.w = temp0
    long double result
    bool z
    
    if (z)
        int32_t eax
        
        if ((arg1 & 0xfffff) != 0 || arg4 != 0)
            long double result_3
            result_3, eax = __convertTOStoQNaN(arg1, arg3)
            result = result_3
        else
            result = data_8367a0
            eax = 1
        
        if (data_bec5f8 == 0)
            return __startOneArgErrorHandling(eax, 0x12, result, &data_8bc080, var_4)
    else
        int16_t x87control
        int16_t x87status_1
        
        if (var_4.w != 0x27f)
            x87control, x87status_1 = __fldcw_memmem16(0x27f)
        long double result_1
        bool c2_1
        result_1, c2_1 = __fcos(arg3)
        result = result_1
        bool c1_1 = unimplemented  {fcos }
        bool c0
        bool c3
        arg1.w = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2_1 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
        
        if (test_bit(arg1:1.b, 2))
            bool c1_2 = false
            long double result_4 = result
            long double x87_r0 = data_8367da
            
            do
                long double result_5
                uint8_t temp0_2
                bool c2_2
                result_5, c2_2, temp0_2 = __fprem1(result_4, x87_r0)
                result_4 = result_5
                
                if (not(c2_2))
                    c0 = (temp0_2 & 4) != 0
                    c1_2 = (temp0_2 & 1) != 0
                    c3 = (temp0_2 & 2) != 0
                
                arg1.w = (c0 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9 | (c2_2 ? 1 : 0) << 0xa
                    | (c3 ? 1 : 0) << 0xe | 0x3800
            while (test_bit(arg1:1.b, 2))
            
            long double result_2
            result_2, c2_1 = __fcos(x87_r0)
            result = result_2
            c1_1 = unimplemented  {fcos }
        
        if (data_bec5f8 == 0)
            arg1.w = var_4.w
            
            if (arg1.w != 0x27f)
                arg1.w &= 0x20
                
                if (arg1.w != 0)
                    arg1.w = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2_1 ? 1 : 0) << 0xa
                        | (c3 ? 1 : 0) << 0xe
                    arg1.w &= 0x20
                    
                    if (arg1.w != 0)
                        return __startOneArgErrorHandling(8, 0x12, result, &data_8bc080, var_4)
                
                int16_t x87control_2
                int16_t x87status_3
                x87control_2, x87status_3 = __fldcw_memmem16(var_4.w)
            
            return result
    
    int16_t x87control_1
    int16_t x87status_2
    
    if (var_4.w != 0x27f)
        x87control_1, x87status_2 = __fldcw_memmem16(var_4.w)
    return result
}
