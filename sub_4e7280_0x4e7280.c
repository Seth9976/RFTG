// 函数名称: sub_4e7280
// 虚拟地址: 0x4e7280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_4e7280(char** arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d0d1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    int32_t* eax_4 = sub_5a898b(arg2, "rb")
    
    if (eax_4 == 0)
        *arg1 = &data_83f3d3
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    sub_5a9831(eax_4, nullptr, FILE_END)
    void* eax_6 = sub_5a9a41(eax_4)
    sub_5a9831(eax_4, nullptr, FILE_BEGIN)
    char* eax_8 = sub_4cce80(eax_6 + 1)
    uint32_t var_14 = sub_5a9cf0(eax_8, 1, eax_6, eax_4)
    sub_5a8c61(eax_4)
    
    if (var_14 != eax_6)
        if (eax_8 != 0)
            _aligned_free_base(eax_8)
        
        *arg1 = &data_83f3d3
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    *(eax_8 + eax_6) = 0
    
    if (eax_8 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4c42b0(&var_14, eax_8)
    int32_t var_8_1 = 1
    _aligned_free_base(eax_8)
    uint32_t esi_2 = var_14
    uint32_t* eax_12 = arg1
    *eax_12 = esi_2
    
    if (esi_2 != 0 && *esi_2 != 0)
        void* eax_13 = sub_4c4060(eax_12)
        *(eax_13 + 4) += 1
    
    int32_t var_18_1 = 1
    var_8_1.b = 0
    
    if (esi_2 != 0 && *esi_2 != 0)
        void* eax_15 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_4 = *(eax_15 + 0xc) + 0x10
            sub_4f4430(eax_15, sub_4f4380(esi_4), esi_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
