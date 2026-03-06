// 函数名称: sub_512bb0
// 虚拟地址: 0x512bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_512bb0(char** arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e471
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t ecx
    int32_t var_3c = ecx
    int32_t var_28 = 0
    int32_t ecx_1
    int32_t edx
    ecx_1, edx = sub_4c4a50(arg1, "samplerFn_layer%d")
    int32_t var_8_2 = 0
    void* var_48 = arg3
    int32_t var_4c = ecx
    int32_t var_28_1 = 1
    sub_5124c0(arg2 + 0x28, edx, ecx_1)
    int32_t eax_5 = 0
    int32_t var_8_3 = 1
    int32_t ebx_1
    
    if (*(arg3 + 0x15c) s<= 0)
    label_512c44:
        ebx_1 = 0xffffffff
    else
        void* ecx_2 = arg3 + 0x14c
        
        while (*ecx_2 != *(arg2 + 0xc))
            eax_5 += 1
            ecx_2 += 4
            
            if (eax_5 s>= *(arg3 + 0x15c))
                goto label_512c44
        
        ebx_1 = eax_5
    
    char* var_14
    sub_4c42b0(&var_14, "texDiffuse")
    var_8_3.b = 2
    
    if (ebx_1 s> 0)
        int32_t var_3c_1 = ebx_1
        var_8_3.b = 3
        char* var_24
        char* eax_7 = *sub_4c4a50(&var_24, "%d")
        
        if (eax_7 == 0)
            eax_7 = &data_83f3d3
        
        sub_4c4620(&var_14, eax_7)
        var_8_3.b = 2
        char* eax_9 = var_24
        
        if (eax_9 != 0 && *eax_9 != 0)
            void* eax_11 = sub_4c4060(&var_24)
            int32_t temp0_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_3 = *(eax_11 + 0xc) + 0x10
                sub_4f4430(eax_11, sub_4f4380(esi_3), esi_3)
    
    char* var_1c
    sub_512670(&var_1c, arg2)
    var_8_3.b = 4
    char* const edi_3 = var_14
    
    if (edi_3 == 0)
        edi_3 = &data_83f3d3
    
    char* edx_2 = var_1c
    
    if (edx_2 == 0)
        edx_2 = &data_83f3d3
    
    char* var_20
    char* const ecx_3 = var_20
    
    if (ecx_3 == 0)
        ecx_3 = &data_83f3d3
    
    char** esi_4 = arg1
    char* eax_14 = *esi_4
    
    if (eax_14 == 0)
        eax_14 = &data_83f3d3
    
    char* const var_3c_5 = edi_3
    char* var_40_1 = edx_2
    char* const var_44_2 = ecx_3
    char* var_48_1 = eax_14
    char* var_18
    sub_4c4a50(&var_18, "float4 %s(float2 arg_uv)\n{\n%s%s\treturn tex2D(%s, uv);\n}\n")
    var_8_3.b = 5
    *(arg3 + 0x104) += 1
    sub_4c4510(esi_4)
    sub_4c4510(&var_18)
    var_8_3.b = 4
    char* eax_17 = var_18
    
    if (eax_17 != 0 && *eax_17 != 0)
        void* eax_19 = sub_4c4060(&var_18)
        int32_t temp1_1 = *(eax_19 + 4)
        *(eax_19 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_6 = *(eax_19 + 0xc) + 0x10
            sub_4f4430(eax_19, sub_4f4380(esi_6), esi_6)
            esi_4 = arg1
    
    var_8_3.b = 2
    char* eax_22 = var_1c
    
    if (eax_22 != 0 && *eax_22 != 0)
        void* eax_24 = sub_4c4060(&var_1c)
        int32_t temp2_1 = *(eax_24 + 4)
        *(eax_24 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_8 = *(eax_24 + 0xc) + 0x10
            sub_4f4430(eax_24, sub_4f4380(esi_8), esi_8)
            esi_4 = arg1
    
    var_8_3.b = 1
    char* eax_27 = var_14
    
    if (eax_27 != 0 && *eax_27 != 0)
        void* eax_29 = sub_4c4060(&var_14)
        int32_t temp3_1 = *(eax_29 + 4)
        *(eax_29 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_10 = *(eax_29 + 0xc) + 0x10
            sub_4f4430(eax_29, sub_4f4380(esi_10), esi_10)
            esi_4 = arg1
    
    var_8_3.b = 0
    char* eax_32 = var_20
    
    if (eax_32 != 0 && *eax_32 != 0)
        void* eax_34 = sub_4c4060(&var_20)
        int32_t temp4_1 = *(eax_34 + 4)
        *(eax_34 + 4) -= 1
        
        if (temp4_1 == 1)
            int32_t esi_12 = *(eax_34 + 0xc) + 0x10
            sub_4f4430(eax_34, sub_4f4380(esi_12), esi_12)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return esi_4
}
