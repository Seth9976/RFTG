// 函数名称: sub_519ed0
// 虚拟地址: 0x519ed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_519ed0(int16_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696fc8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_50 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_3c
    __builtin_memset(&var_3c, 0, 0x20)
    var_3c = 9
    int32_t esi = 0
    
    if ((0x8000 & GetKeyState(0x10)) != 0)
        esi = 1
    
    if ((0x8000 & GetKeyState(0x11)) != 0)
        esi |= 2
    
    if ((0x8000 & GetKeyState(0x12)) != 0)
        esi |= 4
    
    int32_t var_34 = esi
    int32_t var_30 = sx.d(arg1)
    float var_1c
    float* eax_7 = sub_51ae00(&var_1c, arg2, arg3)
    float var_2c = *eax_7
    void* edx_2 = data_27e7fcc
    int32_t var_28 = eax_7[1]
    
    if (edx_2 != 0)
        sub_4d7530(var_3c)
        int32_t var_38
        
        if (*(edx_2 + 0x42) == 0 || var_3c != 1 || (var_38 != 0x74 && var_38 != 0x79 && var_38 != 0x7a))
            sub_4d7830()
        else
            sub_4d7330(&var_3c)
    
    int32_t var_8_2 = 0xffffffff
    char* var_24
    char* eax_11 = var_24
    
    if (eax_11 != 0 && *eax_11 != 0)
        void* eax_13 = sub_4c4060(&var_24)
        int32_t temp0_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(eax_13 + 0xc) + 0x10
            sub_4f4430(eax_13, sub_4f4380(esi_3), esi_3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 1
}
