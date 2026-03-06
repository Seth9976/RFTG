// 函数名称: sub_4810a0
// 虚拟地址: 0x4810a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4810a0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6907e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165234 & 1) == 0)
        data_3165234.d |= 1
        int32_t var_8_1 = 0
        data_3165230 = sub_4f5220(data_307c1c0, "BtnBack")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165234 & 2) == 0)
        data_3165234.d |= 2
        int32_t var_8_3 = 1
        data_316522c = sub_4f5220(data_307c1c0, "btnCopyFriendCode")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3165234 & 4) == 0)
        data_3165234.d |= 4
        int32_t var_8_5 = 2
        data_3165228 = sub_4f5220(data_307c1c0, "btnPrev")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3165234 & 8) == 0)
        data_3165234.d |= 8
        int32_t var_8_7 = 3
        data_3165224 = sub_4f5220(data_307c1c0, "btnNext")
    
    void* ecx_2 = data_27e7a68
    int32_t eax_9
    int32_t edx_5
    edx_5:eax_9 = muls.dp.d(0x2aaaaaab, *(data_27e7a40 + 0x3188e4) + 6)
    int32_t eax_12 = (edx_5 u>> 0x1f) + edx_5
    
    if (eax_12 s> 0xa)
        eax_12 = 0xa
    
    if (arg1 == data_3165230)
        if (data_30d7278 == 0)
            data_30d6f38 = data_307c620
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        data_30d6f38 = data_307c16c
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    int32_t edx_7
    
    if (arg1 == data_3165228)
        int32_t temp0_1 = *(ecx_2 + 0x40)
        *(ecx_2 + 0x40) -= 1
        edx_7 = *(ecx_2 + 0x40)
        
        if (temp0_1 - 1 s>= 0)
            goto label_481239
        
        *(ecx_2 + 0x40) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 != data_3165224)
        if (arg1 == data_316522c)
            data_27e7a54
            sub_4c6360()
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    int32_t temp1_1 = *(ecx_2 + 0x40)
    *(ecx_2 + 0x40) += 1
    edx_7 = *(ecx_2 + 0x40)
    
    if (temp1_1 + 1 s>= 0)
    label_481239:
        
        if (edx_7 s> eax_12)
            edx_7 = eax_12
    else
        edx_7 = 0
    
    *(ecx_2 + 0x40) = edx_7
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
