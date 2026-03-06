// 函数名称: sub_4080b0
// 虚拟地址: 0x4080b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4080b0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d001
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    int32_t var_30 = arg2
    char* var_34 = *(data_27e7a54 + 0x208)
    int32_t var_30_1 = 0
    char* var_14
    var_34 = sub_4c4a50(&var_14, "gamelocal_%d_%d.bin")
    int32_t var_8_1 = 1
    var_34 = var_14
    char* ecx_3 = var_14
    int32_t* var_1c = &var_34
    
    if (ecx_3 != 0 && *ecx_3 != 0)
        void* eax_5 = sub_4c4060(&var_34)
        *(eax_5 + 4) += 1
    
    sub_500300(arg1, var_34)
    var_8_1.b = 0
    char* eax_6 = var_14
    int32_t var_18_1 = 1
    
    if (eax_6 != 0 && *eax_6 != 0)
        void* eax_8 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_8 + 0xc) + 0x10
            sub_4f4430(eax_8, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
