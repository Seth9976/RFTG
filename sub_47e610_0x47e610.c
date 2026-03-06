// 函数名称: sub_47e610
// 虚拟地址: 0x47e610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47e610(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691c42
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3
    int32_t ecx
    eax_3, ecx = sub_4fc3d0(&data_be1cb8, arg1)
    int32_t* esi_1 = data_307c74c
    bool cond:0 = (data_3165680 & 1) != 0
    *(eax_3 + 0x2c) = sub_47e040
    
    if (not(cond:0))
        data_3165680.d |= 1
        int32_t var_8_1 = 0
        data_316567c = sub_4f5220(esi_1, "txtName")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165680 & 2) == 0)
        data_3165680.d |= 2
        int32_t var_8_3 = 1
        data_3165678 = sub_4f5220(esi_1, "txtDescription")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3165680 & 4) == 0)
        data_3165680.d |= 4
        int32_t var_8_5 = 2
        data_3165674 = sub_4f5220(esi_1, "txtPrice")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3165680 & 8) == 0)
        data_3165680.d |= 8
        int32_t var_8_7 = 3
        data_3165670 = sub_4f5220(esi_1, "txtReq")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_3165680 & 0x10) == 0)
        data_3165680.d |= 0x10
        int32_t var_8_9 = 4
        data_316566c = sub_4f5220(esi_1, "imgBox")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_3165680 & 0x20) == 0)
        data_3165680.d |= 0x20
        int32_t var_8_11 = 5
        data_3165668 = sub_4f5220(esi_1, "txtTitle")
        int32_t var_8_12 = 0xffffffff
    
    if ((data_3165680 & 0x40) == 0)
        data_3165680.d |= 0x40
        int32_t var_8_13 = 6
        data_3165664 = sub_4f5220(esi_1, "btnBuy")
        int32_t var_8_14 = 0xffffffff
    
    void* eax_11
    int32_t ecx_1
    eax_11, ecx_1 = sub_4b9560(ecx, data_307d9b8)
    char eax_12 = sub_4b95c0(ecx_1, data_307d9b8)
    int32_t edi = data_3165664
    int32_t eax_13
    int32_t ecx_2
    eax_13, ecx_2 = sub_4fc3d0(&data_be1cb8, arg1)
    ecx_2.b = eax_12
    *(sub_4f6e90(edi, eax_13, &data_83f3d3) + 0x21) = ecx_2.b
    char var_14_1
    char eax_15
    
    if (data_307d9b8 == 3)
        eax_15 = sub_4b95c0(ecx_2, 2)
        var_14_1 = 1
    
    if (data_307d9b8 != 3 || eax_15 != 0)
        var_14_1 = 0
    
    int32_t edi_2 = data_3165664
    int32_t eax_16
    int32_t ecx_3
    eax_16, ecx_3 = sub_4fc3d0(&data_be1cb8, arg1)
    *(sub_4f6e90(edi_2, eax_16, &data_83f3d3) + 0x23) = var_14_1
    char var_14_2
    char eax_18
    
    if (data_307d9b8 == 4)
        eax_18 = sub_4b95c0(ecx_3, 3)
        var_14_2 = 1
    
    if (data_307d9b8 != 4 || eax_18 != 0)
        var_14_2 = 0
    
    int128_t* eax_20 = sub_4f6e90(data_3165664, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int32_t edi_6 = data_3165668
    *(eax_20 + 0x23) = var_14_2
    char const* const eax_23
    int128_t* esi_10
    
    if (data_307d9b8 != 1)
        esi_10 = sub_4f6e90(edi_6, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        *(esi_10 + 0x64) = *esi_10 + 1
        eax_23 = "EXPANSION"
    else
        esi_10 = sub_4f6e90(edi_6, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        *(esi_10 + 0x64) = *esi_10 + 1
        eax_23 = "PROMO PACK"
    
    sub_4c4590(eax_23)
    *(esi_10 + 0x151) = 1
    int32_t eax_28 = data_307d9b8
    int32_t ebx_2
    
    if (eax_28 == 1)
        ebx_2 = data_307c05c
    label_47e950:
        int128_t* eax_35 = sub_4f6e90(data_316566c, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t ecx_6 = *eax_35 + 1
        *(eax_35 + 0x98) = ebx_2
        *(eax_35 + 0x94) = ecx_6
    else if (eax_28 == 2)
        int32_t ebx_3 = data_307c058
        int128_t* eax_33 = sub_4f6e90(data_316566c, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        *(eax_33 + 0x94) = *eax_33 + 1
        *(eax_33 + 0x98) = ebx_3
    else if (eax_28 == 3)
        ebx_2 = data_307c060
        goto label_47e950
    char* eax_36 = *(eax_11 + 0x1c)
    int128_t* eax_38 = sub_4f6e90(data_316567c, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_38 + 0x64) = *eax_38 + 1
    sub_4c4590(eax_36)
    int32_t ebx_6 = data_3165678
    *(eax_38 + 0x151) = 1
    char* eax_40 = *(eax_11 + 0x24)
    int128_t* eax_42 = sub_4f6e90(ebx_6, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_42 + 0x64) = *eax_42 + 1
    sub_4c4590(eax_40)
    int32_t ebx_8 = data_3165670
    *(eax_42 + 0x151) = 1
    int128_t* eax_45 = sub_4f6e90(ebx_8, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_45 + 0x64) = *eax_45 + 1
    sub_4c4590(&data_83f3d3)
    int32_t ebx_10 = data_3165674
    *(eax_45 + 0x151) = 1
    int32_t eax_46
    int32_t ecx_11
    eax_46, ecx_11 = sub_4fc3d0(&data_be1cb8, arg1)
    int128_t* eax_47 = sub_4f6e90(ebx_10, eax_46, &data_83f3d3)
    *(eax_47 + 0x64) = *eax_47 + 1
    sub_4c4590(&data_83f3d3)
    *(eax_47 + 0x151) = 1
    char result = sub_4b95c0(ecx_11, data_307d9b8)
    
    if (result == 0)
        void* ecx_12 = eax_11
        
        if (*ecx_12 == 3)
            char eax_50
            eax_50, ecx_12 = sub_4b95c0(ecx_12, 2)
            
            if (eax_50 == 0)
                int32_t ebx_12 = data_3165670
                int32_t eax_51
                eax_51, ecx_12 = sub_4fc3d0(&data_be1cb8, arg1)
                int128_t* eax_52 = sub_4f6e90(ebx_12, eax_51, &data_83f3d3)
                *(eax_52 + 0x64) = *eax_52 + 1
                sub_4c4590("Requires Gathering Storm")
                *(eax_52 + 0x151) = 1
        
        if (*eax_11 == 4)
            char eax_54
            int32_t ecx_13
            eax_54, ecx_13 = sub_4b95c0(ecx_12, 2)
            
            if (eax_54 != 0)
                char eax_57
                char* ecx_16
                eax_57, ecx_16 = sub_4b95c0(ecx_13, 3)
                
                if (eax_57 == 0)
                    int32_t edx_14 = data_3165670
                    int32_t var_34_1 = 1
                    char const* const var_38_8 = "Requires Rebel vs Imperium"
                    sub_4f9300(arg1, edx_14, ecx_16, edx_14.b)
            else
                int128_t* eax_56 =
                    sub_4f6e90(data_3165670, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
                *(eax_56 + 0x64) = *eax_56 + 1
                sub_4c4590("Requires Previous Expansions")
                *(eax_56 + 0x151) = 1
        
        char* ecx_17 = *(eax_11 + 0x20)
        int128_t* eax_61 = sub_4f6e90(data_3165674, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        *(eax_61 + 0x64) = *eax_61 + 1
        result = sub_4c4590(ecx_17)
        *(eax_61 + 0x151) = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
