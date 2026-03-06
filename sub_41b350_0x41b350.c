// 函数名称: sub_41b350
// 虚拟地址: 0x41b350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_41b350(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69238a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* ecx
    int32_t* var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165760 & 1) == 0)
        data_3165760.d |= 1
        int32_t var_8_1 = 0
        data_316575c = sub_4f5220(data_307c500, "CloseBtn")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165760 & 2) == 0)
        data_3165760.d |= 2
        int32_t var_8_3 = 1
        ecx = data_307c500
        data_3165758 = sub_4f5220(ecx, "btnPrev")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3165760 & 4) == 0)
        data_3165760.d |= 4
        int32_t var_8_5 = 2
        data_3165754 = sub_4f5220(data_307c500, "btnNext")
        int32_t var_8_6 = 0xffffffff
    
    if (arg1 == data_316575c)
        if (*(data_27e7fd0 + 0x27) == 0)
            sub_463040(ecx, 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 1
        
        data_30d6f38 = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    int32_t eax_13
    int32_t ecx_6
    
    if (arg1 == data_3165758)
        void* ecx_5 = data_27e7a40
        void* eax_11 = *(ecx_5 + 0x548)
        *(eax_11 + 0x43350) -= 1
        void* esi_1 = *(ecx_5 + 0x548)
        ecx_6 = sx.d(*(sub_418a10() + 0x1ec2))
        eax_13 = *(esi_1 + 0x43350)
        
        if (eax_13 s>= 0)
        label_41b4d3:
            
            if (eax_13 s<= ecx_6)
                *(*(data_27e7a40 + 0x548) + 0x43350) = eax_13
            else
                *(*(data_27e7a40 + 0x548) + 0x43350) = ecx_6
        else
            *(*(data_27e7a40 + 0x548) + 0x43350) = 0
    else if (arg1 == data_3165754)
        void* ecx_7 = data_27e7a40
        void* eax_14 = *(ecx_7 + 0x548)
        *(eax_14 + 0x43350) += 1
        void* esi_2 = *(ecx_7 + 0x548)
        ecx_6 = sx.d(*(sub_418a10() + 0x1ec2))
        eax_13 = *(esi_2 + 0x43350)
        
        if (eax_13 s>= 1)
            goto label_41b4d3
        
        *(*(data_27e7a40 + 0x548) + 0x43350) = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
