// 函数名称: sub_516080
// 虚拟地址: 0x516080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_516080(int32_t arg1, int32_t arg2, float* arg3, void* arg4, float arg5, float arg6, int32_t arg7, float* arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = *(arg4 + 8)
    float eax_3 = ebx[1]
    uint64_t (* edi)[0x2] = nullptr
    float* var_6c = arg3
    float var_70 = eax_3
    
    if (eax_3 s> 0)
        int32_t var_68_1 = 0
        
        do
            void* esi_2 = ebx[2] + var_68_1
            
            if (*(esi_2 + 8) != 0xffffffff)
                if (arg9 != 0)
                    arg3 = arg8
                    
                    if (arg3 s<= 0)
                        sub_4c5870("maskCount > 0", &data_83f3d3, "Animation.cpp", 0x20a, 
                            "BoneGetMaskWeight")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    eax_3 = 0f
                    bool cond:0_1
                    
                    if (arg3 s<= 0)
                    label_5160f1:
                        cond:0_1 = arg9 == 2
                    else
                        while (true)
                            arg2 = arg7
                            
                            if (*(arg2 + (eax_3 << 2)) == edi)
                                cond:0_1 = arg9 == 1
                                break
                            
                            eax_3 += 1
                            
                            if (eax_3 s>= arg3)
                                goto label_5160f1
                    
                    eax_3.b = cond:0_1
                else
                    eax_3.b = 1
                
                float var_64_2 = fconvert.s(float.t(zx.d(eax_3.b)))
                long double x87_r7_2 = fconvert.t(var_64_2)
                long double x87_r6_1 = float.t(0)
                x87_r6_1 - x87_r7_2
                eax_3.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1)
                    float var_34[0xb]
                    float (* var_80_1)[0xb] = &var_34
                    uint64_t (* var_84_1)[0x2] = edi
                    float (* var_88_1)[0xb] = &var_34
                    int32_t edx
                    int80_t st0_1
                    st0_1, edx = sub_515b70(ebx, edi, fconvert.s(fconvert.t(arg5)), arg2, arg3)
                    void var_60
                    sub_518e30(&var_34, edx, &var_60, 
                        fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_64_2) * fconvert.t(arg6)))))
                    void* ecx_3 = *(esi_2 + 8) * 0x2c + var_6c
                    eax_3, arg3, arg2 = sub_518ce0(ecx_3, &var_60, ecx_3)
            
            var_68_1 += 0xc
            edi += 1
        while (edi s< var_70)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
