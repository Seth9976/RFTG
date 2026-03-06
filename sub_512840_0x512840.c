// 函数名称: sub_512840
// 虚拟地址: 0x512840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_512840(int32_t arg1, int32_t arg2, char* arg3, char** arg4, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e4e1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* var_3c = arg3
    int32_t var_28 = 0
    int32_t ecx
    int32_t edx
    ecx, edx = sub_4c4a50(arg4, "samplerFn_layer%d")
    int32_t var_8_2 = 0
    char* const arg_8
    char* const edi = arg_8
    void* var_48 = arg5
    char* var_4c = arg3
    int32_t var_28_1 = 1
    sub_5124c0(&edi[0x28], edx, ecx)
    char* eax_5 = nullptr
    int32_t var_8_3 = 1
    char* ebx_1
    
    if (*(arg5 + 0x15c) s<= 0)
    label_5128d4:
        ebx_1 = 0xffffffff
    else
        void* ecx_1 = arg5 + 0x14c
        
        while (*ecx_1 != *(edi + 0xc))
            eax_5 = &eax_5[1]
            ecx_1 += 4
            
            if (eax_5 s>= *(arg5 + 0x15c))
                goto label_5128d4
        
        ebx_1 = eax_5
    
    char* var_14
    sub_4c42b0(&var_14, "texDiffuse")
    var_8_3.b = 2
    char* var_24
    
    if (ebx_1 s> 0)
        var_3c = ebx_1
        var_8_3.b = 3
        char* eax_7 = *sub_4c4a50(&var_24, "%d")
        
        if (eax_7 == 0)
            eax_7 = &data_83f3d3
        
        var_3c = eax_7
        sub_4c4620(&var_14, var_3c)
        var_8_3.b = 2
        char* eax_9 = var_24
        
        if (eax_9 != 0 && *eax_9 != 0)
            void* eax_11 = sub_4c4060(&var_24)
            int32_t temp0_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp0_1 == 1)
                char* esi_3 = *(eax_11 + 0xc) + 0x10
                int32_t* eax_12 = sub_4f4380(esi_3)
                var_3c = esi_3
                sub_4f4430(eax_11, eax_12, var_3c)
    
    char* esi_4 = arg_8
    var_3c = esi_4
    char* var_1c
    char* ecx_3 = sub_512670(&var_1c, var_3c)
    arg_8 = &data_83f3d3
    var_8_3.b = 5
    
    if (*(esi_4 + 0x14) != 0)
        var_3c = "EmitTextureFn"
        sub_4c5870("Halt", &data_83f3d3, "MaterialFnDef.cpp", 0x2f2, var_3c)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    var_3c = ecx_3
    char* ecx_4 = var_14
    var_24 = &var_3c
    var_3c = ecx_4
    
    if (ecx_4 != 0 && *ecx_4 != 0)
        void* eax_16 = sub_4c4060(&var_3c)
        *(eax_16 + 4) += 1
    
    var_3c = sub_5127a0(&var_24)
    var_8_3.b = 6
    sub_4c4510(var_3c)
    var_8_3.b = 5
    char* eax_18 = var_24
    
    if (eax_18 != 0 && *eax_18 != 0)
        void* eax_20 = sub_4c4060(&var_24)
        int32_t temp1_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp1_1 == 1)
            char* esi_6 = *(eax_20 + 0xc) + 0x10
            int32_t* eax_21 = sub_4f4380(esi_6)
            var_3c = esi_6
            sub_4f4430(eax_20, eax_21, var_3c)
    
    char* const esi_9 = arg_8
    char* const edi_5 = &data_83f3d3
    
    if (esi_9 != 0)
        edi_5 = esi_9
    
    char* const edx_1 = var_1c
    
    if (edx_1 == 0)
        edx_1 = &data_83f3d3
    
    char* var_20
    char* const ecx_5 = var_20
    
    if (ecx_5 == 0)
        ecx_5 = &data_83f3d3
    
    char* eax_24 = *arg4
    
    if (eax_24 == 0)
        eax_24 = &data_83f3d3
    
    var_3c = edi_5
    char* const var_40_2 = edx_1
    char* const var_44_2 = ecx_5
    char* var_48_1 = eax_24
    char* var_18
    sub_4c4a50(&var_18, "float4 %s(float2 arg_uv)\n{\n%s\n%s\n%s}\n")
    var_8_3.b = 7
    int32_t eax_26 = *(arg5 + 0x104) + 1
    var_3c = arg4
    *(arg5 + 0x104) = eax_26
    sub_4c4510(var_3c)
    var_3c = &var_18
    sub_4c4510(var_3c)
    var_8_3.b = 5
    char* eax_27 = var_18
    
    if (eax_27 != 0 && *eax_27 != 0)
        void* eax_29 = sub_4c4060(&var_18)
        int32_t temp2_1 = *(eax_29 + 4)
        *(eax_29 + 4) -= 1
        
        if (temp2_1 == 1)
            char* esi_8 = *(eax_29 + 0xc) + 0x10
            int32_t* eax_30 = sub_4f4380(esi_8)
            var_3c = esi_8
            sub_4f4430(eax_29, eax_30, var_3c)
            esi_9 = arg_8
    
    var_8_3.b = 4
    
    if (esi_9 != 0 && *esi_9 != 0)
        void* eax_33 = sub_4c4060(&arg_8)
        int32_t temp3_1 = *(eax_33 + 4)
        *(eax_33 + 4) -= 1
        
        if (temp3_1 == 1)
            char* esi_11 = *(eax_33 + 0xc) + 0x10
            int32_t* eax_34 = sub_4f4380(esi_11)
            var_3c = esi_11
            sub_4f4430(eax_33, eax_34, var_3c)
    
    var_8_3.b = 2
    char* eax_36 = var_1c
    
    if (eax_36 != 0 && *eax_36 != 0)
        void* eax_38 = sub_4c4060(&var_1c)
        int32_t temp4_1 = *(eax_38 + 4)
        *(eax_38 + 4) -= 1
        
        if (temp4_1 == 1)
            char* esi_13 = *(eax_38 + 0xc) + 0x10
            int32_t* eax_39 = sub_4f4380(esi_13)
            var_3c = esi_13
            sub_4f4430(eax_38, eax_39, var_3c)
    
    var_8_3.b = 1
    char* eax_41 = var_14
    
    if (eax_41 != 0 && *eax_41 != 0)
        void* eax_43 = sub_4c4060(&var_14)
        int32_t temp5_1 = *(eax_43 + 4)
        *(eax_43 + 4) -= 1
        
        if (temp5_1 == 1)
            char* esi_15 = *(eax_43 + 0xc) + 0x10
            int32_t* eax_44 = sub_4f4380(esi_15)
            var_3c = esi_15
            sub_4f4430(eax_43, eax_44, var_3c)
    
    var_8_3.b = 0
    char* eax_46 = var_20
    
    if (eax_46 != 0 && *eax_46 != 0)
        void* eax_48 = sub_4c4060(&var_20)
        int32_t temp6_1 = *(eax_48 + 4)
        *(eax_48 + 4) -= 1
        
        if (temp6_1 == 1)
            char* esi_17 = *(eax_48 + 0xc) + 0x10
            int32_t* eax_49 = sub_4f4380(esi_17)
            var_3c = esi_17
            sub_4f4430(eax_48, eax_49, var_3c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}
