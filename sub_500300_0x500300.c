// 函数名称: sub_500300
// 虚拟地址: 0x500300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_500300(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ca51
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    int32_t var_8_1 = 1
    arg1[1] = &data_83f3d3
    int32_t var_14_1 = 1
    *arg1 = arg2
    char* arg_8
    sub_4c4510(&arg_8)
    var_8_1.b = 0
    char* eax_4 = arg_8
    
    if (eax_4 != 0 && *eax_4 != 0)
        void* eax_6 = sub_4c4060(&arg_8)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_6 + 0xc) + 0x10
            sub_4f4430(eax_6, sub_4f4380(esi_2), esi_2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
