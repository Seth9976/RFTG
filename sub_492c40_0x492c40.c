// 函数名称: sub_492c40
// 虚拟地址: 0x492c40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_492c40(int32_t arg1 @ edi, int128_t* arg2, int32_t arg3, int32_t arg4, double arg5, double arg6)
{
    // 第一条实际指令: void* ecx
    void* ecx
    int32_t edx
    ecx, edx = __chkstk(0x428c)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t entry_ebx
    int32_t var_10 = entry_ebx
    int32_t var_4264 = 0
    void var_4260
    sub_48bb40(arg2, &var_4260, edx.b)
    int32_t eax_3
    eax_3.b = entry_ebx == 0
    int32_t var_23aa = 0
    int32_t var_23a6 = 0
    int16_t var_23a2 = 0
    int32_t ecx_1 = *((edx << 3) + &data_8c6824)
    int32_t var_4234[0x7a2]
    var_4234[eax_3 * 0x2d] = *((edx << 3) + &data_8c6820)
    var_4230
    *(&var_4230 + eax_3 * 0xb4) = ecx_1
    int32_t i = 0
    void var_4d0
    void var_4c8
    
    if (data_2691be0 s>= 4)
        void* var_426c_1 = &var_4c8
        void* esi_1 = &var_4d0
        void* ecx_2 = ecx + 0x10
        
        do
            int32_t edx_3 = *((i << 3) + &data_8c6820)
            
            if (edx_3 != 0 || *(entry_ebx * 0xb4 + arg2 + 0x3c) == 0)
                if ((edx_3.b & 0x80) != 0 || (*((i << 3) + &data_8c6824) & 0x80) != 0)
                    int32_t edx_7 = entry_ebx * 0xb4
                    
                    if (*(edx_7 + arg2 + 0xa3) != 0 && *(edx_7 + arg2 + 0x3c) == 0)
                        goto label_492d78
                else
                label_492d78:
                    
                    if (arg3 != 2 || edx_3 == arg4 || *((i << 3) + &data_8c6824) == arg4)
                        var_4264 += 1
                        *esi_1 = fconvert.d(fconvert.t(*(ecx_2 - 0x10)))
                        *var_426c_1 = i
                        esi_1 += 0x10
                        var_426c_1 += 0x10
            
            int32_t edx_11 = *((i << 3) + &data_8c6828)
            
            if (edx_11 != 0 || *(entry_ebx * 0xb4 + arg2 + 0x3c) == 0)
                if ((edx_11.b & 0x80) != 0 || (*((i << 3) + &data_8c682c) & 0x80) != 0)
                    int32_t edx_15 = entry_ebx * 0xb4
                    
                    if (*(edx_15 + arg2 + 0xa3) != 0 && *(edx_15 + arg2 + 0x3c) == 0)
                        goto label_492e09
                else
                label_492e09:
                    
                    if (arg3 != 2 || edx_11 == arg4 || *((i << 3) + &data_8c682c) == arg4)
                        var_4264 += 1
                        *esi_1 = fconvert.d(fconvert.t(*(ecx_2 - 8)))
                        *var_426c_1 = i + 1
                        esi_1 += 0x10
                        var_426c_1 += 0x10
            
            int32_t edx_20 = *(&data_8c6820 - ecx + ecx_2)
            
            if (edx_20 != 0 || *(entry_ebx * 0xb4 + arg2 + 0x3c) == 0)
                if ((edx_20.b & 0x80) != 0 || (*(&data_8c6824 - ecx + ecx_2) & 0x80) != 0)
                    int32_t edx_25 = entry_ebx * 0xb4
                    
                    if (*(edx_25 + arg2 + 0xa3) != 0 && *(edx_25 + arg2 + 0x3c) == 0)
                        goto label_492ea1
                else
                label_492ea1:
                    
                    if (arg3 != 2 || edx_20 == arg4 || *(&data_8c6824 - ecx + ecx_2) == arg4)
                        var_4264 += 1
                        *esi_1 = fconvert.d(fconvert.t(*ecx_2))
                        *var_426c_1 = i + 2
                        esi_1 += 0x10
                        var_426c_1 += 0x10
            
            int32_t edx_30 = *(&data_8c6828 - ecx + ecx_2)
            
            if (edx_30 != 0 || *(entry_ebx * 0xb4 + arg2 + 0x3c) == 0)
                if ((edx_30.b & 0x80) != 0 || (*(&data_8c682c - ecx + ecx_2) & 0x80) != 0)
                    int32_t edx_35 = entry_ebx * 0xb4
                    
                    if (*(edx_35 + arg2 + 0xa3) != 0 && *(edx_35 + arg2 + 0x3c) == 0)
                        goto label_492f3a
                else
                label_492f3a:
                    
                    if (arg3 != 2 || edx_30 == arg4 || *(&data_8c682c - ecx + ecx_2) == arg4)
                        var_4264 += 1
                        *esi_1 = fconvert.d(fconvert.t(*(ecx_2 + 8)))
                        *var_426c_1 = i + 3
                        esi_1 += 0x10
                        var_426c_1 += 0x10
            
            i += 4
            ecx_2 += 0x20
        while (i s< data_2691be0 - 3)
    
    if (i s< data_2691be0)
        void* edi_22 = &(&__saved_ebp)[var_4264 * 4 - 0x131]
        
        do
            int32_t edx_39 = *((i << 3) + &data_8c6820)
            
            if (edx_39 != 0 || *(entry_ebx * 0xb4 + arg2 + 0x3c) == edx_39.b)
                if (edx_39.b s< 0 || (*((i << 3) + &data_8c6824) & 0x80) != 0)
                    int32_t ecx_8 = entry_ebx * 0xb4
                    
                    if (*(ecx_8 + arg2 + 0xa3) != 0 && *(ecx_8 + arg2 + 0x3c) == 0)
                        goto label_49300c
                else
                label_49300c:
                    
                    if (arg3 != 2 || edx_39 == arg4 || *((i << 3) + &data_8c6824) == arg4)
                        var_4264 += 1
                        *(edi_22 - 8) =
                            fconvert.d(fconvert.t(*(ecx - &data_8c6820 + (i << 3) + &data_8c6820)))
                        *edi_22 = i
                        edi_22 += 0x10
            
            i += 1
        while (i s< data_2691be0)
    
    int32_t result = sub_5a7ac0(&var_4d0, var_4264, 0x10, sub_492c10)
    int32_t result_1 = 0
    
    if (var_4264 s> 0)
        void* var_4268_1 = &var_4c8
        
        do
            int32_t edi_23 = *var_4268_1
            long double x87_r7_10 = float.t(result_1) / fconvert.t(fconvert.d(float.t(var_4264)))
            long double temp0_1 = fconvert.t(fconvert.d(float.t(1) - fconvert.t(arg6)))
            x87_r7_10 - temp0_1
            result.w = (x87_r7_10 < temp0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_10, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == temp0_1 ? 1 : 0) << 0xe
            
            if ((result:1.b & 0x41) != 0)
                int32_t var_10_2 = entry_ebx
                void var_2398
                sub_48bb40(&var_4260, &var_2398, var_4268_1.b)
                int32_t edx_42 = *((edi_23 << 3) + &data_8c6824)
                int32_t var_236c[0x7a5]
                var_236c[entry_ebx * 0x2d] = *((edi_23 << 3) + &data_8c6820)
                var_2368
                *(&var_2368 + entry_ebx * 0xb4) = edx_42
                int32_t var_10_3 = 0
                char var_4d8_1 = 0xff
                int32_t eax_10
                char edx_44
                eax_10, edx_44 = sub_48bc70(&var_2398, sub_4b0760(&var_2398))
                *(ecx + (edi_23 << 3)) = fconvert.d(
                    sub_4904a0(eax_10, edx_44, &var_2398, entry_ebx) * fconvert.t(arg5)
                    + fconvert.t(*(ecx + (edi_23 << 3))))
            
            var_4268_1 += 0x10
            result = result_1 + 1
            result_1 = result
        while (result s< var_4264)
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return result
}
