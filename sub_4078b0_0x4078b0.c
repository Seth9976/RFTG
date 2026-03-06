// 函数名称: sub_4078b0
// 虚拟地址: 0x4078b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __fastcallsub_4078b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6930be
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3
    char edx
    int80_t result
    result, eax_3, edx = sub_4f6f00(data_307c56c)
    *arg1 = eax_3
    arg1[1].b = 0
    float eax_5
    
    if ((data_3165900 & 1) != 0)
        eax_5 = data_31658fc
    else
        data_3165900.d |= 1
        int32_t var_8_1 = 0
        eax_5, edx = sub_4f5220(data_307c56c, "animBg")
        data_31658fc = eax_5
        int32_t var_8_2 = 0xffffffff
    
    int32_t esi_1 = *arg1
    int32_t var_28 = 1
    sub_4fa4e0(esi_1, eax_5, edx)
    int128_t* eax_8 = sub_4f6e90(eax_5, sub_4fc3d0(&data_be1cb8, esi_1), &data_83f3d3)
    long double x87_r6 = float.t(0)
    *(eax_8 + 0x14) = fconvert.s(x87_r6)
    eax_8[1].d = fconvert.s(x87_r6)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
