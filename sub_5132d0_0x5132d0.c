// 函数名称: sub_5132d0
// 虚拟地址: 0x5132d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_5132d0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, char arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e9f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg4
    char* edx = *esi
    int32_t* edi = &arg3[edx * 0x12]
    char* const var_14 = &data_83f3d3
    int32_t var_8_1 = 0
    int32_t eax_4 = *edi
    
    if (eax_4 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "MaterialFnDef.cpp", 0x3a7, "EmitItemFunction")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char* result_1
    char* var_1c
    char* result_2
    char** ecx_2
    
    switch (eax_4)
        case 0
            var_8_1.b = 4
            char* var_24
            sub_4c4510(sub_512bb0(&var_24, edi, arg5))
            ecx_2 = &var_24
        case 1
            var_8_1.b = 3
            sub_4c4510(sub_512550(eax_4, edx, arg5, &var_1c, edi))
            ecx_2 = &var_1c
        case 2
            char* var_3c = edx
            sub_4c4a50(&result_2, "group%d")
            var_8_1.b = 1
            char* result_3 = result_2
            
            if (result_3 == 0)
                result_3 = &data_83f3d3
            
            int32_t* var_3c_1 = arg5
            int32_t var_40 = edi[2]
            var_8_1.b = 2
            sub_4c4510(sub_5136d0(&result_1, result_3, esi, arg3))
            var_8_1.b = 1
            sub_4c43d0(&result_1)
            *esi += edi[2]
            ecx_2 = &result_2
        case 3
            int32_t* var_3c_7 = arg5
            var_8_1.b = 5
            char* var_28
            sub_4c4510(sub_512840(arg5, edx, edx, &var_28, edi))
            ecx_2 = &var_28
    
    var_8_1.b = 0
    sub_4c43d0(ecx_2)
    char* result
    char* const ebx_1
    
    if (arg6 == 0)
        char** eax_19 = sub_5132a0(edi, &result_1)
        var_8_1.b = 7
        char** eax_21 = sub_5131b0(edi, &var_1c)
        var_8_1.b = 8
        char* ecx_7 = *eax_19
        
        if (ecx_7 == 0)
            ecx_7 = &data_83f3d3
        
        char* const edx_2 = var_14
        
        if (edx_2 == 0)
            edx_2 = &data_83f3d3
        
        char* eax_22 = *eax_21
        
        if (eax_22 == 0)
            eax_22 = &data_83f3d3
        
        char* var_3c_11 = ecx_7
        char* const var_40_4 = edx_2
        char* var_44_6 = eax_22
        char** var_50_2 = sub_4c4a50(&result_2, "\tretval = %s(retval, %s(uv), %s);\n")
        var_8_1.b = 9
        sub_512e60(arg5)
        var_8_1.b = 8
        char* result_4 = result_2
        
        if (result_4 != 0 && *result_4 != 0)
            void* eax_25 = sub_4c4060(&result_2)
            int32_t temp2_1 = *(eax_25 + 4)
            *(eax_25 + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_6 = *(eax_25 + 0xc) + 0x10
                sub_4f4430(eax_25, sub_4f4380(esi_6), esi_6)
        
        var_8_1.b = 7
        char* eax_28 = var_1c
        
        if (eax_28 != 0 && *eax_28 != 0)
            void* eax_30 = sub_4c4060(&var_1c)
            int32_t temp3_1 = *(eax_30 + 4)
            *(eax_30 + 4) -= 1
            
            if (temp3_1 == 1)
                int32_t esi_8 = *(eax_30 + 0xc) + 0x10
                sub_4f4430(eax_30, sub_4f4380(esi_8), esi_8)
        
        var_8_1.b = 0
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_4c4060(&result_1)
            int32_t temp4_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp4_1 == 1)
                int32_t esi_10 = *(result + 0xc) + 0x10
                result = sub_4f4430(result, sub_4f4380(esi_10), esi_10)
        
        ebx_1 = var_14
        esi = arg4
    else
        ebx_1 = var_14
        char* const eax_12 = &data_83f3d3
        
        if (ebx_1 != 0)
            eax_12 = ebx_1
        
        char* const var_3c_9 = eax_12
        char** var_48_2 = sub_4c4a50(&result_2, "\tvec4 retval = %s(uv);\n")
        var_8_1.b = 6
        sub_512e60(arg5)
        var_8_1.b = 0
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_4c4060(&result_2)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_2 = *(result + 0xc) + 0x10
                result = sub_4f4430(result, sub_4f4380(esi_2), esi_2)
                esi = arg4
    
    *esi += 1
    int32_t var_8_2 = 0xffffffff
    
    if (ebx_1 != 0 && *ebx_1 != 0)
        result = sub_4c4060(&var_14)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_12 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_12), esi_12)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
