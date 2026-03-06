// 函数名称: sub_4d6480
// 虚拟地址: 0x4d6480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __fastcallsub_4d6480(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* entry_ebx
    entry_ebx[2] = fconvert.s(float.t(1))
    entry_ebx[4] = arg1
    *(entry_ebx + 0x16) = 0
    entry_ebx[5].w = 0
    entry_ebx[3] = 0
    entry_ebx[6] = 0
    entry_ebx[7] = 0
    entry_ebx[9] = fconvert.s(fconvert.t(5f))
    entry_ebx[0xa] = fconvert.s(fconvert.t(50f))
    entry_ebx[8] = 0
    *(entry_ebx + 0x17) = 0
    entry_ebx[0xb] = 0
    float* esi_1 = sub_4d6c80(arg1)
    int32_t edx = esi_1[6]
    
    if (edx == 0)
        *entry_ebx = arg1
    else
        int32_t eax_2 = 0
        int32_t var_10c[0x41]
        
        if (esi_1[7] != 0)
            eax_2 = 1
            var_10c[1] = 1
            var_10c[0] = arg1
        
        int32_t ecx = 0
        
        if (edx s> 0)
            do
                if (eax_2 s>= 0x20)
                    sub_4c5870("pickCount < MAX_PERMUTATIONS", &data_83f3d3, "Sound.cpp", 0xab, 
                        "SoundInitParams")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edi_1 = esi_1[4]
                var_108
                *(&var_108 + (eax_2 << 3)) = 1
                var_10c[eax_2 * 2] = *(edi_1 + (ecx << 2))
                ecx += 1
                eax_2 += 1
            while (ecx s< edx)
        
        *entry_ebx = *sub_5367d0(eax_2, &var_10c)
    
    long double x87_r7_3 = fconvert.t(*esi_1)
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7_3
    float* result
    result.w = (x87_r6 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_3 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        float var_114_1 = fconvert.s(fconvert.t(*esi_1))
        result = (sub_4c95c0() & 0x7fffff) | 0x3f800000
        long double x87_r6_1 = float.t(0)
        x87_r7_3 = x87_r6_1 + (fconvert.t(var_114_1) - x87_r6_1)
            * fconvert.t(fconvert.s(fconvert.t(result) - fconvert.t(1.0)))
    
    entry_ebx[1] = fconvert.s(x87_r7_3)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
