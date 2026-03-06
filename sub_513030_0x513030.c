// 函数名称: sub_513030
// 虚拟地址: 0x513030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_513030(int128_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e410
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int128_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* entry_ebx
    int32_t eax_3 = entry_ebx[0x52]
    
    if (eax_3 s<= 0)
        sub_4c5870("emitResults.currentFunctionStackDepth > 0", &data_83f3d3, "MaterialFnDef.cpp", 
            0x36b, "EmitFnPostlude")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* const eax_6 = entry_ebx[entry_ebx[eax_3 + 0x41] * 2 + 1]
    
    if (eax_6 == 0)
        eax_6 = &data_83f3d3
    
    char* const var_24 = eax_6
    char** var_30 = sub_4c4a50(&var_14, "float4 %s(float2 arg_uv)\n{\n")
    int32_t var_8_1 = 0
    sub_512e60(entry_ebx)
    int32_t var_8_2 = 0xffffffff
    int128_t* eax_8 = var_14
    
    if (eax_8 != 0 && *eax_8 != 0)
        void* eax_10 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_10 + 0xc) + 0x10
            sub_4f4430(eax_10, sub_4f4380(esi_2), esi_2)
    
    int32_t eax_13
    int32_t edx
    eax_13, edx = sub_4c42b0(&var_14, "\treturn retval;\n}\n")
    int32_t var_8_3 = 1
    sub_512f40(eax_13, edx, entry_ebx, &var_14)
    int32_t var_8_4 = 0xffffffff
    int128_t* eax_14 = var_14
    
    if (eax_14 != 0 && *eax_14 != 0)
        void* eax_16 = sub_4c4060(&var_14)
        int32_t temp1_1 = *(eax_16 + 4)
        *(eax_16 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_5 = *(eax_16 + 0xc) + 0x10
            sub_4f4430(eax_16, sub_4f4380(esi_5), esi_5)
    
    int32_t eax_19 = entry_ebx[0x52]
    
    if (eax_19 s> 0)
        entry_ebx[0x52] = eax_19 - 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_19 - 1
    
    sub_4c5870("emitResults.currentFunctionStackDepth > 0", &data_83f3d3, "MaterialFnDef.cpp", 0x350, 
        "EmitFnEnd")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
