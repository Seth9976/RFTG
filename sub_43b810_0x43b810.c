// 函数名称: sub_43b810
// 虚拟地址: 0x43b810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_43b810(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_694f6a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_64
    int32_t eax_2 = __security_cookie ^ &var_64
    int32_t __saved_edi
    int32_t var_74 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = data_3165db0
    void* i_15 = 4
    var_64 = data_307c5cc
    char* i_7 = nullptr
    char* i_8
    void* i
    
    do
        i_8 = i_7
        int32_t var_5c_1 = 0
        void* eax_7
        int32_t ecx_1
        eax_7, ecx_1 = sub_4fc3d0(&data_be1cb8, arg1)
        
        if (ecx s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_1 = *(eax_7 + (ecx << 2) + 0x30)
        int128_t* eax_8
        
        if (edx_1 != 0)
            eax_8 = sub_4fc1e0(ecx_1, edx_1)
        else
            eax_8, edx_1 = sub_4fc0d0()
            *(eax_8 + 4) = &data_83f3d3
            *(eax_7 + (ecx << 2) + 0x30) = *(eax_8 + 0x1bc)
        
        char* esi_3 = *(eax_7 + 4)
        
        if (*(esi_3 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_3 == 0)
            sub_520800(eax_8, edx_1.b, esi_3, 0)
            
            if (*esi_3 == 0)
                sub_509540(esi_3)
        
        int32_t esi_4 = *(sub_4f7720(&i_8, ecx * 0x118 + ***esi_3, eax_8) + 0x434)
        void* eax_13
        char edx_6
        eax_13, edx_6 = sub_4fc3d0(&data_be1cb8, esi_4)
        int32_t* ebx_2 = *(eax_13 + 4)
        
        if (ebx_2[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*ebx_2 == 0)
            edx_6 = sub_520800(eax_13, edx_6, ebx_2, 0)
            
            if (*ebx_2 == 0)
                edx_6 = sub_509540(ebx_2)
        
        void* edi_2 = **ebx_2
        float j = 0f
        
        if (*(edi_2 + 4) s> 0)
            do
                int32_t var_78_1 = 1
                edx_6 = sub_4fa4e0(esi_4, j, edx_6)
                j += 1
            while (j s< *(edi_2 + 4))
        
        i = &i_7[1]
        i_7 = i
    while (i s< 5)
    int32_t eax_18
    
    if (arg2 != 0xffffffff)
        eax_18 = *sub_46b2b0(arg2)
    else
        eax_18 = 0xffffffff
    
    char* i_16 = *((eax_18 << 2) + &data_c020f8)
    i_8 = i_16
    void* i_25
    
    if (i_16 s> 0)
        if ((data_3165dac & 1) == 0)
            data_3165dac.d |= 1
            int32_t var_c_1 = 0
            data_3165da8 = sub_4f5220(var_64, "ico_prestige")
            int32_t var_c_2 = 0xffffffff
        
        if ((data_3165dac & 2) == 0)
            data_3165dac.d |= 2
            int32_t var_c_3 = 1
            data_3165da4 = sub_4f5220(var_64, "txt_prestigePoints")
            int32_t var_c_4 = 0xffffffff
        
        int32_t var_54_1 = 0
        i_25 = 4
        i_15 = 3
        void* eax_25
        int32_t ecx_7
        eax_25, ecx_7 = sub_4fc3d0(&data_be1cb8, arg1)
        int32_t edx_8 = *(eax_25 + (ecx << 2) + 0x30)
        int128_t* eax_26
        
        if (edx_8 != 0)
            eax_26 = sub_4fc1e0(ecx_7, edx_8)
        else
            eax_26, edx_8 = sub_4fc0d0()
            *(eax_26 + 4) = &data_83f3d3
            *(eax_25 + (ecx << 2) + 0x30) = *(eax_26 + 0x1bc)
        
        char* esi_8 = *(eax_25 + 4)
        
        if (*(esi_8 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_8 == 0)
            sub_520800(eax_26, edx_8.b, esi_8, 0)
            
            if (*esi_8 == 0)
                sub_509540(esi_8)
        
        int32_t ebx_4 = *(sub_4f7720(&i_25, ecx * 0x118 + ***esi_8, eax_26) + 0x434)
        void* eax_32
        char edx_13
        eax_32, edx_13 = sub_4fc3d0(&data_be1cb8, ebx_4)
        int32_t* esi_10 = *(eax_32 + 4)
        
        if (esi_10[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_10 == 0)
            edx_13 = sub_520800(eax_32, edx_13, esi_10, 0)
            
            if (*esi_10 == 0)
                edx_13 = sub_509540(esi_10)
        
        void* edi_5 = **esi_10
        float i_1 = 0f
        
        if (*(edi_5 + 4) s> 0)
            do
                int32_t var_78_2 = 1
                edx_13 = sub_4fa4e0(ebx_4, i_1, edx_13)
                i_1 += 1
            while (i_1 s< *(edi_5 + 4))
        
        int32_t var_78_3 = 0
        sub_4fa4e0(ebx_4, data_3165da8, edx_13)
        float edx_14 = data_3165da4
        int32_t var_80_1 = 0
        sub_4fa4e0(ebx_4, edx_14, edx_14.b)
        int32_t var_c_5 = 2
        char* i_9 = *sub_4c4ab0(&i_25)
        i_7 = &data_83f3d3
        
        if (i_9 != 0)
            i_7 = i_9
        
        int32_t edi_6 = data_3165da4
        int32_t eax_41
        int32_t ecx_13
        eax_41, ecx_13 = sub_4fc3d0(&data_be1cb8, ebx_4)
        
        if (edi_6 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_15 = *(eax_41 + (edi_6 << 2) + 0x30)
        int128_t* eax_43
        
        if (edx_15 != 0)
            eax_43 = sub_4fc1e0(ecx_13, edx_15)
        else
            eax_43 = sub_4fc0d0()
            *(eax_43 + 4) = &data_83f3d3
            *(eax_41 + (edi_6 << 2) + 0x30) = *(eax_43 + 0x1bc)
        
        char* i_10 = i_7
        *(eax_43 + 0x64) = *eax_43 + 1
        sub_4c4590(i_10)
        *(eax_43 + 0x151) = 1
        int32_t var_c_6 = 0xffffffff
        i_16 = i_25
        
        if (i_16 != 0 && *i_16 != 0)
            i_16 = sub_4c4060(&i_25)
            int32_t temp2_1 = *(i_16 + 4)
            *(i_16 + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_16 = *(i_16 + 0xc) + 0x10
                i_16 = sub_4f4430(i_16, sub_4f4380(esi_16), esi_16)
    
    int32_t eax_47
    
    if (arg2 != 0xffffffff)
        eax_47 = *sub_46b2b0(arg2)
    else
        eax_47 = i_16 | arg2
    
    char* i_17 = *((eax_47 << 2) + &data_c020e8)
    i_8 = i_17
    
    if (i_17 s> 0)
        if ((data_3165dac & 4) == 0)
            data_3165dac.d |= 4
            int32_t var_c_7 = 3
            data_3165da0 = sub_4f5220(var_64, "ico_vpChit")
            int32_t var_c_8 = 0xffffffff
        
        if ((data_3165dac & 8) == 0)
            data_3165dac.d |= 8
            int32_t var_c_9 = 4
            data_3165d9c = sub_4f5220(var_64, "txt_chitCount")
            int32_t var_c_10 = 0xffffffff
        
        char* i_13 = i_15
        i_7 = i_13
        i_15 = i_13 - 1
        int32_t var_48_1 = 0
        void* eax_52
        int32_t ecx_17
        eax_52, ecx_17 = sub_4fc3d0(&data_be1cb8, arg1)
        int32_t edx_18 = *(eax_52 + (ecx << 2) + 0x30)
        int128_t* eax_53
        
        if (edx_18 != 0)
            eax_53 = sub_4fc1e0(ecx_17, edx_18)
        else
            eax_53 = sub_4fc0d0()
            *(eax_53 + 4) = &data_83f3d3
            edx_18 = *(eax_53 + 0x1bc)
            *(eax_52 + (ecx << 2) + 0x30) = edx_18
        
        char* esi_20 = *(eax_52 + 4)
        
        if (*(esi_20 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_20 == 0)
            sub_520800(eax_53, edx_18.b, esi_20, 0)
            
            if (*esi_20 == 0)
                sub_509540(esi_20)
        
        int32_t ebx_8 = *(sub_4f7720(&i_7, ecx * 0x118 + ***esi_20, eax_53) + 0x434)
        void* eax_60
        char edx_22
        eax_60, edx_22 = sub_4fc3d0(&data_be1cb8, ebx_8)
        int32_t* esi_22 = *(eax_60 + 4)
        
        if (esi_22[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_22 == 0)
            edx_22 = sub_520800(eax_60, edx_22, esi_22, 0)
            
            if (*esi_22 == 0)
                edx_22 = sub_509540(esi_22)
        
        void* edi_9 = **esi_22
        float i_2 = 0f
        
        if (*(edi_9 + 4) s> 0)
            do
                int32_t var_78_5 = 1
                edx_22 = sub_4fa4e0(ebx_8, i_2, edx_22)
                i_2 += 1
            while (i_2 s< *(edi_9 + 4))
        
        float edx_23 = data_3165da0
        int32_t var_78_6 = 0
        char edx_24 = sub_4fa4e0(ebx_8, edx_23, edx_23.b)
        int32_t var_80_2 = 0
        sub_4fa4e0(ebx_8, data_3165d9c, edx_24)
        int32_t var_c_11 = 5
        char* i_11 = *sub_4c4ab0(&i_8)
        i_7 = &data_83f3d3
        
        if (i_11 != 0)
            i_7 = i_11
        
        int32_t edi_10 = data_3165d9c
        int32_t eax_69
        int32_t ecx_22
        eax_69, ecx_22 = sub_4fc3d0(&data_be1cb8, ebx_8)
        
        if (edi_10 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_25 = *(eax_69 + (edi_10 << 2) + 0x30)
        int128_t* eax_71
        
        if (edx_25 != 0)
            eax_71 = sub_4fc1e0(ecx_22, edx_25)
        else
            eax_71 = sub_4fc0d0()
            *(eax_71 + 4) = &data_83f3d3
            *(eax_69 + (edi_10 << 2) + 0x30) = *(eax_71 + 0x1bc)
        
        char* i_12 = i_7
        *(eax_71 + 0x64) = *eax_71 + 1
        sub_4c4590(i_12)
        *(eax_71 + 0x151) = 1
        int32_t var_c_12 = 0xffffffff
        char* i_18 = i_8
        
        if (i_18 != 0 && *i_18 != 0)
            void* eax_73 = sub_4c4060(&i_8)
            int32_t temp3_1 = *(eax_73 + 4)
            *(eax_73 + 4) -= 1
            
            if (temp3_1 == 1)
                int32_t esi_28 = *(eax_73 + 0xc) + 0x10
                sub_4f4430(eax_73, sub_4f4380(esi_28), esi_28)
    
    void* eax_77 = *(data_27e7a40 + 0x548)
    
    if (eax_77 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_24 = *(eax_77 + 0x45844)
    char* eax_80 = arg2 * 0xb4
    char* var_3c = eax_80
    int32_t i_19 = sx.d(*(eax_80 + ecx_24 + 0xa8))
    i_8 = i_19
    
    if (i_19 s> 0)
        int32_t* esi_29
        
        if ((data_3165dac & 0x10) != 0)
            esi_29 = var_64
        else
            data_3165dac.d |= 0x10
            esi_29 = var_64
            int32_t var_c_13 = 6
            data_3165d98 = sub_4f5220(esi_29, "ico_goalBack")
            int32_t var_c_14 = 0xffffffff
        
        if ((data_3165dac & 0x20) == 0)
            data_3165dac.d |= 0x20
            int32_t var_c_15 = 7
            data_3165d94 = sub_4f5220(esi_29, "ico_goalHex")
            int32_t var_c_16 = 0xffffffff
        
        if ((data_3165dac & 0x40) == 0)
            data_3165dac.d |= 0x40
            int32_t var_c_17 = 8
            data_3165d90 = sub_4f5220(esi_29, "txt_goalPoints")
            int32_t var_c_18 = 0xffffffff
        
        i_25 = i_15
        int32_t var_54_2 = 0
        void* eax_84
        int32_t ecx_26
        eax_84, ecx_26 = sub_4fc3d0(&data_be1cb8, arg1)
        int32_t edx_28 = *(eax_84 + (ecx << 2) + 0x30)
        int128_t* eax_85
        
        if (edx_28 != 0)
            eax_85 = sub_4fc1e0(ecx_26, edx_28)
        else
            eax_85 = sub_4fc0d0()
            *(eax_85 + 4) = &data_83f3d3
            edx_28 = *(eax_85 + 0x1bc)
            *(eax_84 + (ecx << 2) + 0x30) = edx_28
        
        char* esi_32 = *(eax_84 + 4)
        
        if (*(esi_32 + 4) != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_32 == 0)
            sub_520800(eax_85, edx_28.b, esi_32, 0)
            
            if (*esi_32 == 0)
                sub_509540(esi_32)
        
        int32_t ebx_12 = *(sub_4f7720(&i_25, ecx * 0x118 + ***esi_32, eax_85) + 0x434)
        void* eax_92
        char edx_32
        eax_92, edx_32 = sub_4fc3d0(&data_be1cb8, ebx_12)
        int32_t* esi_34 = *(eax_92 + 4)
        
        if (esi_34[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_34 == 0)
            edx_32 = sub_520800(eax_92, edx_32, esi_34, 0)
            
            if (*esi_34 == 0)
                edx_32 = sub_509540(esi_34)
        
        void* edi_13 = **esi_34
        float i_3 = 0f
        
        if (*(edi_13 + 4) s> 0)
            do
                int32_t var_78_8 = 1
                edx_32 = sub_4fa4e0(ebx_12, i_3, edx_32)
                i_3 += 1
            while (i_3 s< *(edi_13 + 4))
        
        float edx_33 = data_3165d98
        int32_t var_78_9 = 0
        char edx_34 = sub_4fa4e0(ebx_12, edx_33, edx_33.b)
        int32_t var_80_3 = 0
        char edx_35 = sub_4fa4e0(ebx_12, data_3165d94, edx_34)
        int32_t var_88_1 = 0
        sub_4fa4e0(ebx_12, data_3165d90, edx_35)
        int32_t var_c_19 = 9
        char* i_20 = *sub_4c4ab0(&i_25)
        i_8 = &data_83f3d3
        
        if (i_20 != 0)
            i_8 = i_20
        
        int32_t edi_14 = data_3165d90
        int32_t eax_102
        int32_t ecx_32
        eax_102, ecx_32 = sub_4fc3d0(&data_be1cb8, ebx_12)
        
        if (edi_14 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_36 = *(eax_102 + (edi_14 << 2) + 0x30)
        int128_t* eax_104
        
        if (edx_36 != 0)
            eax_104 = sub_4fc1e0(ecx_32, edx_36)
        else
            eax_104 = sub_4fc0d0()
            *(eax_104 + 4) = &data_83f3d3
            *(eax_102 + (edi_14 << 2) + 0x30) = *(eax_104 + 0x1bc)
        
        *(eax_104 + 0x64) = *eax_104 + 1
        sub_4c4590(i_8)
        *(eax_104 + 0x151) = 1
        int32_t var_c_20 = 0xffffffff
        void* i_26 = i_25
        
        if (i_26 != 0 && *i_26 != 0)
            void* eax_109 = sub_4c4060(&i_25)
            int32_t temp4_1 = *(eax_109 + 4)
            *(eax_109 + 4) -= 1
            
            if (temp4_1 == 1)
                int32_t esi_40 = *(eax_109 + 0xc) + 0x10
                sub_4f4430(eax_109, sub_4f4380(esi_40), esi_40)
    
    if ((data_3165dac & 0x80) == 0)
        data_3165dac.d |= 0x80
        int32_t var_c_21 = 0xa
        data_3165d8c = sub_4f5220(var_64, "ico_handSize")
        int32_t var_c_22 = 0xffffffff
    
    if ((data_3165dac.d & 0x100) == 0)
        data_3165dac.d |= 0x100
        int32_t var_c_23 = 0xb
        data_3165d88 = sub_4f5220(var_64, "txt_handSize")
        int32_t var_c_24 = 0xffffffff
    
    int32_t eax_114
    
    if (arg2 != 0xffffffff)
        eax_114 = *sub_46b2b0(arg2)
    else
        eax_114 = 0xffffffff
    
    i_8 = *((eax_114 << 2) + &data_c020d8)
    int32_t var_54_3 = 0
    i_25 = nullptr
    void* eax_117
    int32_t ecx_34
    eax_117, ecx_34 = sub_4fc3d0(&data_be1cb8, arg1)
    int32_t edx_39 = *(eax_117 + (ecx << 2) + 0x30)
    int32_t* eax_118
    
    if (edx_39 != 0)
        eax_118 = sub_4fc1e0(ecx_34, edx_39)
    else
        eax_118, edx_39 = sub_4fc0d0()
        eax_118[1] = &data_83f3d3
        *(eax_117 + (ecx << 2) + 0x30) = eax_118[0x6f]
    
    char* esi_44 = *(eax_117 + 4)
    
    if (*(esi_44 + 4) != 0x1e)
        sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*esi_44 == 0)
        sub_520800(eax_118, edx_39.b, esi_44, 0)
        
        if (*esi_44 == 0)
            sub_509540(esi_44)
    
    char* i_14 = ecx * 0x118
    int32_t* edx_42 = ***esi_44 + i_14
    i_7 = i_14
    int32_t ebx_16 = *(sub_4f7720(&i_25, edx_42, eax_118) + 0x434)
    void* eax_124
    char edx_43
    eax_124, edx_43 = sub_4fc3d0(&data_be1cb8, ebx_16)
    int32_t* esi_46 = *(eax_124 + 4)
    
    if (esi_46[1] != 0x1e)
        sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*esi_46 == 0)
        edx_43 = sub_520800(eax_124, edx_43, esi_46, 0)
        
        if (*esi_46 == 0)
            edx_43 = sub_509540(esi_46)
    
    void* edi_17 = **esi_46
    float i_4 = 0f
    
    if (*(edi_17 + 4) s> 0)
        do
            int32_t var_78_11 = 1
            edx_43 = sub_4fa4e0(ebx_16, i_4, edx_43)
            i_4 += 1
        while (i_4 s< *(edi_17 + 4))
    
    int32_t var_78_12 = 0
    sub_4fa4e0(ebx_16, data_3165d8c, edx_43)
    float edx_44 = data_3165d88
    int32_t var_80_4 = 0
    sub_4fa4e0(ebx_16, edx_44, edx_44.b)
    int32_t var_c_25 = 0xc
    char* i_21 = *sub_4c4ab0(&i_25)
    i_8 = &data_83f3d3
    
    if (i_21 != 0)
        i_8 = i_21
    
    int32_t edi_18 = data_3165d88
    int32_t eax_133
    int32_t ecx_40
    eax_133, ecx_40 = sub_4fc3d0(&data_be1cb8, ebx_16)
    
    if (edi_18 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_45 = *(eax_133 + (edi_18 << 2) + 0x30)
    int128_t* eax_135
    
    if (edx_45 != 0)
        eax_135 = sub_4fc1e0(ecx_40, edx_45)
    else
        eax_135 = sub_4fc0d0()
        *(eax_135 + 4) = &data_83f3d3
        *(eax_133 + (edi_18 << 2) + 0x30) = *(eax_135 + 0x1bc)
    
    char* i_22 = i_8
    *(eax_135 + 0x64) = *eax_135 + 1
    int32_t edx_48 = sub_4c4590(i_22)
    *(eax_135 + 0x151) = 1
    int32_t var_c_26 = 0xffffffff
    void* i_27 = i_25
    
    if (i_27 != 0 && *i_27 != 0)
        if (*(i_27 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp5_1 = *(i_27 - 0xc)
        *(i_27 - 0xc) -= 1
        
        if (temp5_1 == 1)
            void* edi_19 = data_26a44e4
            int32_t esi_52 = *(i_27 - 4) + 0x10
            
            if (edi_19 == 0)
                sub_4f4250()
                edi_19 = data_26a44e4
            
            int32_t edx_49 = 0
            int32_t* edi_20
            
            while (true)
                if (esi_52 s<= 1 << (edx_49.b + 4))
                    edi_20 = edi_19 + edx_49 * 0x14
                    break
                
                edx_49 += 1
                
                if (edx_49 s>= 7)
                    edi_20 = edi_19 + 0x8c
                    break
            
            edx_48 = sub_4f4430(i_27 - 0x10, edi_20, esi_52)
    
    void* edi_21 = data_27e7a40
    int32_t var_30
    __builtin_memset(&var_30, 0, 0x14)
    void* eax_139 = *(edi_21 + 0x548)
    
    if (eax_139 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ebx_19 = *(eax_139 + 0x45844)
    int32_t eax_142 = sub_4b1530(eax_139, edx_48, ebx_19, arg2)
    i_8 = *(edi_21 + 0x548)
    sub_4b1650(ebx_19, arg2)
    
    if ((data_3165dac.d & 0x200) == 0)
        data_3165dac.d |= 0x200
        int32_t* esi_54 = var_64
        int32_t var_c_27 = 0xd
        data_315fba8 = sub_4f5220(esi_54, "img_militaryBonusAlien")
        data_315fbac = sub_4f5220(esi_54, "img_militaryBonusGenes")
        data_315fbb0 = sub_4f5220(esi_54, "img_militaryBonusRare")
        data_315fbb4 = sub_4f5220(esi_54, "img_militaryBonusNovelty")
        data_315fbb8 = sub_4f5220(esi_54, "img_militaryBonusRebel")
        int32_t var_c_28 = 0xffffffff
    
    int32_t var_34 = 0
    int32_t var_38 = 1
    void* eax_148
    int32_t ecx_45
    eax_148, ecx_45 = sub_4fc3d0(&data_be1cb8, arg1)
    int32_t edx_50 = *(eax_148 + (ecx << 2) + 0x30)
    int32_t* eax_149
    
    if (edx_50 != 0)
        eax_149 = sub_4fc1e0(ecx_45, edx_50)
    else
        eax_149 = sub_4fc0d0()
        eax_149[1] = &data_83f3d3
        edx_50 = eax_149[0x6f]
        *(eax_148 + (ecx << 2) + 0x30) = edx_50
    
    char* esi_57 = *(eax_148 + 4)
    
    if (*(esi_57 + 4) != 0x1e)
        sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*esi_57 == 0)
        sub_520800(eax_149, edx_50.b, esi_57, 0)
        
        if (*esi_57 == 0)
            sub_509540(esi_57)
    
    int32_t esi_58 = *(sub_4f7720(&var_38, ***esi_57 + i_7, eax_149) + 0x434)
    void* eax_156
    char edx_53
    eax_156, edx_53 = sub_4fc3d0(&data_be1cb8, esi_58)
    int32_t* ebx_21 = *(eax_156 + 4)
    
    if (ebx_21[1] != 0x1e)
        sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*ebx_21 == 0)
        edx_53 = sub_520800(eax_156, edx_53, ebx_21, 0)
        
        if (*ebx_21 == 0)
            edx_53 = sub_509540(ebx_21)
    
    void* edi_23 = **ebx_21
    float i_5 = 0f
    
    if (*(edi_23 + 4) s> 0)
        do
            int32_t var_78_16 = 1
            edx_53 = sub_4fa4e0(esi_58, i_5, edx_53)
            i_5 += 1
        while (i_5 s< *(edi_23 + 4))
    
    char* i_24 = i_8
    int32_t i_6 = 0
    int32_t result = 0
    
    do
        if (*(&var_30 + i_6) != 0)
            if (i_24[0x2c0b0] == 0)
                float edx_54 = *(i_6 + &data_315fba8)
                int32_t var_78_17 = 0
                sub_4fa4e0(esi_58, edx_54, edx_54.b)
            
            result = 1
        
        i_6 += 4
    while (i_6 s< 0x14)
    
    char* edx_55 = var_3c
    
    if (edx_55[ebx_19 + 0x62] != 0)
        if ((data_3165dac.d & 0x400) == 0)
            data_3165dac.d |= 0x400
            int32_t var_c_29 = 0xe
            int32_t eax_162
            eax_162, edx_55 = sub_4f5220(var_64, "img_militaryBonusTemp")
            data_3165d84 = eax_162
            int32_t var_c_30 = 0xffffffff
        
        int32_t var_78_18 = 0
        edx_55 = sub_4fa4e0(esi_58, data_3165d84, edx_55.b)
        result = 1
    
    if (eax_142 != 0 || result != 0)
        if ((data_3165dac.d & 0x800) == 0)
            data_3165dac.d |= 0x800
            int32_t var_c_31 = 0xf
            int32_t eax_164
            eax_164, edx_55 = sub_4f5220(var_64, "ico_military")
            data_3165d80 = eax_164
            int32_t var_c_32 = 0xffffffff
        
        if ((data_3165dac.d & 0x1000) == 0)
            data_3165dac.d |= 0x1000
            int32_t var_c_33 = 0x10
            int32_t eax_166
            eax_166, edx_55 = sub_4f5220(var_64, "txt_military")
            data_3165d7c = eax_166
            int32_t var_c_34 = 0xffffffff
        
        int32_t var_78_19 = 0
        sub_4fa4e0(esi_58, data_3165d80, edx_55.b)
        float edx_57 = data_3165d7c
        int32_t var_80_5 = 0
        int32_t var_c_35 = 0x11
        char* eax_171 = *sub_46e4d0(eax_142, sub_4fa4e0(esi_58, edx_57, edx_57.b), &var_3c)
        char* edi_25 = &data_83f3d3
        
        if (eax_171 != 0)
            edi_25 = eax_171
        
        if (esi_58 == 0)
            sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t eax_174 = zx.d(esi_58.w)
        int32_t ecx_55
        int32_t edx_59
        
        if (eax_174 u< data_be1cbc)
            edx_59 = data_be1cb8
            ecx_55 = eax_174 * 0x438
        
        if (eax_174 u>= data_be1cbc || *(ecx_55 + edx_59 + 0x434) != esi_58)
            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                0x46, "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t esi_59 = data_3165d7c
        int32_t ebx_23 = edx_59 + eax_174 * 0x438
        
        if (esi_59 s>= 0x100)
            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_60 = *(ebx_23 + (esi_59 << 2) + 0x30)
        int128_t* eax_178
        
        if (edx_60 != 0)
            eax_178 = sub_4fc1e0(ecx_55, edx_60)
        else
            eax_178 = sub_4fc0d0()
            *(eax_178 + 4) = &data_83f3d3
            *(ebx_23 + (esi_59 << 2) + 0x30) = *(eax_178 + 0x1bc)
        
        *(eax_178 + 0x64) = *eax_178 + 1
        result = sub_4c4590(edi_25)
        *(eax_178 + 0x151) = 1
        int32_t var_c_36 = 0xffffffff
        char* ebx_25 = var_3c
        
        if (ebx_25 != 0 && *ebx_25 != 0)
            if (*(ebx_25 - 0x10) != 0xfafafafa)
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp6_1 = *(ebx_25 - 0xc)
            *(ebx_25 - 0xc) -= 1
            
            if (temp6_1 == 1)
                void* esi_61 = data_26a44e4
                int32_t edi_27 = *(ebx_25 - 4) + 0x10
                
                if (esi_61 == 0)
                    sub_4f4250()
                    esi_61 = data_26a44e4
                
                int32_t eax_183 = 0
                int32_t* esi_62
                
                while (true)
                    if (edi_27 s<= 1 << (eax_183.b + 4))
                        esi_62 = esi_61 + eax_183 * 0x14
                        break
                    
                    eax_183 += 1
                    
                    if (eax_183 s>= 7)
                        esi_62 = esi_61 + 0x8c
                        break
                
                esi_62[3] -= 1
                
                if (edi_27 s<= 0x400 || esi_62[4] != 0xffffffff)
                    char* i_23 = esi_62[4]
                    int32_t* ecx_58 = esi_62[1]
                    int32_t edi_29 = esi_62[2] * i_23
                    i_8 = i_23
                    
                    if (ecx_58 == 0)
                    label_43cc71:
                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    while (true)
                        void* edx_62 = &ecx_58[1]
                        ecx_58 = *ecx_58
                        
                        if (&ebx_25[0xfffffff0] u>= edx_62 && &ebx_25[0xfffffff0] u< edx_62 + edi_29)
                            int32_t eax_188
                            int32_t edx_63
                            edx_63:eax_188 = sx.q(&ebx_25[0xfffffff0] - edx_62)
                            result = divs.dp.d(edx_63:eax_188, i_8)
                            
                            if (mods.dp.d(edx_63:eax_188, i_8) == 0)
                                *(ebx_25 - 0x10) = *esi_62
                                *esi_62 = &ebx_25[0xfffffff0]
                                break
                        
                        if (ecx_58 == 0)
                            goto label_43cc71
                else
                    result = _aligned_free_base(&ebx_25[0xfffffff0])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_64)
    return result
}
