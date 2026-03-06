// 函数名称: sub_43b010
// 虚拟地址: 0x43b010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_43b010()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691d1c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = *(data_27e7a40 + 0x548)
    int32_t* esi = data_307c530
    char edx
    
    if ((data_31656a4 & 1) == 0)
        data_31656a4.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_4
        eax_4, edx = sub_4f5220(esi, "btn_ok")
        data_31656a0 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31656a4 & 2) == 0)
        data_31656a4.d |= 2
        int32_t var_8_3 = 1
        int32_t eax_5
        eax_5, edx = sub_4f5220(esi, "animOk")
        data_316569c = eax_5
        int32_t var_8_4 = 0xffffffff
    
    int128_t* result = sub_43ae20(data_316569c, edx, *ebx, ebx, data_31656a0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
