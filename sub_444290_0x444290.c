// 函数名称: sub_444290
// 虚拟地址: 0x444290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_444290()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_697d60
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_4c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = *(data_27e7a40 + 0x548)
    esi[0x61] += 1
    sub_42f1b0()
    void* eax_4 = *(data_27e7a40 + 0x548)
    
    if (eax_4 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(*(eax_4 + 0x45844) + 0x1ec4) != 0)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x4152, "RFTGClientUpdate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if ((data_3166560 & 1) == 0)
        data_3166560.d |= 1
        int32_t var_c_1 = 0
        data_316655c = sub_4f5220(data_307c530, "rgn_phases")
        int32_t var_c_2 = 0xffffffff
    
    *esi
    sub_4236b0(data_316655c)
    sub_43b010()
    int32_t* ebx_1 = data_307c530
    int32_t* edi_1 = *(data_27e7a40 + 0x548)
    int32_t eax_10 = sub_4f5220(ebx_1, "btn_undo")
    float eax_11
    int32_t edx_2
    eax_11, edx_2 = sub_4f5220(ebx_1, "animUndo")
    sub_43acf0(eax_10, edx_2, edi_1, *edi_1, eax_11)
    sub_447790()
    sub_447080(sub_4483d0(), data_27e7a40 + 0x78)
    sub_439a50()
    sub_43f8c0()
    sub_439f40()
    sub_43fcb0()
    int80_t result = sub_41b280()
    
    if (*(*(data_27e7a40 + 0x548) + 0x2c079) != 0)
        sub_4420f0(&esi[0x10e3d], esi[2], esi[1])
    
    if ((data_3166560 & 2) == 0)
        data_3166560.d |= 2
        int32_t var_c_3 = 1
        data_3166558 = sub_4f5220(data_307c72c, "animBg")
        int32_t var_c_4 = 0xffffffff
    
    void* eax_17 = sub_46b2b0(*(data_27e7a40 + 0x74))
    int32_t* edi_3 = esi
    char var_38_1
    
    if (*(eax_17 + 0x1c) == 1)
        var_38_1 = 0
    
    if (*(eax_17 + 0x1c) != 1 || edi_3[0x10e21].b == 0)
        var_38_1 = 1
    
    float edx_7 = data_3166558
    int32_t var_50_2 = var_38_1.d
    sub_4fa4e0(edi_3[0x15], edx_7, edx_7.b)
    *(sub_4fc3d0(&data_be1cb8, edi_3[0x2d]) + 8) = 1
    sub_443ef0(edi_3[0x2e])
    sub_443bd0(edi_3[0x2f])
    sub_43fa10()
    sub_442f20(edi_3[1])
    
    if ((data_3166560 & 4) == 0)
        data_3166560.d |= 4
        int32_t var_c_5 = 2
        data_3161154 = sub_4f5220(data_307c530, "tblGamblingButtons")
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3166560 & 8) == 0)
        data_3166560.d |= 8
        int32_t var_c_7 = 3
        data_3166554 = sub_4f5220(data_307c644, "txt_gambling")
        int32_t var_c_8 = 0xffffffff
    
    bool cond:1 = *(sub_46b2b0(*(data_27e7a40 + 0x74)) + 0x1c) == 0x11
    var_38_1.d = 1
    int32_t var_1c = 0
    
    while (true)
        int32_t esi_5 = *edi_3
        int32_t ebx_2 = data_3161154
        int32_t var_28 = var_38_1.d - 1
        int32_t var_24_1 = var_1c
        void* eax_27
        int32_t ecx_8
        eax_27, ecx_8 = sub_4fc3d0(&data_be1cb8, esi_5)
        
        if (ebx_2 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_10 = *(eax_27 + (ebx_2 << 2) + 0x30)
        int128_t* eax_28
        
        if (edx_10 != 0)
            eax_28 = sub_4fc1e0(ecx_8, edx_10)
        else
            eax_28, edx_10 = sub_4fc0d0()
            *(eax_28 + 4) = &data_83f3d3
            *(eax_27 + (ebx_2 << 2) + 0x30) = *(eax_28 + 0x1bc)
        
        char* esi_7 = *(eax_27 + 4)
        
        if (*(esi_7 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_7 == 0)
            sub_520800(eax_28, edx_10.b, esi_7, 0)
            
            if (*esi_7 == 0)
                sub_509540(esi_7)
        
        int32_t ebx_5 = *(sub_4f7720(&var_28, ebx_2 * 0x118 + ***esi_7, eax_28) + 0x434)
        *(sub_4fc3d0(&data_be1cb8, ebx_5) + 8) = cond:1 == 0
        int32_t var_c_9 = 4
        char* var_2c
        char* eax_36 = *sub_4c4ab0(&var_2c)
        char* var_30_1 = &data_83f3d3
        
        if (eax_36 != 0)
            var_30_1 = eax_36
        
        int32_t edi_5 = data_3166554
        int32_t eax_37
        int32_t ecx_13
        eax_37, ecx_13 = sub_4fc3d0(&data_be1cb8, ebx_5)
        
        if (edi_5 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_13 = *(eax_37 + (edi_5 << 2) + 0x30)
        int128_t* eax_38
        
        if (edx_13 != 0)
            eax_38 = sub_4fc1e0(ecx_13, edx_13)
        else
            eax_38 = sub_4fc0d0()
            *(eax_38 + 4) = &data_83f3d3
            *(eax_37 + (edi_5 << 2) + 0x30) = *(eax_38 + 0x1bc)
        
        *(eax_38 + 0x64) = *eax_38 + 1
        sub_4c4590(var_30_1)
        *(eax_38 + 0x151) = 1
        int32_t var_c_10 = 0xffffffff
        char* eax_42 = var_2c
        
        if (eax_42 != 0 && *eax_42 != 0)
            void* eax_44 = sub_4c4060(&var_2c)
            int32_t temp0_1 = *(eax_44 + 4)
            *(eax_44 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_14 = *(eax_44 + 0xc) + 0x10
                sub_4f4430(eax_44, sub_4f4380(esi_14), esi_14)
        
        int32_t eax_48 = var_38_1.d + 1
        var_38_1.d = eax_48
        
        if (eax_48 s> 7)
            break
        
        edi_3 = esi
    
    int32_t edi_7 = data_3161154
    void* eax_49
    int32_t ecx_14
    eax_49, ecx_14 = sub_4fc3d0(&data_be1cb8, *esi)
    
    if (edi_7 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_15 = *(eax_49 + (edi_7 << 2) + 0x30)
    int128_t* eax_54
    
    if (edx_15 != 0)
        eax_54 = sub_4fc1e0(ecx_14, edx_15)
    else
        eax_54 = sub_4fc0d0()
        *(eax_54 + 4) = &data_83f3d3
        *(eax_49 + (edi_7 << 2) + 0x30) = *(eax_54 + 0x1bc)
    
    *(eax_54 + 0x144) = *(eax_49 + 0x18) + 1
    float edx_18 = data_3161154
    *(eax_54 + 0x148) = 1
    eax_54.b = cond:1 == 0
    uint32_t var_50_6 = zx.d(eax_54.b)
    sub_4fa4e0(*esi, edx_18, edx_18.b)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
