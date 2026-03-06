// 函数名称: sub_686778
// 虚拟地址: 0x686778
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_686778(int32_t arg1, int16_t arg2 @ x87control, long double arg3 @ st0, int32_t arg4)
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
    bool c1
    
    if (not(z))
        int16_t x87control
        int16_t x87status_1
        
        if (var_4.w != 0x27f)
            x87control, x87status_1 = __fldcw_memmem16(0x27f)
        result = __fpatan(float.t(1), arg3)
        c1 = unimplemented  {fpatan }
        goto label_686791
    
    if ((arg1 & 0xfffff) != 0 || arg4 != 0)
        int32_t eax
        long double result_1
        result_1, eax = __convertTOStoQNaN(arg1, arg3)
        result = result_1
        
        if (data_bec5f8 == 0)
            return __startOneArgErrorHandling(eax, 0xf, result, "atan", var_4)
    else
        result = data_8367aa
        
        if ((arg1 & 0x80000000) != 0)
            result = fneg(result)
            c1 = false
        
    label_686791:
        
        if (data_bec5f8 == 0)
            arg1.w = var_4.w
            
            if (arg1.w != 0x27f)
                arg1.w &= 0x20
                
                if (arg1.w != 0)
                    bool c0
                    bool c2
                    bool c3
                    arg1.w = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa
                        | (c3 ? 1 : 0) << 0xe
                    arg1.w &= 0x20
                    
                    if (arg1.w != 0)
                        return __startOneArgErrorHandling(8, 0xf, result, "atan", var_4)
                
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
