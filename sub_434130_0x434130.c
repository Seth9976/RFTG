// 函数名称: sub_434130
// 虚拟地址: 0x434130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_434130(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_695d5a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_60 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_3092a04
    char* edx
    
    if ((data_316606c & 1) == 0)
        data_316606c.d |= 1
        int32_t var_8_1 = 0
        char const* const var_64_1 = "players"
        int32_t eax_4
        eax_4, edx = sub_510710(data_307ca3c, edx)
        data_3166068 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    if ((data_316606c & 2) == 0)
        data_316606c.d |= 2
        int32_t var_8_3 = 1
        char const* const var_64_2 = "uiTakeover"
        data_3166064 = sub_510710(data_307ca78, edx)
        int32_t var_8_4 = 0xffffffff
    
    int32_t eax_7 = sub_50eb00(data_3166068, 0)
    
    if ((data_316606c & 4) == 0)
        data_316606c.d |= 4
        int32_t var_8_5 = 2
        data_3166060 = sub_4f5220(data_307c760, "tbl_DefenseCard")
        int32_t var_8_6 = 0xffffffff
    
    void* eax_10 = sub_4f4890(data_307c104)
    float ecx_1 = *(eax_10 + 8)
    float edx_2 = *(eax_10 + 0xc)
    float var_24 = *(eax_10 + 0x10)
    float var_18 = fconvert.s(fconvert.t(*(eax_10 + 0x14)) - fconvert.t(edx_2))
    var_24 = fconvert.s(fconvert.t(var_24) - fconvert.t(ecx_1))
    int32_t eax_12 = data_3166060
    float var_20_1 = var_18
    float var_50[0x9]
    int32_t eax_13
    int80_t result
    result, eax_13 =
        sub_50fd20(eax_12, eax_7, 0, &var_50, data_3166064, eax_12, &data_84074c, &var_24, nullptr, 0)
    __builtin_memcpy(arg1, eax_13, 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
