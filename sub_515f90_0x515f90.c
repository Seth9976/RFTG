// 函数名称: sub_515f90
// 虚拟地址: 0x515f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_515f90(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, float arg5, float arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_3 = *(arg4 + 8)
    int32_t esi = eax_3[1]
    int32_t edx = 0
    uint64_t (* edi)[0x2]
    uint64_t (* var_88)[0x2] = edi
    int32_t* var_78 = eax_3
    int32_t var_7c = esi
    int32_t var_6c = 0
    
    if (esi s> 0)
        int32_t var_68_1 = 0
        int32_t var_64_1 = arg3
        
        do
            float* ecx_1 = eax_3[2] + var_68_1
            
            if (ecx_1[2] != 0xffffffff)
                float var_34[0xb]
                float (* var_8c)[0xb] = &var_34
                int32_t var_90_1 = edx
                float (* var_94_1)[0xb] = &var_34
                sub_515b70(eax_3, edi, fconvert.s(fconvert.t(arg5)), edx, ecx_1)
                float var_60[0xb]
                __builtin_memcpy(&var_60, var_64_1, 0x2c)
                sub_515eb0(&var_60, &var_34)
                long double x87_r7_2 = fconvert.t(arg6)
                long double x87_r6_1 = float.t(1)
                x87_r6_1 - x87_r7_2
                float eax_4
                eax_4.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1)
                    var_8c = "AnimDefAccumDifferenceBonePosition"
                    sub_4c5870("fractionWeight == 1.0f", &data_83f3d3, "Animation.cpp", 0x1f8, var_8c)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                float* esi_5 = ecx_1[2] i* 0x2c + arg2
                edi = esi_5
                sub_515eb0(esi_5, edi)
                edx = var_6c
                esi = var_7c
                eax_3 = var_78
            
            var_68_1 += 0xc
            var_64_1 += 0x2c
            edx += 1
            var_6c = edx
        while (edx s< esi)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
