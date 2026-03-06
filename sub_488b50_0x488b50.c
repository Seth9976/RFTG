// 函数名称: sub_488b50
// 虚拟地址: 0x488b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_488b50(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69379a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* edx
    
    if ((data_31659a8 & 1) == 0)
        data_31659a8.d |= 1
        int32_t var_8_1 = 0
        char const* const var_24_1 = "players"
        int32_t eax_4
        eax_4, edx = sub_510710(data_307ca3c, edx)
        data_31659a4 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31659a8 & 2) == 0)
        data_31659a8.d |= 2
        int32_t var_8_3 = 1
        char const* const var_24_2 = "uiPhase"
        data_31659a0 = sub_510710(data_307ca78, edx)
        int32_t var_8_4 = 0xffffffff
    
    if ((data_31659a8 & 4) == 0)
        data_31659a8.d |= 4
        int32_t var_8_5 = 2
        data_3161148 = sub_4f5220(data_307ca70, "rgn_phases")
        int32_t var_8_6 = 0xffffffff
    
    data_3092a04
    sub_50eb00(data_31659a4, 0)
    int128_t* result = sub_510860(data_31659a0)
    void* ebx = *(arg1 + 0x24)
    
    if (*(ebx + 0xc) != 0)
        result = sub_4f6e90(data_3161148, sub_4fc3d0(&data_be1cb8, result), &data_83f3d3)
        
        if (*(ebx + 0xc) == result)
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
