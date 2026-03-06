// 函数名称: sub_4347b0
// 虚拟地址: 0x4347b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4347b0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69393c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_f0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_3092a04
    char* edx
    
    if ((data_31659fc & 1) == 0)
        data_31659fc.d |= 1
        int32_t var_8_1 = 0
        char const* const var_f4_1 = "players"
        int32_t eax_4
        eax_4, edx = sub_510710(data_307ca3c, edx)
        data_31659f8 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31659fc & 2) == 0)
        data_31659fc.d |= 2
        int32_t var_8_3 = 1
        char const* const var_f4_2 = "ui_zoom_card"
        data_31659f4 = sub_510710(data_307ca78, edx)
        int32_t var_8_4 = 0xffffffff
    
    float var_a0
    float var_58[0x8]
    int80_t result = sub_50d8d0(&var_58, sub_50eb00(data_31659f8, 0), &var_a0, data_31659f4, &var_58)
    float eax_10 = sub_510860(data_31659f4)
    int32_t eax_11 = sub_4f5220(data_307c110, "Card")
    void* eax_12 = sub_4f4890(data_307c104)
    float ecx_3 = *(eax_12 + 8)
    float edx_5 = *(eax_12 + 0xc)
    float var_20 = *(eax_12 + 0x10)
    float edx_6 = *(eax_12 + 0x14)
    var_20 = fconvert.s(fconvert.t(var_20) - fconvert.t(ecx_3))
    float* var_104 = &var_20
    float* var_108 = &var_a0
    float var_5c = fconvert.s(fconvert.t(edx_6) - fconvert.t(edx_5))
    float var_1c_1 = var_5c
    void var_e0
    __builtin_memcpy(&var_a0, sub_4fa9f0(eax_11, edx_6, var_5c, &var_e0, eax_10), 0x40)
    float var_28_1 = fconvert.s(fconvert.t(var_a0))
    float var_24_1 = fconvert.s(float.t(0))
    float var_9c
    var_20 = fconvert.s(fneg(fconvert.t(var_9c)))
    float var_94
    float var_80 = fconvert.s(fconvert.t(var_94))
    int32_t var_7c = 0
    int32_t var_74 = 0
    int32_t var_78 = 0
    int32_t var_70 = 0x3f800000
    float var_68 = var_24_1
    float var_6c = var_28_1
    float var_64 = var_20
    void var_38
    __builtin_memcpy(&var_38, &var_80, 0x20)
    sub_405f60(&var_80, &var_58)
    __builtin_memcpy(arg1, &var_80, 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
