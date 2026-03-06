// 函数名称: sub_422300
// 虚拟地址: 0x422300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_422300()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_698a48
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_2c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = *(data_27e7a40 + 0x548)
    void* ecx = data_27e7fd0
    esi[0xb029] = 5
    void* eax_3
    eax_3.b = *(ecx + 0x27)
    int32_t var_30_3
    
    if (eax_3.b == 0)
        if ((data_31667c0 & 8) == 0)
            data_31667c0.d |= 8
            int32_t var_c_7 = 3
            data_31667b0 = sub_4f5220(data_307c530, "rgn_phases")
            int32_t var_c_8 = 0xffffffff
        
        data_31667b0
        var_30_3 = *esi
    else
        if ((data_31667c0 & 1) == 0)
            data_31667c0.d |= 1
            int32_t var_c_1 = 0
            char const* const var_30_1 = "players"
            char* edx
            data_31667bc = sub_510710(data_307ca3c, edx)
            int32_t var_c_2 = 0xffffffff
        
        data_3092a04
        int32_t eax_6
        char* edx_2
        eax_6, edx_2 = sub_50eb00(data_31667bc, 0)
        
        if ((data_31667c0 & 2) == 0)
            data_31667c0.d |= 2
            int32_t var_c_3 = 1
            char const* const var_30_2 = "uiPhase"
            data_31667b8 = sub_510710(data_307ca78, edx_2)
            int32_t var_c_4 = 0xffffffff
        
        int32_t eax_10 = sub_510860(data_31667b8)
        sub_43d8c0(eax_10)
        
        if ((data_31667c0 & 4) == 0)
            data_31667c0.d |= 4
            int32_t var_c_5 = 2
            data_31667b4 = sub_4f5220(data_307ca70, "rgn_phases")
            int32_t var_c_6 = 0xffffffff
        
        data_31667b4
        var_30_3 = eax_10
    
    int32_t result = sub_4220c0(var_30_3)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
