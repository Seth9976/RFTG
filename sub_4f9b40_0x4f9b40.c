// 函数名称: sub_4f9b40
// 虚拟地址: 0x4f9b40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4f9b40(int32_t arg1, void* arg2, int32_t arg3, float arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx
    int32_t var_160 = ecx
    int32_t var_164 = ecx
    *(arg2 + 4)
    float var_7c
    __builtin_memcpy(&var_7c, 
        sub_4f62d0(arg3, fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg4)))), arg2), 0x40)
    int32_t* ebx_2 = arg3 * 0x118 + *sub_4f4890(*(arg2 + 4))
    int128_t* eax_5
    void* edx
    eax_5, edx = sub_4f6e90(arg3, arg2, &data_83f3d3)
    int32_t ecx_3 = ebx_2[1] - 1
    int128_t* var_84_1 = eax_5
    float var_1c
    int32_t var_14
    
    switch (ecx_3)
        case 0
            int32_t eax_11
            int80_t st0_1
            st0_1, eax_11 = sub_4f67d0(eax_5, nullptr, nullptr, ebx_2, eax_5, &var_7c, nullptr, nullptr)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_11
        case 1
            if (ebx_2[0x28] == 0)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_5
            
            bool cond:0 = *(ebx_2 + 0xae) == 0
            void* ecx_16 = data_27e7fe0
            int32_t esi_5 = *(ecx_16 + 0x38)
            float var_30 = *(ecx_16 + 0x28)
            int32_t var_2c = *(ecx_16 + 0x2c)
            int32_t var_28_2 = *(ecx_16 + 0x30)
            int32_t var_24_2 = *(ecx_16 + 0x34)
            int32_t var_20_2 = esi_5
            
            if (not(cond:0))
                void var_fc
                int32_t* eax_16 = sub_4f4990(&var_7c, &var_fc, &ebx_2[7], &var_fc, &var_7c)
                int32_t edx_12 = eax_16[1]
                var_1c = *eax_16
                int32_t var_18_3 = edx_12
                int32_t edx_13 = eax_16[3]
                var_14 = eax_16[2]
                int32_t var_10_2 = edx_13
                void var_10c
                int80_t st0_3
                
                if (esi_5 != 0)
                    st0_3, eax_16 = sub_4fc620(&var_30, &var_1c, &var_10c)
                int32_t edx_15 = eax_16[1]
                var_1c = *eax_16
                int32_t var_18_4 = edx_15
                int32_t edx_16 = eax_16[3]
                var_14 = eax_16[2]
                int32_t var_10_3 = edx_16
                sub_4d9620(&var_1c)
                eax_5 = var_84_1
            
            int32_t esi_7 = eax_5[0x12].d
            int32_t edi_3 = *eax_5
            int32_t var_8c_2
            int32_t var_88_2
            int32_t edx_18
            
            if (esi_7 s<= edi_3)
                edx_18 = ebx_2[0x22]
                var_8c_2 = ebx_2[0x23]
                var_88_2 = edx_18
            else
                var_8c_2 = *(eax_5 + 0x12c)
                edx_18 = eax_5[0x13].d
                var_88_2 = edx_18
            
            int32_t eax_17
            int32_t ecx_25
            
            if (esi_7 s<= edi_3)
                ecx_25 = ebx_2[0x23]
                eax_17 = ebx_2[0x22]
            else
                ecx_25 = *(eax_5 + 0x124)
                eax_17 = *(eax_5 + 0x128)
            
            int32_t var_10_4 = eax_17
            int32_t eax_19 = ebx_2[0x23] * ebx_2[0x22]
            var_14 = ecx_25
            
            if (eax_19 s> 0x1e)
                sub_4c5870("el.rows * el.cols <= 30", &data_83f3d3, "UIDef.cpp", 0xa64, 
                    "UIStateDrawElementInt")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            if (var_8c_2 * edx_18 s> 0x1e)
                sub_4c5870("dimsUpdate.x * dimsUpdate.y <= 30", &data_83f3d3, "UIDef.cpp", 0xa65, 
                    "UIStateDrawElementInt")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            long double x87_r7_7 = fconvert.t(var_7c) + fconvert.t(*(var_84_1 + 0x154))
            float var_dc
            __builtin_memcpy(&var_dc, &var_7c, 0x40)
            var_dc = fconvert.s(x87_r7_7)
            float var_d8
            float var_d8_1 = fconvert.s(fconvert.t(*(var_84_1 + 0x158)) + fconvert.t(var_d8))
            int16_t top = 0
            int32_t var_80_3 = 0
            
            if (edx_18 s> 0)
                int32_t eax_30
                
                do
                    int32_t var_90_1 = 0
                    
                    if (var_8c_2 s> 0)
                        int32_t eax_28
                        
                        do
                            int32_t var_98 = var_90_1
                            int32_t var_94_1 = var_80_3
                            void var_14c
                            int32_t eax_24 = sub_4f56d0(&var_14c, ebx_2, var_84_1, &var_dc, &var_98, 
                                &var_14, nullptr)
                            unimplemented  {call 0x4f56d0}
                            __builtin_memcpy(&var_7c, eax_24, 0x40)
                            void* eax_26
                            int32_t ecx_30
                            eax_26, ecx_30 = sub_4f7720(&var_98, ebx_2, var_84_1)
                            unimplemented  {fld1 }
                            int32_t var_160_6 = ecx_30
                            float var_160_7 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            top -= 1
                            sub_4f9fe0(*(eax_26 + 0x434), &var_7c)
                            eax_28 = var_90_1 + 1
                            var_90_1 = eax_28
                        while (eax_28 s< var_8c_2)
                        edx_18 = var_88_2
                    
                    eax_30 = var_80_3 + 1
                    var_80_3 = eax_30
                while (eax_30 s< edx_18)
            
            int32_t eax_32 = sub_4d95f0(&var_30)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_32
        case 2
            int32_t var_160_3 = 0
            struct _EXCEPTION_REGISTRATION_RECORD** eax_12 =
                sub_4f95b0(eax_5, &var_7c, eax_5, ebx_2, &var_7c, nullptr)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_12
        case 3, 5
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_5
        case 4
            float* var_160_4 = &var_7c
            int32_t eax_14
            int80_t st0_2
            st0_2, eax_14 = sub_4f9a60(ebx_2, eax_5, edx)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_14
        case 7
            int32_t edx_1 = eax_5[0xa].d
            eax_5 = sub_4eb5a0(ecx_3, edx_1)
            int128_t* var_80_2 = eax_5
            
            if (eax_5 != 0)
                int32_t var_160_1 = 0
                void var_ec
                int32_t* eax_7 = sub_4f52e0(&var_7c, &var_ec, ebx_2, edx_1.b)
                int32_t edx_2 = eax_7[1]
                var_1c = *eax_7
                int32_t var_18_1 = edx_2
                int32_t edx_3 = eax_7[3]
                var_14 = eax_7[2]
                int32_t var_10_1 = edx_3
                float eax_9
                float edx_4
                eax_9, edx_4 = sub_405eb0(&var_1c)
                var_1c = fconvert.s(fconvert.t(eax_9))
                float eax_10 = var_1c
                float var_18_2 = fconvert.s(fconvert.t(edx_4))
                var_14 = fconvert.s(float.t(0))
                int32_t edx_5 = var_14
                float var_3c
                __builtin_memcpy(&var_3c, &data_be4c5c, 0x20)
                float var_70
                var_3c = fconvert.s(fconvert.t(var_70))
                float var_28_1 = eax_10
                float var_24_1 = var_18_2
                int32_t var_20_1 = edx_5
                eax_5 = sub_4f2850(&var_3c)
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_5
    
    sub_4c5870("Halt", &data_83f3d3, "UIDef.cpp", 0xa79, "UIStateDrawElementInt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
