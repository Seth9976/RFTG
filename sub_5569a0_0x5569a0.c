// 函数名称: sub_5569a0
// 虚拟地址: 0x5569a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5569a0(int32_t* arg1 @ edi, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ccb9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_14_1 = 0
    char* eax_3 = *arg1
    
    while (true)
        ecx.b = *eax_3
        
        if (ecx.b != 0xd && ecx.b != 0xa)
            ecx.b = *eax_3
            char* edx = eax_3
            
            if (ecx.b != 0xd)
                while (ecx.b != 0xa)
                    if (ecx.b == 0)
                        break
                    
                    ecx.b = eax_3[1]
                    eax_3 = &eax_3[1]
                    
                    if (ecx.b == 0xd)
                        break
            
            *arg1 = eax_3
            *arg2 = &data_83f3d3
            int32_t var_8_2 = 0
            int32_t var_14_2 = 1
            sub_4c4690(arg2, edx)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
        
        eax_3 = &eax_3[1]
}
