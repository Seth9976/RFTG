// 函数名称: sub_686c6d
// 虚拟地址: 0x686c6d
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_686c6d(int32_t arg1, int16_t arg2 @ x87control, int16_t arg3 @ x87tag, long double arg4 @ st0, int32_t arg5, int32_t arg6, int32_t arg7, char arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg2)
    var_4.w = temp0
    
    if (var_4.w != 0x27f)
        arg2, x87status = __load_CW(var_4)
    
    int32_t ecx = arg1 & 0x7ff00000
    long double result
    int32_t arg_4
    int32_t eax_1
    int32_t ecx_3
    long double x87_r7
    
    if (ecx != 0x7ff00000)
        int32_t eax
        long double st0
        st0, eax = __fload_withFB(ecx, &arg_4)
        x87_r7 = st0
        
        if (ecx == 0x7ff00000)
            ecx_3 = 0
            goto label_686d5b
        
        if ((eax & 0x7ff00000) != 0 || ((arg5 & 0xfffff) | arg_4) != 0)
            char ecx_1 = arg5:3.b & 0x80
            
            if (ecx_1 != 0)
                ecx_1 = _test_whether_TOS_is_int(arg4)
                x87_r7 = fneg(x87_r7)
                
                if (ecx_1 == 0)
                    result = data_8367a0
                    eax_1 = 1
                    goto label_686ce5
            
            result = __twoToTOS(__fyl2x(x87_r7, arg4))
            
            if (ecx_1 == 1)
                result = fneg(result)
            
            if (data_bec5f8 == 0)
                int864_t var_70
                var_70:0x64.q = fconvert.d(result)
                bool c1 = unimplemented  {fst qword [esp], st0}
                int32_t eax_14 = var_70:0x68.d & 0x7ff00000
                int32_t eax_15
                
                if (eax_14 == 0)
                    long double result_1 = result
                    result = fconvert.t(1536.0)
                    __fscale(result_1, result)
                    long double x87_r7_4 = fabs(result)
                    long double temp1_1 = fconvert.t(2.2250738585072014e-308)
                    x87_r7_4 - temp1_1
                    eax_14.w = (x87_r7_4 < temp1_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_4, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == temp1_1 ? 1 : 0) << 0xe
                    eax_15 = 4
                    
                    if (test_bit(eax_14:1.b, 0))
                        result = result * fconvert.t(0.0)
                else if (eax_14 == 0x7ff00000)
                    long double result_2 = result
                    result = fconvert.t(-1536.0)
                    __fscale(result_2, result)
                    long double x87_r7_8 = fabs(result)
                    long double temp2_1 = fconvert.t(1.7976931348623157e+308)
                    x87_r7_8 - temp2_1
                    eax_14.w = (x87_r7_8 < temp2_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe
                    eax_15 = 3
                    
                    if (not(test_bit(eax_14:1.b, 6)) && not(test_bit(eax_14:1.b, 0)))
                        result = result * fconvert.t(inf.0)
                else
                    eax_14.w = var_4.w
                    
                    if (eax_14.w == 0x27f)
                        return result
                    
                    eax_14.w &= 0x20
                    int16_t x87control_3
                    int16_t x87status_3
                    
                    if (eax_14.w != 0)
                        x87control_3, x87status_3 = __fldcw_memmem16(var_4.w)
                        return result
                    
                    bool c0
                    bool c2
                    bool c3
                    eax_14.w = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa
                        | (c3 ? 1 : 0) << 0xe
                    eax_14.w &= 0x20
                    
                    if (eax_14.w == 0)
                        x87control_3, x87status_3 = __fldcw_memmem16(var_4.w)
                        return result
                    
                    eax_15 = 8
                
                return __startTwoArgErrorHandling(eax_15, 0x1d, result, "pow", var_4, __return_addr, 
                    arg_4)
        else if (((arg7 & 0x7fffffff) | arg6) == 0)
            result = float.t(1)
        else
            _test_whether_TOS_is_int(x87_r7)
            int16_t ecx_5
            ecx_5:1.b = arg5:3.b
            ecx_5:1.b u>>= 7
            
            if ((arg9 & 0x80) != 0)
                result = data_837a50
                
                if ((ecx_5:1.b & ecx_5.b) != 0)
                    result = fneg(result)
                
                eax_1 = 2
                goto label_686ce5
            
            result = float.t(0)
            
            if ((ecx_5:1.b & ecx_5.b) != 0)
                result = fneg(result)
    else if (((arg1 & 0xfffff) | arg6) != 0)
        int32_t ecx_2
        long double st0_3
        st0_3, ecx_2 = __fload_withFB(0, &arg_4)
        x87_r7 = st0_3
        
        if ((arg8 & 8) == 0)
            ecx_3 = ecx_2 + 1
            goto label_686d5b
        
    label_686d17:
        result = arg4 + x87_r7
        eax_1 = 1
    label_686ce5:
        
        if (data_bec5f8 == 0)
            return __startTwoArgErrorHandling(eax_1, 0x1d, result, "pow", var_4, __return_addr, arg_4)
    else
        long double st0_4
        st0_4, ecx_3 = __fload_withFB(0, &arg_4)
        x87_r7 = st0_4
    label_686d5b:
        
        if ((arg5 & 0x7ff00000) == 0x7ff00000 && ((arg5 & 0xfffff) | arg_4) != 0)
            if ((arg5:2.b & 8) != 0)
                goto label_686d17
            
            goto label_686d27
        
        if (ecx_3 != 0)
        label_686d27:
            result = arg4 + x87_r7
            eax_1 = 7
            goto label_686ce5
        
        void var_78
        double* var_7c_1 = &var_78
        int16_t x87control
        int16_t x87status_1
        int16_t x87tag
        int16_t temp0_1
        temp0_1, x87control, x87tag, x87status_1 = __fnsave_memmem108(arg2, arg3, x87status)
        int864_t var_70_1 = temp0_1
        int32_t eax_6
        int80_t st0_5
        st0_5, eax_6 = sub_689f3a(fconvert.d(x87_r7), fconvert.d(arg4), var_7c_1)
        __frstor_memmem108(*(var_7c_1 + 8))
        result = fconvert.t(*var_7c_1)
        
        if (eax_6 != 0)
            eax_1 = 1
            goto label_686ce5
    int16_t x87control_2
    int16_t x87status_2
    
    if (var_4.w != 0x27f)
        x87control_2, x87status_2 = __fldcw_memmem16(var_4.w)
    return result
}
