// 函数名称: sub_45fbf0
// 虚拟地址: 0x45fbf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_45fbf0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@_W@std@@IAEXABV_Locinfo@2@_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_b8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_a8
    void var_58
    int32_t ecx
    int32_t edx
    __builtin_memcpy(&var_58, sub_45fb20(&var_a8, edx, ecx, &var_a8), 0x40)
    
    if ((data_31657f4 & 1) == 0)
        data_31657f4.d |= 1
        int32_t var_8_1 = 0
        data_31657f0 = sub_4f5220(data_307c584, "img_opponentFrame")
        int32_t var_8_2 = 0xffffffff
    
    int32_t* eax_7 = sub_4f5350(data_31657f0, &var_58, data_307c584, &var_58)
    *arg1 = *eax_7
    arg1[1] = eax_7[1]
    int32_t eax_8 = eax_7[3]
    arg1[2] = eax_7[2]
    arg1[3] = eax_8
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return arg1
}
