// 函数名称: sub_4deb80
// 虚拟地址: 0x4deb80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_4deb80(int32_t arg1, float* arg2, void* arg3, float* arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float* result = arg4
    int32_t* result_1 = result
    
    if (*(arg3 + 0xc) != 0)
        if (result != 0)
            if ((*(sub_4c98a0() + 0x3c) & 0x1000) != 0)
                result_1 = data_30d73a4
        else if (arg7 == 0)
            result_1 = data_30d73a4
        else
            result_1 = data_30d73a8
        
        int128_t* eax_3 = sub_4dc1a0()
        *(eax_3 + 4) = arg3
        *eax_3 = 0
        __builtin_memcpy(eax_3 + 8, arg2, 0x40)
        int32_t eax_4 = 0
        *(eax_3 + 0x48) = result_1
        
        if (arg6 s> 0)
            void* ecx_1 = eax_3 + 0x4c
            
            do
                *ecx_1 = *(arg5 + (eax_4 << 2))
                eax_4 += 1
                ecx_1 += 4
            while (eax_4 s< arg6)
        
        eax_3[0x16].d = arg7
        *(eax_3 + 0x14c) = sub_4dc440(result_1)
        eax_3[0x15].d = sub_4dc4c0(result_1)
        int32_t eax_7
        int32_t ecx_2
        eax_7, ecx_2 = sub_54c2d0(*(eax_3 + 0x48))
        int32_t* eax_8 = sub_54c4b0(ecx_2, eax_7)
        
        if (eax_8[0x3e0].b == 0)
            char** eax_9 = *eax_8
            sub_5349c0(eax_9, eax_7, &eax_8[1], eax_9)
            eax_8[0x3e0].b = 1
        
        int32_t ecx_4 = *(arg3 + 0x24)
        int32_t eax_10
        int32_t ecx_5
        eax_10, ecx_5 = sub_54c2d0(*(eax_3 + 0x48))
        int32_t* eax_11 = sub_54c4b0(ecx_5, eax_10)
        
        if (eax_11[0x3e0].b == 0)
            char** edx_4 = *eax_11
            sub_5349c0(eax_11, edx_4, &eax_11[1], edx_4)
            eax_11[0x3e0].b = 1
        
        int32_t eax_13
        
        if (*(sub_54c910(eax_11[1]) + 0x28) != 1)
            eax_13 = ecx_4
        else
            eax_13 = *(arg3 + 0x2c)
        
        result = (*(*data_3078804 + 0x6c))(eax_13, &eax_8[1])
        *(eax_3 + 0x15c) = result
        long double x87_r7_1
        
        if (data_27e8494 != 1)
            result = arg2
            float var_34_1 = fconvert.s(fconvert.t(*(arg3 + 0x130)) + fconvert.t(*(arg3 + 0x124)))
            float var_30_1 = fconvert.s(fconvert.t(*(arg3 + 0x134)) + fconvert.t(*(arg3 + 0x128)))
            long double x87_r7_7 = fconvert.t(*(arg3 + 0x138)) + fconvert.t(*(arg3 + 0x12c))
            void var_54
            __builtin_memcpy(&var_54, 0x27e8090, 0x1c)
            long double x87_r6_1 = fconvert.t(0.5)
            long double x87_r6_5 = fconvert.t(fconvert.s(fconvert.t(var_30_1) * x87_r6_1))
            long double x87_r4_1 = fconvert.t(fconvert.s(fconvert.t(var_34_1) * x87_r6_1))
            long double x87_r3_2 = fconvert.t(fconvert.s(x87_r6_1 * fconvert.t(fconvert.s(x87_r7_7))))
            float var_40
            long double x87_r7_25 = fconvert.t(fconvert.s(fconvert.t(var_40) - fconvert.t(fconvert.s(
                fconvert.t(result[5]) * x87_r6_5 + fconvert.t(result[4]) * x87_r4_1
                + fconvert.t(result[6]) * x87_r3_2 + fconvert.t(result[7])))))
            float var_44
            long double x87_r6_9 = fconvert.t(fconvert.s(fconvert.t(var_44) - fconvert.t(fconvert.s(
                fconvert.t(result[2]) * x87_r3_2 + fconvert.t(*result) * x87_r4_1
                + fconvert.t(result[1]) * x87_r6_5 + fconvert.t(result[3])))))
            float var_3c
            long double x87_r5_7 = fconvert.t(fconvert.s(fconvert.t(var_3c) - fconvert.t(fconvert.s(
                x87_r4_1 * fconvert.t(result[8]) + x87_r6_5 * fconvert.t(result[9])
                + x87_r3_2 * fconvert.t(result[0xa]) + fconvert.t(result[0xb])))))
            x87_r7_1 = x87_r7_25 * x87_r7_25 + x87_r6_9 * x87_r6_9 + x87_r5_7 * x87_r5_7
        else
            x87_r7_1 = float.t(0)
        
        *(eax_3 + 0x154) = fconvert.s(x87_r7_1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
