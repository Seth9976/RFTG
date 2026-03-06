// 函数名称: sub_5b48d1
// 虚拟地址: 0x5b48d1
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b48d1(int32_t arg1, double* arg2, char arg3)
{
    // 第一条实际指令: int32_t esi_1 = arg1 & 0x1f
    int32_t esi_1 = arg1 & 0x1f
    long double st0
    int80_t x87_r0
    
    if ((arg1.b & 8) != 0 && (arg3 & 1) != 0)
        sub_5b4e5c(x87_r0, 1)
        esi_1 &= 0xfffffff7
    else if ((arg1.b & 4) != 0 && (arg3 & 4) != 0)
        sub_5b4e5c(x87_r0, 4)
        esi_1 &= 0xfffffffb
    else if ((1 & arg1.b) != 0 && (arg3 & 8) != 0)
        sub_5b4e5c(x87_r0, 8)
        int32_t eax_2 = arg3.d & 0xc00
        double* ecx_3
        
        if (eax_2 == 0)
            long double x87_r0_5 = float.t(0)
            ecx_3 = arg2
            long double temp0_1 = fconvert.t(*ecx_3)
            x87_r0_5 - temp0_1
            eax_2.w = (x87_r0_5 < temp0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_5, temp0_1) ? 1 : 0) << 0xa
                | (x87_r0_5 == temp0_1 ? 1 : 0) << 0xe | 0x800
            bool p_4 = unimplemented  {test ah, 0x5}
            
            if (p_4)
            label_5b49ab:
                *ecx_3 = fconvert.d(fneg(fconvert.t(data_8b8ff0)))
            else
                *ecx_3 = fconvert.d(fconvert.t(data_8b8ff0))
        else if (eax_2 == 0x400)
            long double x87_r0_4 = float.t(0)
            ecx_3 = arg2
            long double temp1_1 = fconvert.t(*ecx_3)
            x87_r0_4 - temp1_1
            eax_2.w = (x87_r0_4 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_4, temp1_1) ? 1 : 0) << 0xa
                | (x87_r0_4 == temp1_1 ? 1 : 0) << 0xe | 0x800
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (p_3)
                goto label_5b49ab
            
            *ecx_3 = fconvert.d(fconvert.t(data_8b9000))
        else if (eax_2 == 0x800)
            long double x87_r0_3 = float.t(0)
            long double temp2_1 = fconvert.t(*arg2)
            x87_r0_3 - temp2_1
            eax_2.w = (x87_r0_3 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_3, temp2_1) ? 1 : 0) << 0xa
                | (x87_r0_3 == temp2_1 ? 1 : 0) << 0xe | 0x800
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (not(p_2))
                *arg2 = fconvert.d(fconvert.t(data_8b8ff0))
            else
                *arg2 = fconvert.d(fneg(fconvert.t(data_8b9000)))
        else if (eax_2 == 0xc00)
            long double x87_r0_1 = float.t(0)
            long double temp4_1 = fconvert.t(*arg2)
            x87_r0_1 - temp4_1
            eax_2.w = (x87_r0_1 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_1, temp4_1) ? 1 : 0) << 0xa
                | (x87_r0_1 == temp4_1 ? 1 : 0) << 0xe | 0x800
            long double x87_r0_2 = fconvert.t(data_8b9000)
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                *arg2 = fconvert.d(x87_r0_2)
            else
                *arg2 = fconvert.d(fneg(x87_r0_2))
        esi_1 &= 0xfffffffe
    else if ((arg1.b & 2) != 0 && (arg3 & 0x10) != 0)
        int32_t esi_2 = 0
        
        if ((arg1.b & 0x10) != 0)
            esi_2 = 1
        
        int32_t edi
        int32_t var_24_1 = edi
        long double x87_r7_1 = fconvert.t(*arg2)
        long double x87_r6_1 = float.t(0)
        x87_r6_1 - x87_r7_1
        int32_t eax
        eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (not(p_5))
            esi_2 = 1
        else
            int32_t ecx
            int32_t var_2c_1 = ecx
            int32_t var_30_1 = ecx
            var_30_1.q = fconvert.d(fconvert.t(*arg2))
            int32_t var_c
            st0 = sub_5b450f(var_30_1, &var_c)
            double var_18_1 = fconvert.d(st0)
            
            if (var_c - 0x600 s>= 0xfffffbce)
                long double x87_r7_6 = float.t(0)
                long double temp3_1 = fconvert.t(var_18_1)
                x87_r7_6 - temp3_1
                int32_t edx_1
                
                if ((((x87_r7_6 < temp3_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_6, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_6 == temp3_1 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
                    edx_1 = 0
                else
                    edx_1 = 1
                
                var_18_1:6.w = (var_18_1:6.w & 0xf) | 0x10
                
                if (var_c - 0x600 s< 0xfffffc03)
                    int32_t i_1 = 0xfffffc03 - (var_c - 0x600)
                    int32_t i
                    
                    do
                        if ((var_18_1.b & 1) != 0 && esi_2 == 0)
                            esi_2 = 1
                        
                        var_18_1.d u>>= 1
                        
                        if ((var_18_1:4.b & 1) != 0)
                            var_18_1.d |= 0x80000000
                        
                        var_18_1:4.d u>>= 1
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                if (edx_1 != 0)
                    var_18_1 = fconvert.d(fneg(fconvert.t(var_18_1)))
            else
                esi_2 = 1
                var_18_1 = fconvert.d(fconvert.t(var_18_1) * fconvert.t(0.0))
            
            *arg2 = fconvert.d(fconvert.t(var_18_1))
        
        if (esi_2 != 0)
            sub_5b4e5c(x87_r0, 0x10)
        
        esi_1 &= 0xfffffffd
    
    if ((arg1.b & 0x10) != 0 && (arg3 & 0x20) != 0)
        sub_5b4e5c(st0, 0x20)
        esi_1 &= 0xffffffef
    
    int32_t result
    result.b = esi_1 == 0
    return result
}
