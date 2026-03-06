// 函数名称: sub_504350
// 虚拟地址: 0x504350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_504350(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ca08
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    sub_5041e0(&arg1[1])
    int32_t var_8_2 = 0xffffffff
    int32_t eax_4 = *arg1
    int32_t* result
    
    if (eax_4 == 0)
        result = arg1
    else
        result = arg1
        
        if (*eax_4 != 0)
            void* eax_5 = sub_4c4060(result)
            int32_t temp1_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_2 = *(eax_5 + 0xc) + 0x10
                sub_4f4430(eax_5, sub_4f4380(esi_2), esi_2)
            
            result = arg1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
