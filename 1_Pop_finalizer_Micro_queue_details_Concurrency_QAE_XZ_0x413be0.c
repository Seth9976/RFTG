// 函数名称: ??1_Pop_finalizer@_Micro_queue@details@Concurrency@@QAE@XZ
// 虚拟地址: 0x413be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t??1_Pop_finalizer@_Micro_queue@details@Concurrency@@QAE@XZ(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691412
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_307c550
    
    if ((data_31654c4 & 1) == 0)
        data_31654c4.d |= 1
        int32_t var_8_1 = 0
        data_31654c0 = sub_4f5220(esi, "btnBack")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31654c4 & 2) == 0)
        data_31654c4.d |= 2
        int32_t var_8_3 = 1
        data_31654bc = sub_4f5220(esi, "btnQuickplay")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_31654c4 & 4) == 0)
        data_31654c4.d |= 4
        int32_t var_8_5 = 2
        data_31654b8 = sub_4f5220(esi, "btnCustom")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_31654c4 & 8) == 0)
        data_31654c4.d |= 8
        int32_t var_8_7 = 3
        data_31654b4 = sub_4f5220(esi, "btnYourPrev")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_31654c4 & 0x10) == 0)
        data_31654c4.d |= 0x10
        int32_t var_8_9 = 4
        data_31654b0 = sub_4f5220(esi, "btnYourNext")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_31654c4 & 0x20) == 0)
        data_31654c4.d |= 0x20
        int32_t var_8_11 = 5
        data_31654ac = sub_4f5220(esi, "btnOpenPrev")
        int32_t var_8_12 = 0xffffffff
    
    if ((data_31654c4 & 0x40) == 0)
        data_31654c4.d |= 0x40
        int32_t var_8_13 = 6
        data_31654a8 = sub_4f5220(esi, "btnOpenNext")
    
    if (arg1 == data_31654c0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0x19
    
    if (arg1 == data_31654bc)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0x16
    
    if (arg1 == data_31654b8)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0x17
    
    if (arg1 == data_31654b4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0x1c
    
    if (arg1 == data_31654b0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0x1b
    
    if (arg1 == data_31654ac)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0x1e
    
    int32_t ecx_13
    ecx_13.b = arg1 != data_31654a8
    fsbase->NtTib.ExceptionList = ExceptionList
    return (ecx_13 - 1) & 0x1d
}
