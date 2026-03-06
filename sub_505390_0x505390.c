// 函数名称: sub_505390
// 虚拟地址: 0x505390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_505390(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edx_1 = *(arg3 + arg4[4])
    int32_t ecx = *(arg3 + *arg4)
    
    if (arg2 s< 0 || arg2 s>= edx_1)
        sub_4c5870("currentPosition >= 0 && currentPosition < count", &data_83f3d3, "DefEditor.cpp", 
            0xb0, "DefinitionVariableArrayMoveItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg5 s< 0 || arg5 s>= edx_1)
        sub_4c5870("newPosition >= 0 && newPosition < count", &data_83f3d3, "DefEditor.cpp", 0xb1, 
            "DefinitionVariableArrayMoveItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg5 == arg2)
        sub_4c5870("newPosition != currentPosition", &data_83f3d3, "DefEditor.cpp", 0xb2, 
            "DefinitionVariableArrayMoveItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_5 = sub_4fe2c0(arg4[6])
    void* esi_3 = eax_5 * arg2 + ecx
    int128_t* edi_3 = eax_5 * arg5 + ecx
    __alloca_probe_16(eax_5)
    int32_t __saved_edi
    sub_5ab990(&__saved_edi, esi_3, eax_5)
    void* var_28_1
    int128_t* var_24_1
    void* var_20_1
    
    if (esi_3 u<= edi_3)
        var_20_1 = edi_3 - esi_3
        var_24_1 = esi_3 + eax_5
        var_28_1 = esi_3
    else
        var_20_1 = esi_3 - edi_3
        var_24_1 = edi_3
        var_28_1 = edi_3 + eax_5
    
    sub_5ab990(var_28_1, var_24_1, var_20_1)
    int128_t* result = sub_5ab990(edi_3, &__saved_edi, eax_5)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
