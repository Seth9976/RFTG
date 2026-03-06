// 函数名称: sub_41f430
// 虚拟地址: 0x41f430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_41f430(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_695482
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_3c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165ea8 & 1) == 0)
        data_3165ea8.d |= 1
        int32_t var_c_1 = 0
        data_3165ea4 = sub_4f5220(data_307c5a4, "animButtonNudge")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165ea8 & 2) == 0)
        data_3165ea8.d |= 2
        int32_t var_c_3 = 1
        data_3165ea0 = sub_4f5220(data_307c5a4, "animButtonFade")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165ea8 & 4) == 0)
        data_3165ea8.d |= 4
        int32_t var_c_5 = 2
        data_3165e9c = sub_4f5220(data_307c5a4, "animIconNudge")
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3165ea8 & 8) == 0)
        data_3165ea8.d |= 8
        int32_t var_c_7 = 3
        data_3165e98 = sub_4f5220(data_307c5a4, "animPrestige")
        int32_t var_c_8 = 0xffffffff
    
    if ((data_3165ea8 & 0x10) == 0)
        data_3165ea8.d |= 0x10
        int32_t var_c_9 = 4
        data_3165e94 = sub_4f5220(data_307c5a4, "img_PrestigeOn")
        int32_t var_c_10 = 0xffffffff
    
    if ((data_3165ea8 & 0x20) == 0)
        data_3165ea8.d |= 0x20
        int32_t var_c_11 = 5
        data_3165e90 = sub_4f5220(data_307c5a4, "btn_PrestigeOff")
        int32_t var_c_12 = 0xffffffff
    
    int128_t* var_24
    int32_t eax_11 = sub_41efc0(&var_24)
    int32_t var_20 = 0
    int32_t var_1c = arg1
    void* eax_12 = sub_4fc3d0(&data_be1cb8, eax_11)
    int128_t* ebx = var_24
    int128_t* eax_13 = sub_4f6e90(ebx, eax_12, &data_83f3d3)
    int32_t* esi_2 = *(eax_12 + 4)
    var_24 = eax_13
    int32_t ebx_3 = *(sub_4f7720(&var_20, ebx * 0x118 + *sub_4f4890(esi_2), var_24) + 0x434)
    int32_t var_40_1 = arg2
    sub_4fa4e0(ebx_3, data_3165ea0, arg2.b)
    float edx_5 = data_3165ea4
    int32_t var_48 = arg2
    char edx_6 = sub_4fa4e0(ebx_3, edx_5, edx_5.b)
    int32_t var_50 = arg2
    sub_4fa4e0(ebx_3, data_3165e9c, edx_6)
    void* eax_23 = sub_41f350(arg1)
    float var_44_9
    float edx_9
    
    if ((sub_41f170(*(data_27e7a40 + 0x74)) == 0 || arg1 == 0
            || (eax_23 != 0 && *(eax_23 + 5) != 0 && *(eax_23 + 4) != 1))
            && (eax_23 == 0 || *(eax_23 + 5) != 1 || *(eax_23 + 4) != 1))
        edx_9 = data_3165e98
        int32_t var_40_5 = 1
        var_44_9 = edx_9
    else
        float edx_8 = data_3165e98
        uint32_t var_40_2 = zx.d(arg2.b == 0)
        sub_4fa4e0(ebx_3, edx_8, edx_8.b)
        char eax_28
        eax_28, edx_9 = sub_41f270(arg1)
        
        if (eax_28 == 0)
            int32_t var_40_4 = 1
            var_44_9 = data_3165e94
        else
            int32_t var_40_3 = 0
            var_44_9 = data_3165e94
    
    sub_4fa4e0(ebx_3, var_44_9, edx_9.b)
    
    if ((data_3165ea8 & 0x40) == 0)
        data_3165ea8.d |= 0x40
        int32_t var_c_13 = 6
        data_3165e8c = sub_4f5220(data_307c5a4, "btn_phaseButtonSelected")
        int32_t var_c_14 = 0xffffffff
    
    if ((data_3165ea8 & 0x80) == 0)
        data_3165ea8.d |= 0x80
        int32_t var_c_15 = 7
        data_3165e88 = sub_4f5220(data_307c5a4, "btn_phaseButton")
        int32_t var_c_16 = 0xffffffff
    
    char var_25_1
    
    if (eax_23 != 0)
        var_25_1 = 1
    
    if (eax_23 == 0 || *(eax_23 + 5) == 0)
        var_25_1 = 0
    
    if (arg1 u> 9)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb46, "PhaseButtonToRole")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (arg1)
        case 0
            void* eax_35 = sub_46b2b0(*(data_27e7a40 + 0x74))
            
            if (*(eax_35 + 0x1f54) s> 0 && *(eax_35 + 0x1f49) != 0 && *(eax_35 + 0x1f48) != 0)
                var_25_1 = 1
                *(sub_4f6e90(data_3165e88, sub_4fc3d0(&data_be1cb8, ebx_3), &data_83f3d3) + 0x21) = 1
    
    int128_t* eax_39 = sub_4f6e90(data_3165e8c, sub_4fc3d0(&data_be1cb8, ebx_3), &data_83f3d3)
    int32_t edi_6 = data_3165e88
    *(eax_39 + 0x23) = var_25_1
    int128_t* eax_41 = sub_4f6e90(edi_6, sub_4fc3d0(&data_be1cb8, ebx_3), &data_83f3d3)
    int32_t edi_8 = data_3165e94
    *(eax_41 + 0x23) = var_25_1
    int128_t* eax_43 = sub_4f6e90(edi_8, sub_4fc3d0(&data_be1cb8, ebx_3), &data_83f3d3)
    int32_t edi_10 = data_3165e90
    *(eax_43 + 0x23) = var_25_1
    int128_t* eax_45 = sub_4f6e90(edi_10, sub_4fc3d0(&data_be1cb8, ebx_3), &data_83f3d3)
    int32_t edi_12 = data_3165e8c
    *(eax_45 + 0x23) = var_25_1
    int128_t* eax_47 = sub_4f6e90(edi_12, sub_4fc3d0(&data_be1cb8, ebx_3), &data_83f3d3)
    int32_t edi_14 = data_3165e88
    *(eax_47 + 0x22) = 0
    int128_t* result = sub_4f6e90(edi_14, sub_4fc3d0(&data_be1cb8, ebx_3), &data_83f3d3)
    *(result + 0x22) = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
