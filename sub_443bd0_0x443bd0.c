// 函数名称: sub_443bd0
// 虚拟地址: 0x443bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_443bd0(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690a7e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    float eax_4
    bool edx
    
    if ((data_31652a8 & 1) != 0)
        eax_4 = data_31652a4
    else
        data_31652a8.d |= 1
        int32_t var_8_1 = 0
        eax_4, edx = sub_4f5220(data_307c108, "animBg")
        data_31652a4 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    void* ecx = data_27e7a40
    
    if (*(ecx + 0x2c4960) != 0)
        edx = *(*(ecx + 0x548) + 0x43880) s<= 0
        uint32_t var_18_1 = zx.d(edx)
    else
        int32_t var_18 = 1
    
    int32_t result = sub_4fa4e0(arg1, eax_4, edx)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
