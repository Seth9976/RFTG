// 函数名称: sub_5637b0
// 虚拟地址: 0x5637b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_5637b0(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4 @ edi, int32_t arg5, int32_t arg6, int32_t* arg7, int32_t* arg8, char arg9)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e7c0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t ebx
    int32_t var_34 = ebx
    int32_t esi
    int32_t var_38 = esi
    int32_t var_40[0x2]
    var_40[1] = arg4
    var_40[0] = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const edx = __alloca_probe_16((arg3[2] << 3) + 0x18)
    var_40[0] = "HAVE_DX11"
    var_40[1] = &data_88c40c
    char const* const var_38_1 = "HAVE_RIFT"
    void* const var_34_1 = &data_88c40c
    int32_t* i = *arg3
    int32_t ecx = 2
    
    while (i != 0)
        int32_t* i_1 = i
        char* const edi_1 = *i_1
        i = i[2]
        
        if (edi_1 == 0)
            edi_1 = &data_83f3d3
        
        (&var_40)[ecx][0] = edi_1
        edx = i_1[1]
        
        if (edx == 0)
            edx = &data_83f3d3
        
        var_3c
        *(&var_3c + (ecx << 3)) = edx
        ecx += 1
    
    __builtin_memset(&(&var_40)[ecx], 0, 8)
    char** var_44
    char const* const edi_2
    
    if (arg6 != 1)
        if (arg6 != 0)
            var_44 = "Dx11CompileShader"
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x9d9, var_44)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        edi_2 = "vs_4_0"
    else
        edi_2 = "ps_4_0"
    
    void** const var_2c = &data_894264
    int32_t* var_28
    int32_t* var_24
    char* var_1c_2
    int32_t ebx_2
    
    if (arg9 == 0)
        char* eax_22 = arg2
        var_1c_2 = "memory_shader"
        
        do
            ecx.b = *eax_22
            eax_22 = &eax_22[1]
        while (ecx.b != 0)
        
        var_44 = nullptr
        ebx_2 = D3DX11CompileFromMemory(arg2, eax_22 - &eax_22[1], "memory_shader", &var_40, &var_2c, 
            arg5, edi_2, 0x1000, 0, 0, &var_24, &var_28, var_44)
    else
        char* var_18
        var_44 = &var_18
        sub_51ee80(&var_18, edx, arg2, var_44)
        int32_t var_8_1 = 0
        var_44 = var_18
        char* ecx_3 = var_18
        char*** var_1c = &var_44
        
        if (ecx_3 != 0 && *ecx_3 != 0)
            void* eax_8 = sub_4c4060(&var_44)
            *(eax_8 + 4) += 1
        
        char** var_20
        sub_51fd90(&var_20)
        var_8_1.b = 1
        var_44 = var_20
        char* ecx_5 = var_20
        char*** var_1c_1 = &var_44
        
        if (ecx_5 != 0 && *ecx_5 != 0)
            void* eax_10 = sub_4c4060(&var_44)
            *(eax_10 + 4) += 1
        
        sub_51c9c0()
        var_44 = nullptr
        var_1c_2 = arg2
        int32_t eax_11
        char** ecx_7
        eax_11, ecx_7 = D3DX11CompileFromFileA(arg2, &var_40, &var_2c, arg5, edi_2, 0x1000, 0, 0, 
            &var_24, &var_28, var_44)
        var_44 = ecx_7
        ebx_2 = eax_11
        char*** var_30_1 = &var_44
        sub_4c42b0(&var_44, &data_83f3d3)
        sub_51c9c0()
        var_8_1.b = 0
        char** eax_12 = var_20
        
        if (eax_12 != 0 && *eax_12 != 0)
            void* eax_14 = sub_4c4060(&var_20)
            int32_t temp0_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp0_1 == 1)
                char** esi_3 = *(eax_14 + 0xc) + 0x10
                int32_t* eax_15 = sub_4f4380(esi_3)
                var_44 = esi_3
                sub_4f4430(eax_14, eax_15, var_44)
        
        int32_t var_8_2 = 0xffffffff
        char* eax_17 = var_18
        
        if (eax_17 != 0 && *eax_17 != 0)
            int32_t* edi_5 = sub_4c4060(&var_18)
            int32_t temp1_1 = edi_5[1]
            edi_5[1] -= 1
            
            if (temp1_1 == 1)
                char** esi_5 = edi_5[3] + 0x10
                int32_t* eax_20 = sub_4f4380(esi_5)
                var_44 = esi_5
                sub_4f4430(edi_5, eax_20, var_44)
    
    int32_t* eax_25 = var_28
    int128_t* result
    
    if (ebx_2 s>= 0)
        if (eax_25 != 0)
            int32_t edx_3 = *(*eax_25 + 8)
            var_44 = eax_25
            edx_3(var_44)
        
        int32_t* eax_28 = var_24
        int32_t edx_4 = *(*eax_28 + 0xc)
        var_44 = eax_28
        int128_t* eax_29 = edx_4(var_44)
        int32_t* eax_30 = var_24
        int32_t edx_5 = *(*eax_30 + 0x10)
        var_44 = eax_30
        char** eax_31 = edx_5(var_44)
        *arg8 = eax_31
        int128_t* eax_34 = sub_4cce80(eax_31)
        var_44 = eax_31
        *arg7 = eax_34
        sub_5ab990(eax_34, eax_29, var_44)
        result.b = 1
    else
        int32_t edx_2 = *(*eax_25 + 0xc)
        var_44 = eax_25
        var_44 = edx_2(var_44)
        char* var_48_3 = var_1c_2
        sub_4c5680("Dx11 compile error on %s:\n%s\n")
        result.b = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    var_40[1]
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
