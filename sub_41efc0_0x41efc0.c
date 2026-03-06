// 函数名称: sub_41efc0
// 虚拟地址: 0x41efc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_41efc0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693b18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3
    eax_3.b = *(data_27e7fd0 + 0x27)
    
    if (eax_3.b == 0)
        int32_t* esi_2 = *(data_27e7a40 + 0x548)
        
        if ((data_3165a5c & 8) == 0)
            data_3165a5c.d |= 8
            int32_t var_8_6 = 3
            data_3165a4c = sub_4f5220(data_307c530, "rgn_phases")
        
        *arg1 = data_3165a4c
        fsbase->NtTib.ExceptionList = ExceptionList
        return *esi_2
    
    if ((data_3165a5c & 1) == 0)
        data_3165a5c.d |= 1
        int32_t var_8_1 = 0
        char const* const var_24_1 = "players"
        char* edx
        data_3165a58 = sub_510710(data_307ca3c, edx)
        int32_t var_8_2 = 0xffffffff
    
    data_3092a04
    int32_t eax_6
    char* edx_2
    eax_6, edx_2 = sub_50eb00(data_3165a58, 0)
    
    if ((data_3165a5c & 2) == 0)
        data_3165a5c.d |= 2
        int32_t var_8_3 = 1
        char const* const var_24_2 = "uiPhase"
        data_3165a54 = sub_510710(data_307ca78, edx_2)
        int32_t var_8_4 = 0xffffffff
    
    int32_t result = sub_510860(data_3165a54)
    
    if ((data_3165a5c & 4) == 0)
        data_3165a5c.d |= 4
        int32_t var_8_5 = 2
        data_3165a50 = sub_4f5220(data_307ca70, "rgn_phases")
    
    *arg1 = data_3165a50
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
