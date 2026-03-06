// 函数名称: sub_4df840
// 虚拟地址: 0x4df840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void** __convention("regparm")sub_4df840(int32_t arg1, void* arg2, char** arg3, float* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692a10
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_210 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void** result = data_27e7fcc
    char** ebx = arg3
    void* edi = arg2
    char** var_68 = ebx
    void* var_64 = edi
    
    if (result != 0)
        long double x87_r7_1 = float.t(0)
        float var_200[0x8]
        float var_1c0[0x10]
        float var_b8
        float var_a8
        int16_t top_1
        
        if (((result[0xf] u>> 3).b & 1) == 0)
            top_1 = 0
        else
            char** var_5c_1
            char** esi_1
            
            if (ebx != 0)
                if (ebx[1] != 2)
                    sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                        "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                var_5c_1 = ebx
                esi_1 = ebx
            else
                x87_r7_1 = float.t(0)
                esi_1 = sub_50a390(ebx + 2)
                var_5c_1 = esi_1
            
            if (*esi_1 == 0)
                sub_5094d0(esi_1, 0, 1)
                x87_r7_1 = float.t(0)
            
            char* eax_5 = *esi_1
            esi_1[7] = &esi_1[7][1]
            int32_t var_8_1 = 0
            void* eax_7 = **eax_5
            
            if (eax_7 == 0 || edi == 0)
                goto label_4dfbd3
            
            int32_t eax_8 = *(eax_7 + 0x10)
            int32_t ebx_1 = 0
            int32_t var_6c_1 = eax_8
            
            if (eax_8 s<= 0)
                ebx = var_68
            label_4dfbd3:
                top_1 = 0
                int32_t var_8_3 = 0xffffffff
                esi_1[7] = &esi_1[7][0xffffffff]
                result = data_27e7fcc
            else
                long double x87_r6_1 = float.t(1)
                float var_128_1 = fconvert.s(x87_r6_1)
                float var_124_1 = fconvert.s(x87_r7_1)
                float var_120_1 = fconvert.s(x87_r7_1)
                long double x87_r5_1 = fconvert.t(0.5f)
                float var_11c_1 = fconvert.s(x87_r5_1)
                long double x87_r4_1 = fconvert.t(0.300000012f)
                float var_f8_1 = fconvert.s(x87_r4_1)
                long double x87_r3_1 = fconvert.t(0.00999999978f)
                float var_f4_1 = fconvert.s(x87_r3_1)
                float var_f0_1 = fconvert.s(x87_r3_1)
                long double x87_r2_1 = fconvert.t(-0.00999999978f)
                float var_e8_1 = fconvert.s(x87_r2_1)
                float var_e4_1 = fconvert.s(x87_r2_1)
                float var_e0_1 = fconvert.s(x87_r2_1)
                float var_118_1 = fconvert.s(x87_r2_1)
                float var_114_1 = fconvert.s(x87_r2_1)
                float var_110_1 = fconvert.s(x87_r2_1)
                float var_d8_1 = fconvert.s(x87_r2_1)
                float var_d4_1 = fconvert.s(x87_r2_1)
                float var_d0_1 = fconvert.s(x87_r2_1)
                float var_80_1 = fconvert.s(x87_r7_1)
                float var_78_1 = fconvert.s(x87_r7_1)
                float var_90_1 = fconvert.s(x87_r7_1)
                float var_8c_1 = fconvert.s(x87_r7_1)
                float var_7c_1 = fconvert.s(x87_r6_1)
                float var_88_1 = fconvert.s(x87_r6_1)
                float var_74_1 = fconvert.s(x87_r5_1)
                float var_84_1 = fconvert.s(x87_r5_1)
                float var_108_1 = fconvert.s(x87_r3_1)
                float var_100_1 = fconvert.s(x87_r3_1)
                float var_c8_1 = fconvert.s(x87_r3_1)
                float var_c4_1 = fconvert.s(x87_r3_1)
                float var_104_1 = fconvert.s(x87_r4_1)
                float var_c0_1 = fconvert.s(x87_r4_1)
                top_1 = 0
                
                do
                    void var_1e0
                    int32_t eax_9
                    int32_t edx_1
                    eax_9, edx_1 = sub_4d4060(eax_8, ebx_1, edi, &var_1e0)
                    float var_38[0x8]
                    __builtin_memcpy(&var_38, eax_9, 0x20)
                    sub_406370(&var_200, edx_1, &var_38)
                    float var_138 = var_128_1
                    __builtin_memcpy(&var_1c0, &var_200, 0x40)
                    float var_12c_1 = var_11c_1
                    float var_134_1 = var_124_1
                    float var_130_1 = var_120_1
                    float var_150 = var_e8_1
                    float var_14c_1 = var_e4_1
                    float var_148_1 = var_e0_1
                    float var_144_1 = var_f8_1
                    float var_140_1 = var_f4_1
                    float var_13c_1 = var_f0_1
                    sub_4dcb10(&var_150, &var_138, &var_1c0)
                    var_a8 = var_80_1
                    float var_a0_1 = var_78_1
                    float var_a4_1 = var_7c_1
                    float var_9c_1 = var_74_1
                    float var_168 = var_118_1
                    float var_164_1 = var_114_1
                    float var_160_1 = var_110_1
                    float var_15c_1 = var_108_1
                    float var_158_1 = var_104_1
                    float var_154_1 = var_100_1
                    sub_4dcb10(&var_168, &var_a8, &var_1c0)
                    var_b8 = var_90_1
                    float var_b4_1 = var_8c_1
                    float var_b0_1 = var_88_1
                    float var_ac_1 = var_84_1
                    float var_180 = var_d8_1
                    float var_17c_1 = var_d4_1
                    float var_178_1 = var_d0_1
                    float var_174_1 = var_c8_1
                    float var_170_1 = var_c4_1
                    float var_16c_1 = var_c0_1
                    eax_8 = sub_4dcb10(&var_180, &var_b8, &var_1c0)
                    edi = var_64
                    ebx_1 += 1
                while (ebx_1 s< var_6c_1)
                
                ebx = var_68
                int32_t var_8_2 = 0xffffffff
                var_5c_1[7] = &var_5c_1[7][0xffffffff]
                result = data_27e7fcc
        
        if (result != 0)
            void** result_1
            
            if (((result[0xf] u>> 2).b & 1) == 0)
            label_4dfd93:
                result = data_27e7fcc
                
                if (result != 0 && ((result[0xf] u>> 2).b & 1) != 0 && edi != 0 && *(edi + 0x2c) != 0)
                    char** var_64_1
                    char** esi_13
                    
                    if (ebx != 0)
                        if (ebx[1] != 2)
                            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        var_64_1 = ebx
                        esi_13 = ebx
                    else
                        esi_13 = sub_50a390(ebx + 2)
                        var_64_1 = esi_13
                    
                    if (*esi_13 == 0)
                        sub_5094d0(esi_13, 0, 1)
                    
                    char* eax_34 = *esi_13
                    esi_13[7] = &esi_13[7][1]
                    result = *eax_34
                    int32_t var_8_4 = 1
                    void* ecx_26 = *result
                    
                    if (ecx_26 != 0)
                        void* eax_35 = *(edi + 0x2c)
                        int32_t edx_16 = *(eax_35 + 0x14)
                        result = eax_35 + 0x10
                        result_1 = result
                        
                        if (*(ecx_26 + 8) != edx_16)
                            sub_4c5870("pStructureData->boneCount == numBones", &data_83f3d3, 
                                "Draw3d.cpp", 0x774, "Structure3DDebugDraw")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void** result_3 = nullptr
                        void** result_2 = nullptr
                        
                        if (edx_16 s> 0)
                            int32_t var_5c_3 = 0
                            float* ebx_6 = *(ecx_26 + 0xc) + 0xb8
                            
                            while (true)
                                if (result_3 s< 0 || result_3 s>= result[1])
                                    sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                        "c:\ax2010\engine\xArray.h", 0xc3, 
                                        "XArray<struct Mat4>::operator []")
                                    
                                    if (IsDebuggerPresent() != 1)
                                        sub_4c5a30()
                                        noreturn
                                    
                                    breakpoint
                                
                                float var_58[0x8]
                                sub_406020(&var_58, arg4, *result + var_5c_3)
                                unimplemented  {fld1 }
                                float var_90_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x8c], st0})
                                unimplemented  {fstp dword [ebp-0x8c], st0}
                                unimplemented  {fldz }
                                float var_8c_3 = fconvert.s(unimplemented  {fst dword [ebp-0x88], st0})
                                float var_88_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x84], st0})
                                unimplemented  {fstp dword [ebp-0x84], st0}
                                unimplemented  {fld st0, dword [0x873c70]}
                                __builtin_memcpy(&var_1c0, &var_58, 0x40)
                                float var_84_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x80], st0})
                                unimplemented  {fstp dword [ebp-0x80], st0}
                                var_b8 = var_90_3
                                float var_b0_3 = var_88_3
                                float var_ac_3 = var_84_3
                                float var_b4_3 = var_8c_3
                                sub_4dcb10(ebx_6, &var_b8, &var_1c0)
                                unimplemented  {fldz }
                                float var_80_3 = fconvert.s(unimplemented  {fst dword [ebp-0x7c], st0})
                                unimplemented  {fld1 }
                                float var_7c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x78], st0})
                                unimplemented  {fstp dword [ebp-0x78], st0}
                                var_a8 = var_80_3
                                float var_a4_3 = var_7c_3
                                float var_78_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
                                unimplemented  {fstp dword [ebp-0x74], st0}
                                unimplemented  {fld st0, dword [0x873c70]}
                                float var_a0_3 = var_78_3
                                float var_74_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x70], st0})
                                unimplemented  {fstp dword [ebp-0x70], st0}
                                float var_9c_3 = var_74_3
                                sub_406020(&var_58, arg4, &ebx_6[-0x23])
                                __builtin_memcpy(&var_200, &var_58, 0x40)
                                sub_4dcb10(ebx_6, &var_a8, &var_200)
                                var_5c_3 += 0x40
                                result = result_2 + 1
                                ebx_6 = &ebx_6[0x34]
                                result_2 = result
                                
                                if (result s>= edx_16)
                                    esi_13 = var_64_1
                                    break
                                
                                result_3 = result_2
                                result = result_1
                                continue
                    
                    esi_13[7] -= 1
            else
                result = *sub_4e7410(ebx)
                result_1 = result
                
                if (result != 0)
                    int32_t i_1 = 0
                    
                    if (result[6] s> 0)
                        int32_t var_5c_2 = 0
                        int32_t i
                        
                        do
                            void* ebx_3 = result[7] + var_5c_2
                            int32_t eax_25 = *(ebx_3 + 0x40)
                            __builtin_memcpy(&var_1c0, arg4, 0x40)
                            
                            if (eax_25 s>= 0 && var_64 != 0)
                                void* ecx_16 = *(var_64 + 0x2c)
                                
                                if (ecx_16 != 0)
                                    if (eax_25 s>= *(ecx_16 + 0x14))
                                        sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                            "c:\ax2010\engine\xArray.h", 0xc3, 
                                            "XArray<struct Mat4>::operator []")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    sub_406020(&var_200, arg4, (eax_25 << 6) + *(ecx_16 + 0x10))
                                    __builtin_memcpy(&var_1c0, &var_200, 0x40)
                            
                            int32_t eax_29 = *(ebx_3 + 4)
                            
                            if (eax_29 == 1)
                                unimplemented  {fldz }
                                float var_90_2 = fconvert.s(unimplemented  {fst dword [ebp-0x8c], st0})
                                float var_8c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x88], st0})
                                unimplemented  {fstp dword [ebp-0x88], st0}
                                unimplemented  {fld1 }
                                float var_88_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x84], st0})
                                unimplemented  {fstp dword [ebp-0x84], st0}
                                var_b8 = var_90_2
                                unimplemented  {fld st0, dword [0x873c70]}
                                float var_b4_2 = var_8c_2
                                float var_84_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x80], st0})
                                unimplemented  {fstp dword [ebp-0x80], st0}
                                float var_b0_2 = var_88_2
                                float var_ac_2 = var_84_2
                                sub_4dd280(ebx_3 + 8, &var_1c0)
                            else if (eax_29 == 2)
                                unimplemented  {fldz }
                                float var_80_2 = fconvert.s(unimplemented  {fst dword [ebp-0x7c], st0})
                                float var_7c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x78], st0})
                                unimplemented  {fstp dword [ebp-0x78], st0}
                                unimplemented  {fld1 }
                                float var_78_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
                                unimplemented  {fstp dword [ebp-0x74], st0}
                                float var_a4_2 = var_7c_2
                                unimplemented  {fld st0, dword [0x873c70]}
                                var_a8 = var_80_2
                                float var_74_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x70], st0})
                                unimplemented  {fstp dword [ebp-0x70], st0}
                                float var_a0_2 = var_78_2
                                float var_9c_2 = var_74_2
                                sub_4dee00(&var_1c0, &var_a8)
                                top_1 -= 1
                                unimplemented  {call 0x4dee00}
                            
                            result = result_1
                            var_5c_2 += 0x44
                            i = i_1 + 1
                            i_1 = i
                        while (i s< result[6])
                        edi = var_64
                        ebx = var_68
                    
                    goto label_4dfd93
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
