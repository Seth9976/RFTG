// 函数名称: sub_4124b0
// 虚拟地址: 0x4124b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4124b0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f16e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_30785d8
    int32_t* ecx = *esi
    int32_t eax_3 = 0
    int32_t* i
    
    while (true)
        int32_t* i_2 = *ecx
        
        if (i_2 != 0)
            i = i_2
            break
        
        eax_3 += 1
        ecx = &ecx[1]
        
        if (eax_3 u> esi[1])
            i = nullptr
            break
    
    if ((data_3165174 & 1) == 0)
        data_3165174.d |= 1
        int32_t var_8_1 = 0
        data_3165170 = sub_509140(3, "sys/pbr/brdf_lut.texture")
        int32_t var_8_2 = 0xffffffff
    
    if (i == 0)
        void* eax_11 = data_27e7a70
        *(eax_11 + 0x60) = *(eax_11 + 0x5c)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_11
    
    do
        int32_t* i_1 = i[2]
        int32_t* edi_1 = data_30785d8
        int32_t* i_3 = i
        
        if (i_1 == 0)
            char* const eax_5 = *i
            
            if (eax_5 == 0)
                eax_5 = &data_83f3d3
            
            int32_t eax_6 = sub_519130(eax_5)
            int32_t edx_1 = edi_1[1]
            int32_t ecx_3 = (edx_1 & eax_6) + 1
            
            if (ecx_3 u<= edx_1)
                int32_t** eax_8 = *edi_1 + (ecx_3 << 2)
                
                do
                    i = *eax_8
                    
                    if (i != 0)
                        goto label_412578
                    
                    ecx_3 += 1
                    eax_8 = &eax_8[1]
                while (ecx_3 u<= edx_1)
            
            i = nullptr
        else
            i = i_1
        
    label_412578:
        int32_t eax_9 = i_3[1]
        var_14 = eax_9
        
        if (eax_9 != data_3165170 || *(data_27e7fd0 + 0x27) != 0)
            sub_518190(data_27e7a70 + 0x54, &var_14)
    while (i != 0)
    
    void* eax_10 = data_27e7a70
    *(eax_10 + 0x60) = *(eax_10 + 0x5c)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_10
}
