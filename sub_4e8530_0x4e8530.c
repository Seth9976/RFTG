// 函数名称: sub_4e8530
// 虚拟地址: 0x4e8530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4e8530(int32_t* arg1, float* arg2, float* arg3)
{
    // 第一条实际指令: void var_f4
    void var_f4
    int32_t eax_1 = __security_cookie ^ &var_f4
    int32_t* ebx = arg1
    int32_t* var_ec = ebx
    void* eax_2
    int32_t edx
    eax_2, edx = sub_4e7210(*ebx)
    float var_e0
    sub_406370(&var_e0, edx, arg3)
    int32_t eax_4 = ebx[0x1e]
    float var_a0[0x10]
    float* ecx_1 = __builtin_memcpy(&var_a0, &var_e0, 0x40)
    float var_60
    float* ecx_3
    
    if (eax_4 == 0xffffffff)
        ecx_3 = &ebx[8]
    else
        float* var_104_1 = &var_60
        int32_t var_108_1 = eax_4
        sub_4e9910(ebx, edx, ecx_1)
        long double x87_r7_2 = fneg(fconvert.t(var_60))
        __builtin_memcpy(&var_e0, 0x83faf8, 0x40)
        float var_d4_1 = fconvert.s(x87_r7_2)
        float var_5c
        float var_c4_1 = fconvert.s(fneg(fconvert.t(var_5c)))
        sub_406020(&var_60, &ebx[8], &var_e0)
        __builtin_memcpy(&var_e0, &var_60, 0x40)
        ecx_3 = &var_e0
    
    float* result = &var_60
    sub_406020(result, &var_a0, ecx_3)
    __builtin_memcpy(&var_a0, &var_60, 0x40)
    int32_t i = 0
    
    if (*(eax_2 + 0x14) s> 0)
        int32_t var_f0_1 = 0
        
        do
            void* esi_2 = ebx[0x1a] + var_f0_1
            result = arg2
            
            if (*(esi_2 + 0x54) == result)
                float* edx_5 = sub_4e82b0(var_ec, i)
                result = esi_2 + 0x5c
                
                if (*(esi_2 + 0x5c) != 0)
                    float* var_104_2 = arg3
                    result = sub_532c30(result, edx_5)
                
                ebx = var_ec
            
            var_f0_1 += 0x60
            i += 1
        while (i s< *(eax_2 + 0x14))
    
    sub_5a6aba(eax_1 ^ &var_f4)
    return result
}
