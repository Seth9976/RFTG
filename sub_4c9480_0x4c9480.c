// 函数名称: sub_4c9480
// 虚拟地址: 0x4c9480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c9480(int32_t* arg1 @ edi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68cb9b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = 0
    int32_t i_1
    
    if (arg1[1] u<= 0)
    label_4c94c8:
        i_1 = 0
    else
        void* ecx_1 = *arg1
        
        while ((*(ecx_1 + 0x48) & 0xffff0000) == 0)
            result += 1
            ecx_1 += 0x4c
            
            if (result u>= arg1[1])
                goto label_4c94c8
        
        i_1 = *(ecx_1 + 0x48)
    
    int32_t i = i_1
    
    if (i_1 == 0)
        arg1[1] = 0
        arg1[3] = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    do
        int32_t edx_1 = *arg1
        int32_t ebx = i & 0xffff
        int32_t eax_3 = ebx + 1
        void* esi_3 = ebx * 0x4c + edx_1
        int32_t i_2
        
        if (eax_3 u>= arg1[1])
        label_4c9504:
            i_2 = 0
        else
            void* ecx_4 = eax_3 * 0x4c + edx_1
            
            while ((*(ecx_4 + 0x48) & 0xffff0000) == 0)
                eax_3 += 1
                ecx_4 += 0x4c
                
                if (eax_3 u>= arg1[1])
                    goto label_4c9504
            
            i_2 = *(ecx_4 + 0x48)
        
        int32_t i_3 = i_2
        i = i_2
        void* var_18_1 = esi_3
        int32_t var_8_1 = 0
        sub_5041e0(esi_3 + 0x3c)
        int32_t var_8_2 = 0xffffffff
        sub_5041e0(esi_3 + 0x30)
        int32_t eax_5 = arg1[3]
        arg1[3] = zx.d(*(esi_3 + 0x48))
        *(esi_3 + 0x48) = eax_5
        arg1[4] -= 1
    while (i != 0)
    
    arg1[1] = 0
    arg1[3] = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
