// 函数名称: sub_431e10
// 虚拟地址: 0x431e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_431e10(float* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_692f7c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_9c
    int32_t eax_2 = __security_cookie ^ &var_9c
    int32_t __saved_edi
    int32_t var_ac = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31658cc & 1) == 0)
        data_31658cc.d |= 1
        int32_t var_c_1 = 0
        char const* const var_b0_1 = "players"
        char* edx
        data_31658c8 = sub_510710(data_307ca3c, edx)
        int32_t var_c_2 = 0xffffffff
    
    data_3092a04
    int32_t eax_7
    int32_t ecx_1
    char* edx_2
    eax_7, ecx_1, edx_2 = sub_50eb00(data_31658c8, arg2)
    
    if ((data_31658cc & 2) == 0)
        data_31658cc.d |= 2
        int32_t var_c_3 = 1
        char const* const var_b0_2 = "ui_hand"
        int32_t eax_9
        eax_9, ecx_1 = sub_510710(data_307ca78, edx_2)
        data_31658c4 = eax_9
        int32_t var_c_4 = 0xffffffff
    
    int32_t edi_1 = data_31658c4
    int32_t* eax_10 = sub_510b30(ecx_1, eax_7)
    int32_t eax_11
    int32_t edx_4
    eax_11, edx_4 = sub_50c140(*eax_10)
    void var_98
    float var_44
    __builtin_memcpy(&var_44, sub_50c2d0(&var_98, edx_4, edi_1 * 0xb8 + *eax_11, &var_98, eax_10), 0x28)
    float var_70
    float* eax_14 = sub_54cb80(&var_70, &var_44)
    *arg1 = fconvert.s(float.t(1))
    __builtin_memcpy(&var_44, eax_14, 0x28)
    int32_t var_38
    arg1[1] = var_38
    int32_t var_34
    arg1[2] = var_34
    int32_t var_30
    arg1[3] = var_30
    arg1[5] = var_44
    int32_t var_2c
    arg1[4] = var_2c
    int32_t var_40
    arg1[6] = var_40
    int32_t var_3c
    arg1[7] = var_3c
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_9c)
    return arg1
}
