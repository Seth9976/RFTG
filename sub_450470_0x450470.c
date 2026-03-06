// 函数名称: sub_450470
// 虚拟地址: 0x450470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_450470(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690a4e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31652a0 & 1) == 0)
        data_31652a0.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_4 = sub_4f5220(data_307c110, "tblExplore")
        int32_t* ecx_1 = data_307c110
        data_315fcf8 = eax_4
        int32_t eax_5 = sub_4f5220(ecx_1, "tblDevelop")
        int32_t* edx_1 = data_307c110
        data_315fcfc = eax_5
        data_315fd00 = sub_4f5220(edx_1, "tblSettle")
        int32_t eax_8 = sub_4f5220(data_307c110, "tblTrade")
        int32_t* ecx_2 = data_307c110
        data_315fd04 = eax_8
        int32_t eax_9 = sub_4f5220(ecx_2, "tblConsume")
        int32_t* edx_2 = data_307c110
        data_315fd08 = eax_9
        data_315fd0c = sub_4f5220(edx_2, "tblProduce")
        int32_t eax_12 = sub_4f5220(data_307c110, "tblSettle2")
        int32_t* ecx_3 = data_307c110
        data_315fd10 = eax_12
        int32_t eax_13 = sub_4f5220(ecx_3, "tblSettle2Down")
        int32_t* edx_3 = data_307c110
        data_315fd14 = eax_13
        data_315fd18 = sub_4f5220(edx_3, "tblConsume2")
        data_315fd1c = sub_4f5220(data_307c110, "tblProduce2")
    
    if (arg1 s>= 4)
        if (arg1 s<= 5)
            fsbase->NtTib.ExceptionList = ExceptionList
            return (&data_315fcf8)[arg1]
        
        if (arg1 == 7)
            fsbase->NtTib.ExceptionList = ExceptionList
            return data_315fd04
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return (&data_315fcf4)[arg1]
}
