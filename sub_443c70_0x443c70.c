// 函数名称: sub_443c70
// 虚拟地址: 0x443c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_443c70()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_698c08
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    float eax_4
    float edx
    
    if ((data_3166810 & 1) != 0)
        eax_4 = data_316680c
    else
        data_3166810.d |= 1
        int32_t var_8_1 = 0
        eax_4, edx = sub_4f5220(data_307c108, "animBg")
        data_316680c = eax_4
        int32_t var_8_2 = 0xffffffff
    
    void* ecx = data_27e7a40
    int32_t entry_ebx
    
    if (*(ecx + 0x2c4960) != 0)
        void* ecx_1
        ecx_1.b = *(*(ecx + 0x548) + 0x43880) s> 0
        ecx_1.b = ecx_1.b == 0
        uint32_t edx_1 = zx.d(ecx_1.b)
        uint32_t var_30_1 = edx_1
        sub_4fa4e0(entry_ebx, eax_4, edx_1.b)
        int32_t eax_8 = *(*(data_27e7a40 + 0x548) + 0x43880)
        
        if (eax_8 s<= 0)
            eax_8 = data_315fc40
        else
            data_315fc40 = eax_8
        
        if (eax_8 s> 0)
            float var_18_1 = 1f
            float var_14_1 = 1f
            
            if (eax_8 s< 5)
                float var_20_1 = fconvert.s(float.t(data_315fc40) / fconvert.t(5.0))
                float var_18_2 = var_20_1
                long double x87_r6_1 = fconvert.t(0.0099999997764825821)
                var_14_1 = fconvert.s(float.t(1))
                var_18_1 = fconvert.s(fconvert.t(var_20_1) + x87_r6_1)
                
                if (eax_8 == 1)
                    var_18_1 = fconvert.s(x87_r6_1 + fconvert.t(var_18_1))
            
            if ((data_3166810 & 2) == 0)
                data_3166810.d |= 2
                int32_t var_8_3 = 1
                data_3166808 = sub_4f5220(data_307c108, "imgBGRect")
                int32_t var_8_4 = 0xffffffff
            
            if ((data_3166810 & 4) == 0)
                data_3166810.d |= 4
                int32_t var_8_5 = 2
                data_3166804 = sub_4f5220(data_307c108, "bg")
                int32_t var_8_6 = 0xffffffff
            
            if ((data_3166810 & 8) == 0)
                data_3166810.d |= 8
                int32_t var_8_7 = 3
                data_3166800 = sub_4f5220(data_307c108, "cards")
                int32_t var_8_8 = 0xffffffff
            
            int32_t* eax_14 =
                sub_4f6e90(data_3166808, sub_4fc3d0(&data_be1cb8, entry_ebx), &data_83f3d3)
            int32_t edi_3 = data_3166804
            eax_14[0x14] = *eax_14 + 1
            eax_14[0x16] = var_14_1
            eax_14[0x15] = var_18_1
            int32_t* eax_16 = sub_4f6e90(edi_3, sub_4fc3d0(&data_be1cb8, entry_ebx), &data_83f3d3)
            int32_t edi_5 = data_3166800
            eax_16[0x14] = *eax_16 + 1
            eax_16[0x15] = var_18_1
            eax_16[0x16] = var_14_1
            int128_t* eax_18 = sub_4f6e90(edi_5, sub_4fc3d0(&data_be1cb8, entry_ebx), &data_83f3d3)
            edx = data_3166800
            int32_t var_30_2 = 0
            *(eax_18 + 0x13c) = *eax_18 + 1
            eax_18[0x14].d = sub_443a00
            sub_4fa4e0(entry_ebx, edx, edx.b)
    else
        int32_t var_30 = 1
        sub_4fa4e0(entry_ebx, eax_4, edx.b)
    fsbase->NtTib.ExceptionList = ExceptionList
}
