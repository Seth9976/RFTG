// 函数名称: sub_4bae20
// 虚拟地址: 0x4bae20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4bae20(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691b48
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_316564c & 1) == 0)
        data_316564c.d |= 1
        int32_t var_8_1 = 0
        data_3165648 = sub_4f5220(data_307c740, "btnNext")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_316564c & 2) == 0)
        data_316564c.d |= 2
        int32_t var_8_3 = 1
        data_3165644 = sub_4f5220(data_307c740, "btnPrev")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_316564c & 4) == 0)
        data_316564c.d |= 4
        int32_t var_8_5 = 2
        data_3165640 = sub_4f5220(data_307c740, "CloseBtn")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_316564c & 8) == 0)
        data_316564c.d |= 8
        int32_t var_8_7 = 3
        data_316563c = sub_4f5220(data_307c740, "BtnRecompute")
        int32_t var_8_8 = 0xffffffff
    
    if (arg1 == data_316563c)
        data_27e7aa4
        sub_4ba5d0(1)
    
    long double x87_r7 = float.t(0)
    char* esi_1 = data_27e7aa4
    
    if (arg1 == data_3165648)
        *(esi_1 + 0x30) = fconvert.s(x87_r7)
        *(esi_1 + 0x24) = 1
        *(esi_1 + 0x1c) += 1
        int32_t eax_9 = *(esi_1 + 0x1c)
        *(esi_1 + 0x20) = 0
        
        if (eax_9 s>= 5)
            *(esi_1 + 0x1c) = eax_9 - 1
    
    if (arg1 == data_3165644)
        *(esi_1 + 0x30) = fconvert.s(x87_r7)
        *(esi_1 + 0x24) = 1
        *(esi_1 + 0x1c) -= 1
        *(esi_1 + 0x20) = 0
        
        if (*(esi_1 + 0x1c) s<= 0)
            *(esi_1 + 0x1c) = 0
    
    if (arg1 != data_3165640)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    void* ecx_3 = data_27e7fd0
    *(esi_1 + 0x30) = fconvert.s(x87_r7)
    *(esi_1 + 0x24) = 1
    *(esi_1 + 0x20) = 0
    *esi_1 = 1
    
    if (*(ecx_3 + 0x27) != 0)
        data_30d6f38 = data_307c620
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    ecx_3.b = 0
    sub_4ba4f0(ecx_3, esi_1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
