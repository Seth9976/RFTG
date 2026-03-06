// 函数名称: sub_686b18
// 虚拟地址: 0x686b18
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_686b18(int32_t arg1, int16_t arg2 @ x87control, long double arg3 @ st0, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    int32_t var_4 = edx
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg2)
    var_4.w = temp0
    bool z
    int32_t eax_1
    
    if (z)
        if ((arg1 & 0xfffff) == 0 && arg4 == 0)
            if ((arg1 & 0x80000000) == 0)
                goto label_686b45
            
        label_686b82:
            arg3 = data_8367a0
            eax_1 = 1
            goto label_686bb1
        
        long double st0_1
        st0_1, eax_1 = __convertTOStoQNaN(arg1, arg3)
        arg3 = st0_1
    label_686bb1:
        
        if (data_bec5f8 == 0)
            __startOneArgErrorHandling(eax_1, 0x1a, arg3, 0x8bc090, var_4)
            return 
    else
        int16_t x87control
        int16_t x87status_1
        
        if (var_4.w != 0x27f)
            x87control, x87status_1 = __fldcw_memmem16(0x27f)
        
        if ((arg5 & 0x7ff00000) == 0)
            if ((arg5 & 0xfffff) == 0 && arg4 == 0)
                arg3 = data_837a5a
                eax_1 = 2
                goto label_686bb1
            
            if ((arg5 & 0x80000000) != 0)
                goto label_686b82
            
            goto label_686b43
        
        if ((arg5 & 0x80000000) != 0)
            goto label_686b82
        
    label_686b43:
        arg3 = __fyl2x(arg3, fconvert.t(0.69314718048553914) + fconvert.t(7.4406171098029793e-11))
        bool c1 = unimplemented  {fyl2x }
    label_686b45:
        
        if (data_bec5f8 == 0)
            int32_t eax
            eax.w = var_4.w
            
            if (eax.w != 0x27f)
                eax.w &= 0x20
                
                if (eax.w != 0)
                    bool c0
                    bool c2
                    bool c3
                    eax.w = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa
                        | (c3 ? 1 : 0) << 0xe
                    eax.w &= 0x20
                    
                    if (eax.w != 0)
                        __startOneArgErrorHandling(8, 0x1a, arg3, 0x8bc090, var_4)
                        return 
                
                int16_t x87control_2
                int16_t x87status_3
                x87control_2, x87status_3 = __fldcw_memmem16(var_4.w)
            
            return 
    int16_t x87control_1
    int16_t x87status_2
    
    if (var_4.w != 0x27f)
        x87control_1, x87status_2 = __fldcw_memmem16(var_4.w)
}
