// 函数名称: sub_478b90
// 虚拟地址: 0x478b90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_478b90(int32_t arg1, int32_t* arg2, float* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6965fc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_1b0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* result = arg4
    int32_t* ebx = arg2
    int32_t* var_134 = ebx
    void* result_1 = result
    float* var_12c = arg3
    
    if (ebx[7] != 0)
        int32_t i = 0
        int32_t i_1 = 0
        float var_118[0x9]
        
        do
            if (ebx[i + 8] != 0)
                void* eax_3
                
                if (i != 0)
                    eax_3 = result + 0x48
                else
                    eax_3 = result + 0x28
                
                void* var_13c_1 = eax_3
                int32_t var_1b4_1 = *ebx
                float var_160
                sub_478ac0(&var_160, i, arg3)
                float var_b4[0x7]
                __builtin_memcpy(&var_b4, &var_160, 0x1c)
                int32_t var_38
                __builtin_memcpy(&var_38, sub_5087d0(&var_160, &var_b4), 0x1c)
                float var_58
                __builtin_memcpy(&var_58, var_12c, 0x20)
                unimplemented  {fld st0, dword [ebp-0x38]}
                unimplemented  {fadd qword [0x8a57a0]}
                float var_3c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
                unimplemented  {fstp dword [ebp-0x38], st0}
                unimplemented  {fld1 }
                var_160 = fconvert.s(unimplemented  {fstp dword [ebp-0x15c], st0})
                unimplemented  {fstp dword [ebp-0x15c], st0}
                int32_t var_28
                int32_t var_14c_1 = var_28
                int32_t var_15c_1 = var_38
                int32_t var_24
                int32_t var_148_1 = var_24
                int32_t var_20
                int32_t var_144_1 = var_20
                int32_t var_2c
                int32_t var_150_1 = var_2c
                int32_t var_34
                int32_t var_158 = var_34
                int32_t var_30
                int32_t var_154_1 = var_30
                void var_d4
                __builtin_memcpy(&var_d4, &var_160, 0x20)
                float var_180
                int32_t edx_2 = sub_405f60(&var_180, &var_58)
                float var_78[0x8]
                __builtin_memcpy(&var_78, &var_180, 0x20)
                void var_1a0
                sub_406370(&var_1a0, edx_2, &var_78)
                __builtin_memcpy(&var_118, &var_1a0, 0x40)
                int32_t* eax_10 = *(var_134[i_1 + 8] + 4)
                
                if (eax_10[1] != 2)
                    sub_4c5870("assetPtr->assetType == ASSET_TYPE_STRUCTURE", &data_83f3d3, 
                        "Structure.cpp", 0x550, "StructureGetDef")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* eax_11 = sub_466320(eax_10)
                float* esi_6 = var_134[i_1 + 8]
                arg3 = sub_4e03f0(esi_6[1], &var_118, eax_11 + 0x24, esi_6, 0, nullptr)
                int16_t top = top - 1
                unimplemented  {call 0x4e03f0}
                i = i_1
                result = result_1
                ebx = var_134
            
            i += 1
            i_1 = i
        while (i s< 2)
        
        if (data_27c05f2 == 0 || ebx[1] != 1)
            sub_406370(&var_118, i, var_12c)
            void var_98
            __builtin_memcpy(&var_98, &var_118, 0x40)
            int32_t* eax_14 = *(ebx[7] + 4)
            
            if (eax_14[1] != 2)
                sub_4c5870("assetPtr->assetType == ASSET_TYPE_STRUCTURE", &data_83f3d3, 
                    "Structure.cpp", 0x550, "StructureGetDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* eax_17 = sub_466320(eax_14)
            int32_t* edx_4 = ebx[7]
            int32_t eax_18 = edx_4[1]
            char const (** var_1b8_4)[0x1b]
            void* const var_1b4_8
            int32_t* eax_25
            
            if (eax_18 == data_307c7a8)
                int32_t eax_19 = data_31661cc
                
                if ((eax_19.b & 1) == 0)
                    data_bebf08 = 0x3f800000
                    data_bebf0c = 0x3f800000
                    eax_19 |= 1
                    data_31661cc = eax_19
                    data_bebf10 = 0x3f800000
                    data_bebf14 = 0x3f800000
                
                if ((eax_19.b & 2) == 0)
                    data_31661cc = eax_19 | 2
                    int32_t var_8_1 = 0
                    char const (** var_1b4_7)[0x1b] = &data_bebf00
                    data_31661c9 = sub_4e0370(*(ebx[7] + 4), edx_4)
                    int32_t var_8_2 = 0xffffffff
                
                int32_t* edi_4 = ebx[0xa]
                
                if (edi_4 != 0)
                    void* eax_26
                    float* ecx_7
                    void* edx_5
                    eax_26, ecx_7, edx_5 = sub_4e7210(*edi_4)
                    int32_t esi_9 = 0
                    
                    if (*(eax_26 + 0x14) s<= 0)
                    label_478f11:
                        sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0x4b4, 
                            "GetBlueLadyTalkTexture")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    while (true)
                        void var_128
                        void* var_1b4_9 = &var_128
                        int32_t var_1b8_5 = esi_9
                        ecx_7 = sub_4e9910(edi_4, edx_5, ecx_7)
                        int32_t var_e0
                        
                        if (var_e0 != 0)
                            var_1b4_8 = 1
                            data_bebf04 = var_e0
                            eax_25 = ebx[7]
                            var_1b8_4 = &data_bebf00
                            break
                        
                        edx_5 = eax_26
                        esi_9 += 1
                        
                        if (esi_9 s>= *(edx_5 + 0x14))
                            goto label_478f11
                else
                    var_1b4_8 = 1
                    data_bebf04 = data_307c804
                    eax_25 = ebx[7]
                    var_1b8_4 = &data_bebf00
                
                goto label_47901c
            
            char** var_1c8_2
            float* var_1c4_5
            int32_t* var_1c0_5
            int32_t* var_1bc_5
            
            if (eax_18 != data_307c7d0)
                var_1b4_8 = nullptr
                eax_25 = edx_4
                var_1b8_4 = nullptr
            label_47901c:
                var_1bc_5 = eax_25
                var_1c0_5 = eax_17 + 0x24
                var_1c4_5 = &var_98
                var_1c8_2 = eax_25[1]
            else
                int32_t eax_30 = data_31661cc
                
                if ((eax_30.b & 4) == 0)
                    data_bebf20 = 0x3f800000
                    data_bebf24 = 0x3f800000
                    eax_30 |= 4
                    data_31661cc = eax_30
                    data_bebf28 = 0x3f800000
                    data_bebf2c = 0x3f800000
                
                if ((eax_30.b & 8) == 0)
                    data_31661cc = eax_30 | 8
                    int32_t var_8_3 = 1
                    char const (** var_1b4_11)[0x13] = &data_bebf18
                    data_31661c8 = sub_4e0370(*(ebx[7] + 4), edx_4)
                    int32_t var_8_4 = 0xffffffff
                
                unimplemented  {fld1 }
                var_1b4_8 = 1
                float var_30_1 = fconvert.s(unimplemented  {fst dword [ebp-0x2c], st0})
                var_1b8_4 = &data_bebf18
                float var_2c_1 = fconvert.s(unimplemented  {fst dword [ebp-0x28], st0})
                float var_28_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                unimplemented  {fld st0, dword [ebx+0x34]}
                data_bebf20 = var_30_1
                float var_24_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x20], st0})
                unimplemented  {fstp dword [ebp-0x20], st0}
                data_bebf24 = var_2c_1
                data_bebf28 = var_28_1
                data_bebf2c = var_24_1
                int32_t* eax_36 = ebx[7]
                var_1bc_5 = eax_36
                var_1c0_5 = eax_17 + 0x24
                var_1c4_5 = &var_98
                var_1c8_2 = eax_36[1]
            
            int32_t ecx_10 =
                sub_4e03f0(var_1c8_2, var_1c4_5, var_1c0_5, var_1bc_5, var_1b8_4, var_1b4_8)
            unimplemented  {call 0x4e03f0}
            
            if (sub_4eb5a0(ecx_10, ebx[0x26]) != 0)
                ecx_10 = sub_4f2850(&data_be4c5c)
                ebx = var_134
            
            result = sub_4eb5a0(ecx_10, ebx[0x27])
            
            if (result != 0)
                result = sub_4f2850(&data_be4c5c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
