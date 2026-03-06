// 函数名称: sub_4d58f0
// 虚拟地址: 0x4d58f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __stdcallsub_4d58f0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68cb38
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    sub_4d5a00(&arg2[0xe])
    int32_t var_8_2 = 0xffffffff
    char* eax_4 = *arg2
    
    if (eax_4 != 0 && *eax_4 != 0)
        void* eax_6 = sub_4c4060(arg2)
        int32_t temp1_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_2 = *(eax_6 + 0xc) + 0x10
            sub_4f4430(eax_6, sub_4f4380(esi_2), esi_2)
    
    int32_t ecx_2 = *(arg1 + 0xc)
    *(arg1 + 0xc) = zx.d(arg2[0x1a].w)
    arg2[0x1a] = ecx_2
    *(arg1 + 0x10) -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
