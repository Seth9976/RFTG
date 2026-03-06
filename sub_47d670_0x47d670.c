// 函数名称: sub_47d670
// 虚拟地址: 0x47d670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_47d670(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69971a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_4fc3d0(&data_be1cb8, arg1)
    bool cond:0 = (data_3166a24 & 1) != 0
    *(eax_3 + 0x2c) = sub_47c810
    
    if (not(cond:0))
        data_3166a24.d |= 1
        int32_t var_8_1 = 0
        data_3166a20 = sub_4f5220(data_307c76c, "BtnResume")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3166a24 & 2) == 0)
        data_3166a24.d |= 2
        int32_t var_8_3 = 1
        data_3166a1c = sub_4f5220(data_307c76c, "BtnPlayOnline")
        int32_t var_8_4 = 0xffffffff
    
    int32_t ebx
    ebx.b = data_27c060c == 0
    *(sub_4f6e90(data_3166a20, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3) + 0x21) = ebx.b
    sub_4075c0()
    void* eax_9 = data_27e7a40
    
    if (*(eax_9 + 0x20) != 2 || *(eax_9 + 0x24) != 8)
        ebx.b = 0
    else
        ebx.b = 1
    
    sub_407670()
    int128_t* eax_11 = sub_4f6e90(data_3166a1c, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int32_t* esi_4 = data_307c76c
    *(eax_11 + 0x23) = ebx.b == 0
    
    if ((data_3166a24 & 4) == 0)
        data_3166a24.d |= 4
        int32_t var_8_5 = 2
        data_3166a18 = sub_4f5220(esi_4, "AvatarImage")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3166a24 & 8) == 0)
        data_3166a24.d |= 8
        int32_t var_8_7 = 3
        data_3166a14 = sub_4f5220(esi_4, "PlayerName")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_3166a24 & 0x10) == 0)
        data_3166a24.d |= 0x10
        int32_t var_8_9 = 4
        data_3166a10 = sub_4f5220(esi_4, "PlayerNameNew")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_3166a24 & 0x20) == 0)
        data_3166a24.d |= 0x20
        int32_t var_8_11 = 5
        data_3166a0c = sub_4f5220(esi_4, "txt_serverStatus")
        int32_t var_8_12 = 0xffffffff
    
    if ((data_3166a24 & 0x40) == 0)
        data_3166a24.d |= 0x40
        int32_t var_8_13 = 6
        data_3166a08 = sub_4f5220(esi_4, "txt_messageOfTheDay")
        int32_t var_8_14 = 0xffffffff
    
    if ((data_3166a24 & 0x80) == 0)
        data_3166a24.d |= 0x80
        int32_t var_8_15 = 7
        data_3166a04 = sub_4f5220(esi_4, "img_lang")
        int32_t var_8_16 = 0xffffffff
    
    if ((data_3166a24.d & 0x100) == 0)
        data_3166a24.d |= 0x100
        int32_t var_8_17 = 8
        data_3166a00 = sub_4f5220(esi_4, "img_OnlineStatus")
        int32_t var_8_18 = 0xffffffff
    
    int32_t eax_20
    
    if (*(data_27e7a54 + 0x50) == 0)
        void* eax_21 = data_27e7a40
        
        if (eax_21 == 0)
            sub_4075c0()
            void* eax_22 = data_27e7a40
            int32_t edi_4 = *(eax_22 + 0x20)
            int32_t esi_5 = *(eax_22 + 0x24)
            sub_407670()
            
            if (esi_5 != 8 || edi_4 != 2)
                eax_20 = 2
            else
                eax_20 = 0
        else if (*(eax_21 + 0x24) != 8 || *(eax_21 + 0x20) != 2)
            eax_20 = 2
        else
            eax_20 = 0
    else
        eax_20 = 1
    
    int32_t ebx_1
    
    if (eax_20 == 0)
        ebx_1 = data_307c558
    else if (eax_20 == 1)
        ebx_1 = data_307c55c
    else
        if (eax_20 != 2)
            sub_4c5870("Halt", &data_83f3d3, "..\code\UsernameSetupDlg.cpp", 0x34f, 
                "OnlineStatusIndicator")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        ebx_1 = data_307c554
    
    int128_t* eax_28 = sub_4f6e90(data_3166a00, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    char* edi_7 = data_27e7a54
    *(eax_28 + 0x94) = *eax_28 + 1
    *(eax_28 + 0x98) = ebx_1
    int32_t eax_30 = sub_4ba260(*(edi_7 + 0x18))
    char* result_1
    sub_4c42b0(&result_1, edi_7)
    int32_t var_8_19 = 9
    char* const var_1c = &data_83f3d3
    char* const var_18 = &data_83f3d3
    var_8_19.b = 0xb
    sub_475ff0(&var_1c)
    char* const eax_31 = var_1c
    char* const var_14 = &data_83f3d3
    
    if (eax_31 != 0)
        var_14 = eax_31
    
    int128_t* eax_33 = sub_4f6e90(data_3166a0c, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_33 + 0x64) = *eax_33 + 1
    sub_4c4590(var_14)
    char* const eax_37 = var_18
    *(eax_33 + 0x151) = 1
    char* const var_14_1 = &data_83f3d3
    
    if (eax_37 != 0)
        var_14_1 = eax_37
    
    int128_t* eax_39 = sub_4f6e90(data_3166a08, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    char* const eax_40 = var_14_1
    *(eax_39 + 0x64) = *eax_39 + 1
    sub_4c4590(eax_40)
    int32_t edi_11 = data_3166a18
    *(eax_39 + 0x151) = 1
    int128_t* eax_42 = sub_4f6e90(edi_11, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_42 + 0x94) = *eax_42 + 1
    *(eax_42 + 0x98) = eax_30
    char* result_2 = result_1
    char* const result_3
    int128_t* esi_26
    
    if (result_2 == 0 || *result_2 == 0)
        var_14_1.b = 0xff
        var_14_1:1.w = 0xffff
        var_14_1:3.b = 0x4b
        int32_t* eax_44 = sub_4f6e90(data_3166a10, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t edi_15 = data_3166a10
        int32_t edx_4 = *eax_44 + 1
        eax_44[0x1c] = var_14_1
        eax_44[0x1b] = edx_4
        __builtin_strncpy(&var_14_1, "KKKK", 4)
        int32_t* eax_46 = sub_4f6e90(edi_15, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        int32_t edi_17 = data_3166a10
        int32_t edx_6 = *eax_46 + 1
        eax_46[0x1e] = var_14_1
        eax_46[0x1d] = edx_6
        int128_t* eax_48 = sub_4f6e90(edi_17, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        *(eax_48 + 0x64) = *eax_48 + 1
        sub_4c4590("New Profile")
        int32_t ebx_7 = data_3166a14
        *(eax_48 + 0x151) = 1
        esi_26 = sub_4f6e90(ebx_7, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        *(esi_26 + 0x64) = *esi_26 + 1
        result_3 = &data_83f3d3
    else
        int128_t* eax_54 = sub_4f6e90(data_3166a10, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        *(eax_54 + 0x64) = *eax_54 + 1
        sub_4c4590(&data_83f3d3)
        int32_t ebx_9 = data_3166a14
        *(eax_54 + 0x151) = 1
        esi_26 = sub_4f6e90(ebx_9, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        result_3 = result_1
        *(esi_26 + 0x64) = *esi_26 + 1
    
    sub_4c4590(result_3)
    void* eax_57 = data_27e7a50
    *(esi_26 + 0x151) = 1
    int32_t eax_59 = sub_476760(*(eax_57 + 0x18))
    int128_t* eax_61 = sub_4f6e90(data_3166a04, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_61 + 0x94) = *eax_61 + 1
    *(eax_61 + 0x98) = eax_59
    var_8_19.b = 0xa
    char* const eax_62 = var_18
    
    if (eax_62 != 0 && *eax_62 != 0)
        void* eax_64 = sub_4c4060(&var_18)
        int32_t temp3_1 = *(eax_64 + 4)
        *(eax_64 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_35 = *(eax_64 + 0xc) + 0x10
            sub_4f4430(eax_64, sub_4f4380(esi_35), esi_35)
    
    var_8_19.b = 9
    char* const eax_67 = var_1c
    
    if (eax_67 != 0 && *eax_67 != 0)
        void* eax_69 = sub_4c4060(&var_1c)
        int32_t temp4_1 = *(eax_69 + 4)
        *(eax_69 + 4) -= 1
        
        if (temp4_1 == 1)
            int32_t esi_37 = *(eax_69 + 0xc) + 0x10
            sub_4f4430(eax_69, sub_4f4380(esi_37), esi_37)
    
    int32_t var_8_20 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp5_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp5_1 == 1)
            int32_t esi_39 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_39), esi_39)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
