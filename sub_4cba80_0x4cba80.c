// 函数名称: sub_4cba80
// 虚拟地址: 0x4cba80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4cba80(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fc18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi = arg3
    int32_t edx = edi[2]
    char* esi = *edi
    
    if (esi[edx] == 0x7b)
        for (int32_t i = edx + 1; i s< edi[1]; i += 1)
            arg3.b = esi[i]
            
            if (arg3.b == 0x7d)
                *arg4 = i - edx + 1
                char* const var_14 = &data_83f3d3
                int32_t var_8_1 = 0
                sub_4c4690(&var_14, &esi[edx + 1])
                int32_t* result = sub_4cba10(edi)
                int32_t var_8_2 = 0xffffffff
                char* const eax_6 = var_14
                
                if (eax_6 != 0 && *eax_6 != 0)
                    void* eax_8 = sub_4c4060(&var_14)
                    int32_t temp0_1 = *(eax_8 + 4)
                    *(eax_8 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        int32_t esi_3 = *(eax_8 + 0xc) + 0x10
                        sub_4f4430(eax_8, sub_4f4380(esi_3), esi_3)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            if (arg3.b == 0xd)
                break
            
            if (arg3.b == 0x7b)
                break
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
