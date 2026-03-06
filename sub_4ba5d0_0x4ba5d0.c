// 函数名称: sub_4ba5d0
// 虚拟地址: 0x4ba5d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4ba5d0(char arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69048c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_2dc = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = arg1
    bool cond:0 = (data_31651ac & 1) != 0
    void* entry_ebx
    *(entry_ebx + 0x38) = eax_3.b
    
    if (not(cond:0))
        data_31651ac.d |= 1
        int32_t var_c_1 = 0
        data_31651a8 = sub_4f5220(data_307c744, "dlgSlideAnim")
        int32_t var_c_2 = 0xffffffff
    
    float edx = data_31651a8
    eax_3.b = arg1 == 0
    char var_2cc = eax_3.b
    struct _EXCEPTION_REGISTRATION_RECORD** var_2e0_2 = eax_3
    sub_4fa4e0(*(entry_ebx + 0x34), edx, edx.b)
    
    if ((data_31651ac & 2) == 0)
        data_31651ac.d |= 2
        int32_t var_c_3 = 1
        data_31651a4 = sub_4f5220(data_307c744, "bgFadeAnim")
        int32_t var_c_4 = 0xffffffff
    
    float edx_1 = data_31651a4
    int32_t var_2e0_4 = var_2cc.d
    int32_t result = sub_4fa4e0(*(entry_ebx + 0x34), edx_1, edx_1.b)
    
    if (arg1 == 1)
        void* ecx_3 = data_27e7a54
        *(data_27e7a5c + 0xf4240) = 0
        void var_170
        result = sub_4bc8c0(&var_170, *(ecx_3 + 0x208))
        void var_2c8
        __builtin_memcpy(&var_2c8, result, 0x158)
        __builtin_memcpy(entry_ebx + 0x3c, &var_2c8, 0x158)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
