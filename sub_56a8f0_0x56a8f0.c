// 函数名称: sub_56a8f0
// 虚拟地址: 0x56a8f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_56a8f0(float* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_64
    char eax_3
    int80_t st0
    st0, eax_3 = sub_4c6230(&var_64)
    
    if (eax_3 != 0)
        float var_74_1 = 0f
        float var_70_1 = 0f
        float var_6c_1 = 0f
        long double x87_r7_3 = fconvert.t(fconvert.s(float.t(1) - fconvert.t(0.0)))
        float var_68_1 = fconvert.s(x87_r7_3)
        int32_t var_34_1 = 0
        var_64 = fconvert.s(x87_r7_3)
        int32_t var_30_1 = 0
        float var_60_2 = fconvert.s(x87_r7_3)
        float edx_1 = var_64
        float var_20 = var_68_1
        float var_1c_1 = edx_1
        float var_18_1 = var_60_2
        float var_90[0x5]
        float* eax_5 = sub_4131a0(&var_20, &var_90)
        float var_60_3 = fconvert.s(float.t(0))
        int16_t top_1 = 0
        float ecx_2 = *eax_5
        int32_t edx_2 = eax_5[1]
        int32_t eax_6 = eax_5[2]
        int32_t var_54_1 = var_34_1
        float var_58 = 0f
        int32_t var_50_1 = var_30_1
        float var_4c_1 = ecx_2
        int32_t var_48_1 = edx_2
        int32_t var_44_1 = eax_6
        int32_t result = 0
        
        for (int32_t* i = 0x70; i s< 0x7c; i = &i[1])
            int32_t esi_4 = *(i + data_3079210)
            
            if (esi_4 != 0)
                void* eax_7 = data_27e7fcc
                
                if (eax_7 == 0)
                    sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, 
                        "GetGameData")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* eax_8
                float* ecx_5
                eax_8, ecx_5 = sub_4d5990(*(eax_7 + 4), esi_4)
                float* var_a4_1 = &var_58
                
                if (sub_4d4ce0(eax_8, eax_8, ecx_5) != 0)
                    float var_78
                    int16_t eax_10 = sub_4d5130(eax_8, &var_58, &var_78)
                    top_1 -= 1
                    unimplemented  {call 0x4d5130}
                    
                    if (eax_10.b != 0)
                        int16_t top_2 = top_1 - 1
                        unimplemented  {fld st0, dword [ebp-0x74]}
                        bool c0_1
                        bool c2_1
                        bool c3_1
                        
                        if (result != 0)
                            unimplemented  {fld st0, dword [ebp-0x5c]}
                            unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1}
                            c0_1 = unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1}
                            c2_1 = is_unordered.t(unimplemented  {fcomp st0, st1}, 
                                unimplemented  {fcomp st0, st1})
                            c3_1 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1}
                            unimplemented  {fcomp st0, st1}
                        
                        if (result != 0 && (((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa
                                | (c3_1 ? 1 : 0) << 0xe | (top_2 & 7) << 0xb):1.b & 0x41) != 0)
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                            top_1 = top_2 + 1
                        else
                            float var_60_4 = fconvert.s(unimplemented  {fst dword [ebp-0x5c], st0})
                            result = *(eax_8 + 0x68)
                            unimplemented  {fld st0, dword [ebp-0x48]}
                            unimplemented  {fmul st0, st1}
                            float var_30_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
                            unimplemented  {fstp dword [ebp-0x2c], st0}
                            unimplemented  {fld st0, dword [ebp-0x44]}
                            unimplemented  {fmul st0, st1}
                            float var_2c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                            unimplemented  {fstp dword [ebp-0x28], st0}
                            unimplemented  {fmul st0, dword [ebp-0x40]}
                            float var_28_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                            unimplemented  {fstp dword [ebp-0x24], st0}
                            unimplemented  {fld st0, dword [ebp-0x2c]}
                            unimplemented  {fadd dword [ebp-0x54]}
                            var_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
                            unimplemented  {fstp dword [ebp-0x1c], st0}
                            unimplemented  {fld st0, dword [ebp-0x50]}
                            var_74_1 = var_20
                            unimplemented  {fadd dword [ebp-0x28]}
                            float var_1c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                            unimplemented  {fstp dword [ebp-0x18], st0}
                            unimplemented  {fld st0, dword [ebp-0x4c]}
                            var_70_1 = var_1c_2
                            unimplemented  {fadd dword [ebp-0x24]}
                            float var_18_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                            unimplemented  {fstp dword [ebp-0x14], st0}
                            top_1 = top_2 + 1
                            var_6c_1 = var_18_2
        
        float ebx_1
        
        if (result != 0)
            ebx_1 = var_74_1
        label_56aaf3:
            void* eax_16 = data_27e7fcc
            
            if (eax_16 == 0)
                sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* eax_18
            int32_t ecx_12
            eax_18, ecx_12 = sub_4d5990(*(eax_16 + 4), result)
            
            if (sub_56a380(ecx_12, eax_18) != 0)
                if (arg1 != 0)
                    *arg1 = ebx_1
                    arg1[1] = var_70_1
                    arg1[2] = var_6c_1
                
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return result
        else
            int32_t var_40
            __builtin_memset(&var_40, 0, 0x20)
            int32_t var_34_2
            var_34_2.b = 1
            
            if (sub_4d5260(0, &var_58, &var_40, &var_58) != 0)
                int32_t result_1
                result = result_1
                float var_30_3
                ebx_1 = var_30_3
                float var_2c_2
                var_70_1 = var_2c_2
                float var_28_2
                var_6c_1 = var_28_2
                
                if (result != 0)
                    goto label_56aaf3
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
