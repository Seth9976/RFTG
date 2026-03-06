// 函数名称: sub_493be0
// 虚拟地址: 0x493be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_493be0(int32_t arg1 @ esi, int32_t arg2, int32_t arg3, double* arg4, double arg5)
{
    // 第一条实际指令: int128_t* ecx
    int128_t* ecx
    void* edx
    ecx, edx = __chkstk(0x1ef0)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    long double result = fconvert.t(-1.0)
    double var_1ef0 = fconvert.d(result)
    int128_t* esi = ecx
    void* i = nullptr
    int128_t* var_1ef4 = esi
    void* var_1edc = edx
    int32_t var_1ee0 = 0
    
    if (*(esi + 0x458) s> 0)
        void* ecx_1 = &esi[3]
        
        do
            if (i != arg2)
                *(ecx_1 - 4) = *(arg3 + (i << 2))
                *ecx_1 = 0xffffffff
            
            i += 1
            ecx_1 += 0xb4
        while (i s< sx.d(*(esi + 0x458)))
    
    int32_t ebx_4 = data_2691be0
    int32_t edi_1 = 0
    
    if (ebx_4 s>= 4)
        void* ecx_2 = edx + 0x10
        int32_t i_3 = ((ebx_4 - 4) u>> 2) + 1
        edi_1 = i_3 << 2
        int32_t i_1
        
        do
            long double temp1_1 = fconvert.t(*(ecx_2 - 0x10))
            result - temp1_1
            i.w = (result < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(result, temp1_1) ? 1 : 0) << 0xa
                | (result == temp1_1 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                result = fconvert.t(*(ecx_2 - 0x10))
            
            long double temp2_1 = fconvert.t(*(ecx_2 - 8))
            result - temp2_1
            i.w = (result < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(result, temp2_1) ? 1 : 0) << 0xa
                | (result == temp2_1 ? 1 : 0) << 0xe | 0x3800
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (not(p_2))
                result = fconvert.t(*(ecx_2 - 8))
            
            long double temp3_1 = fconvert.t(*ecx_2)
            result - temp3_1
            i.w = (result < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(result, temp3_1) ? 1 : 0) << 0xa
                | (result == temp3_1 ? 1 : 0) << 0xe | 0x3800
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (not(p_3))
                result = fconvert.t(*ecx_2)
            
            long double temp4_1 = fconvert.t(*(ecx_2 + 8))
            result - temp4_1
            i.w = (result < temp4_1 ? 1 : 0) << 8 | (is_unordered.t(result, temp4_1) ? 1 : 0) << 0xa
                | (result == temp4_1 ? 1 : 0) << 0xe | 0x3800
            bool p_4 = unimplemented  {test ah, 0x5}
            
            if (not(p_4))
                result = fconvert.t(*(ecx_2 + 8))
            
            ecx_2 += 0x20
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        edx = var_1edc
        var_1ef0 = fconvert.d(result)
    
    if (edi_1 s< ebx_4)
        do
            long double temp0_1 = fconvert.t(*(edx + (edi_1 << 3)))
            result - temp0_1
            i.w = (result < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(result, temp0_1) ? 1 : 0) << 0xa
                | (result == temp0_1 ? 1 : 0) << 0xe | 0x3800
            bool p_5 = unimplemented  {test ah, 0x5}
            
            if (not(p_5))
                result = fconvert.t(*(edx + (edi_1 << 3)))
            
            edi_1 += 1
        while (edi_1 s< ebx_4)
        
        var_1ef0 = fconvert.d(result)
    
    int32_t i_2 = 0
    
    if (ebx_4 s> 0)
        int32_t ebx_6 = arg2 * 0xb4
        
        do
            if (*(ebx_6 + esi + 0x3c) == 0)
            label_493d1a:
                
                if (*(ebx_6 + esi + 0xa3) != 0 || (*((i_2 << 2) + &data_8c6a80) & 0x80) == 0)
                    long double x87_r6_3 =
                        (fconvert.t(*arg4) + fconvert.t(0.29999999999999999)) * result
                    long double temp5_1 = fconvert.t(*(var_1edc + (i_2 << 3)))
                    x87_r6_3 - temp5_1
                    i.w = (x87_r6_3 < temp5_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r6_3 == temp5_1 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((i:1.b & 0x41) != 0)
                        int32_t var_14_1 = arg2
                        void var_1ed8
                        sub_48bb40(esi, &var_1ed8, var_1edc.b)
                        int32_t var_1eac[0x7a5]
                        var_1eac[arg2 * 0x2d] = *((i_2 << 2) + &data_8c6a80)
                        var_1ea8
                        *(&var_1ea8 + ebx_6) = 0xffffffff
                        int32_t var_14_2 = 0
                        char var_18_1 = 0xff
                        esi = var_1ef4
                        var_1ee0 += 1
                        *(var_1edc + (i_2 << 3)) = fconvert.d(sub_4904a0(
                            sub_48bc70(&var_1ed8, sub_4b0760(&var_1ed8)), arg2.b, &var_1ed8, arg2)
                            * fconvert.t(arg5) + fconvert.t(*(var_1edc + (i_2 << 3))))
                        result = fconvert.t(var_1ef0)
            else
                i = *((i_2 << 2) + &data_8c6a80)
                
                if (i != 0 && i.b s>= 0)
                    goto label_493d1a
            
            i_2 += 1
        while (i_2 s< data_2691be0)
    
    *arg4 = fconvert.d(fconvert.t(*arg4) + fconvert.t(arg5))
    int32_t eax_9
    eax_9.b = var_1ee0 s> 1
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return result
}
