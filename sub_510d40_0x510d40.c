// 函数名称: sub_510d40
// 虚拟地址: 0x510d40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __fastcallsub_510d40(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f668
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_14 = nullptr
    int32_t eax_3 = *(arg1 + 0x20)
    char** entry_result
    
    if (eax_3 != 0)
        if (eax_3 == 3)
            sub_4c42b0(entry_result, "Overlay")
            fsbase->NtTib.ExceptionList = ExceptionList
            return entry_result
        
        if (eax_3 == 4)
            sub_4c42b0(entry_result, "Mask")
            fsbase->NtTib.ExceptionList = ExceptionList
            return entry_result
        
        sub_4c5870("Halt", &data_83f3d3, "MaterialFnDef.cpp", 0xaa, "MaterialFnItem_Blend")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    long double x87_r7 = fconvert.t(*(arg1 + 0x24))
    long double x87_r6 = float.t(1)
    x87_r6 - x87_r7
    int32_t eax_4
    eax_4.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p))
        int32_t edx
        sub_4c4330(&data_83f3d3, edx, entry_result)
        fsbase->NtTib.ExceptionList = ExceptionList
        return entry_result
    
    void* var_28 = arg1
    int32_t var_8_1 = 0
    char* eax_12 = *sub_510cf0(&var_14, fconvert.s(fconvert.t(*(arg1 + 0x24))))
    
    if (eax_12 == 0)
        eax_12 = &data_83f3d3
    
    char* var_28_2 = eax_12
    sub_4c4a50(entry_result, "Opacity: %s")
    int32_t var_8_2 = 0xffffffff
    sub_4c43d0(&var_14)
    fsbase->NtTib.ExceptionList = ExceptionList
    return entry_result
}
