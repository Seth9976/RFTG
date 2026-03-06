// 函数名称: sub_4d0640
// 虚拟地址: 0x4d0640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __stdcallsub_4d0640(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68cb71
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = data_26a44e4
    
    if (edi == 0)
        sub_4f4250()
        edi = data_26a44e4
    
    int32_t edx = 0
    int32_t* edi_2
    
    while (true)
        if (1 << (edx.b + 4) s>= 0x30)
            edi_2 = edi + edx * 0x14
            break
        
        edx += 1
        
        if (edx s>= 7)
            edi_2 = edi + 0x8c
            break
    
    edi_2[3] += 1
    
    if (*edi_2 == 0)
        sub_4f4170(edi_2)
    
    int32_t* esi_2 = *edi_2
    *edi_2 = *esi_2
    sub_5abfc0(esi_2, 0, 0x30)
    int32_t* var_14 = esi_2
    int32_t* var_18 = esi_2
    int32_t var_8_1 = 0
    
    if (esi_2 != 0)
        sub_4d0720(esi_2, arg1)
    
    esi_2[0xa] = 0
    int32_t** entry_ebx
    esi_2[0xb] = entry_ebx[1]
    void* result = entry_ebx[1]
    
    if (result == 0)
        *entry_ebx = esi_2
    else
        *(result + 0x28) = esi_2
    
    entry_ebx[2] += 1
    entry_ebx[1] = esi_2
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
