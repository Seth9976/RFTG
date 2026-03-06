// 函数名称: sub_40d9a0
// 虚拟地址: 0x40d9a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_40d9a0(void* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6956a2
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_5c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165f14 & 1) == 0)
        data_3165f14.d |= 1
        int32_t var_c_1 = 0
        data_3165f10 = sub_4f5220(data_307c1c0, "txtFriendCode")
        int32_t var_c_2 = 0xffffffff
    
    char* ecx_1 = data_27e7a54 + 0x40
    int128_t* eax_6 = sub_4f6e90(data_3165f10, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x38)), &data_83f3d3)
    *(eax_6 + 0x64) = *eax_6 + 1
    sub_4c4590(ecx_1)
    *(eax_6 + 0x151) = 1
    sub_4075c0()
    
    if ((data_3165f14 & 2) == 0)
        data_3165f14.d |= 2
        int32_t var_c_3 = 1
        data_3165f0c = sub_4f5220(data_307c1c0, "tblFriends")
        int32_t var_c_4 = 0xffffffff
    
    void* edi_3 = data_3165f0c * 0x118 + *sub_4f4890(data_307c1c0)
    
    if (*(edi_3 + 4) != 2)
        sub_4c5870("el.type == UI_TABLE", &data_83f3d3, "UIDef.cpp", 0xafd, "UIElementTableDimensions")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_1 = *(edi_3 + 0x8c)
    int32_t edi_4 = *(edi_3 + 0x88)
    int32_t ecx_3 = 0
    int32_t var_24 = edi_4
    int32_t var_30_1 = 0
    void* ebx_1
    
    if (edi_4 s> 0)
        while (true)
            int32_t var_34_1 = 0
            
            if (edx_1 s> 0)
                while (true)
                    int32_t esi_4 = data_3165f0c
                    int32_t eax_15 = ecx_3 + *(arg1 + 0x40) * 6
                    int32_t var_1c_1 = ecx_3
                    int32_t ecx_4 = *(arg1 + 0x38)
                    int32_t var_20 = var_34_1
                    
                    if (ecx_4 == 0)
                        sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                            0x45, "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    uint32_t eax_18 = zx.d(ecx_4.w)
                    
                    if (eax_18 u< data_be1cbc)
                        void* edi_5 = data_be1cb8
                        
                        if (*(eax_18 * 0x438 + edi_5 + 0x434) == ecx_4)
                            void* ebx_2 = edi_5 + eax_18 * 0x438
                            
                            if (esi_4 s>= 0x100)
                                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                                    "UIStateElementGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t edx_5 = *(ebx_2 + (esi_4 << 2) + 0x30)
                            int128_t* eax_20
                            
                            if (edx_5 != 0)
                                eax_20 = sub_4fc1e0(ecx_4, edx_5)
                            else
                                eax_20, edx_5 = sub_4fc0d0()
                                *(eax_20 + 4) = &data_83f3d3
                                *(ebx_2 + (esi_4 << 2) + 0x30) = *(eax_20 + 0x1bc)
                            
                            char* ebx_3 = *(ebx_2 + 4)
                            
                            if (*(ebx_3 + 4) != 0x1e)
                                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, 
                                    "UIDef.cpp", 0xfd, "UIDefGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            if (*ebx_3 == 0)
                                sub_520800(eax_20, edx_5.b, ebx_3, 0)
                                
                                if (*ebx_3 == 0)
                                    sub_509540(ebx_3)
                            
                            int32_t edx_7 =
                                *(sub_4f7720(&var_20, esi_4 * 0x118 + ***ebx_3, eax_20) + 0x434)
                            
                            if ((data_3165f14 & 4) == 0)
                                data_3165f14.d |= 4
                                int32_t var_c_5 = 2
                                data_3165f08 = sub_4f5220(data_307c1c4, "btnTrash")
                                int32_t var_c_6 = 0xffffffff
                            
                            if ((data_3165f14 & 8) == 0)
                                data_3165f14.d |= 8
                                int32_t var_c_7 = 3
                                data_3165f04 = sub_4f5220(data_307c1c4, "btnFriend")
                                int32_t var_c_8 = 0xffffffff
                            
                            if ((data_3165f14 & 0x10) == 0)
                                data_3165f14.d |= 0x10
                                int32_t var_c_9 = 4
                                data_3165f00 = sub_4f5220(data_307c1c4, "txtName")
                                int32_t var_c_10 = 0xffffffff
                            
                            if ((data_3165f14 & 0x20) == 0)
                                data_3165f14.d |= 0x20
                                int32_t var_c_11 = 5
                                data_3165efc = sub_4f5220(data_307c1c4, "imgAvatar")
                                int32_t var_c_12 = 0xffffffff
                            
                            if ((data_3165f14 & 0x40) == 0)
                                data_3165f14.d |= 0x40
                                int32_t var_c_13 = 6
                                data_3165ef8 = sub_4f5220(data_307c1c4, "Frame")
                                int32_t var_c_14 = 0xffffffff
                            
                            int32_t eax_32
                            
                            if ((data_3165f14 & 0x80) != 0)
                                eax_32 = data_3165ef4
                            else
                                data_3165f14.d |= 0x80
                                int32_t var_c_15 = 7
                                eax_32 = sub_4f5220(data_307c1c4, "txtAdd")
                                data_3165ef4 = eax_32
                                int32_t var_c_16 = 0xffffffff
                            
                            int32_t ecx_12 = *(data_27e7a40 + 0x3188e4)
                            
                            if (eax_15 == ecx_12)
                                if (edx_7 == 0)
                                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x45, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                uint32_t edi_8 = zx.d(edx_7.w)
                                int32_t ecx_13
                                
                                if (edi_8 u< data_be1cbc)
                                    ecx_13 = data_be1cb8
                                
                                if (edi_8 u>= data_be1cbc || *(edi_8 * 0x438 + ecx_13 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                void* ebx_5 = edi_8 * 0x438
                                *(ebx_5 + ecx_13 + 8) = 0
                                int32_t ecx_14
                                
                                if (edi_8 u< data_be1cbc)
                                    ecx_14 = data_be1cb8
                                
                                if (edi_8 u>= data_be1cbc || *(edi_8 * 0x438 + ecx_14 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t esi_7 = data_3165f00
                                void* ebx_6 = ebx_5 + ecx_14
                                
                                if (esi_7 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_12 = *(ebx_6 + (esi_7 << 2) + 0x30)
                                int128_t* eax_37
                                
                                if (edx_12 != 0)
                                    eax_37 = sub_4fc1e0(ecx_14, edx_12)
                                else
                                    eax_37 = sub_4fc0d0()
                                    *(eax_37 + 4) = &data_83f3d3
                                    *(ebx_6 + (esi_7 << 2) + 0x30) = *(eax_37 + 0x1bc)
                                
                                *(eax_37 + 0x64) = *eax_37 + 1
                                char* ecx_16 = *(eax_37 + 0x68)
                                
                                if (ecx_16 != 0 && ecx_16 != &data_83f3d3)
                                    if (*ecx_16 != 0)
                                        void* eax_39 = sub_4c4060(eax_37 + 0x68)
                                        int32_t temp0_1 = *(eax_39 + 4)
                                        *(eax_39 + 4) -= 1
                                        
                                        if (temp0_1 == 1)
                                            int32_t esi_9 = *(eax_39 + 0xc) + 0x10
                                            sub_4f4430(eax_39, sub_4f4380(esi_9), esi_9)
                                    
                                    *(eax_37 + 0x68) = &data_83f3d3
                                
                                *(eax_37 + 0x151) = 1
                                int32_t ecx_18
                                
                                if (edi_8 u< data_be1cbc)
                                    ecx_18 = data_be1cb8
                                
                                if (edi_8 u>= data_be1cbc || *(edi_8 * 0x438 + ecx_18 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t esi_10 = data_3165ef4
                                void* ebx_9 = ebx_5 + ecx_18
                                
                                if (esi_10 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                void** edx_16 = *(ebx_9 + (esi_10 << 2) + 0x30)
                                int128_t* eax_44
                                
                                if (edx_16 != 0)
                                    eax_44 = sub_4fc1e0(ecx_18, edx_16)
                                else
                                    eax_44, edx_16 = sub_4fc0d0()
                                    *(eax_44 + 4) = &data_83f3d3
                                    *(ebx_9 + (esi_10 << 2) + 0x30) = *(eax_44 + 0x1bc)
                                
                                *(eax_44 + 0x64) = *eax_44 + 1
                                char* const eax_45 = *(eax_44 + 0x68)
                                
                                if (eax_45 == 0)
                                    eax_45 = &data_83f3d3
                                
                                if (eax_45 != "Add Friend")
                                    sub_4c4160(eax_45, edx_16, eax_44 + 0x68, 0xa, 0)
                                    __builtin_strncpy(*(eax_44 + 0x68), "Add Friend", 0xb)
                                
                                *(eax_44 + 0x151) = 1
                                int32_t ecx_23
                                
                                if (edi_8 u< data_be1cbc)
                                    ecx_23 = data_be1cb8
                                
                                if (edi_8 u>= data_be1cbc || *(edi_8 * 0x438 + ecx_23 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t esi_12 = data_3165f08
                                void* ebx_11 = ebx_5 + ecx_23
                                
                                if (esi_12 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_18 = *(ebx_11 + (esi_12 << 2) + 0x30)
                                int128_t* eax_49
                                
                                if (edx_18 != 0)
                                    eax_49 = sub_4fc1e0(ecx_23, edx_18)
                                else
                                    eax_49, edx_18 = sub_4fc0d0()
                                    *(eax_49 + 4) = &data_83f3d3
                                    *(ebx_11 + (esi_12 << 2) + 0x30) = *(eax_49 + 0x1bc)
                                
                                float ecx_25 = data_3165efc
                                *(eax_49 + 0x21) = 1
                                int32_t var_60_2 = 1
                                sub_4fa4e0(edx_7, ecx_25, edx_18.b)
                                float edx_19 = data_3165ef8
                                int32_t var_68_1 = 1
                                sub_4fa4e0(edx_7, edx_19, edx_19.b)
                                int32_t ecx_26
                                
                                if (edi_8 u< data_be1cbc)
                                    ecx_26 = data_be1cb8
                                
                                if (edi_8 u>= data_be1cbc || *(edi_8 * 0x438 + ecx_26 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t esi_14 = data_3165f04
                                void* ebx_13 = ebx_5 + ecx_26
                                
                                if (esi_14 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_20 = *(ebx_13 + (esi_14 << 2) + 0x30)
                                int128_t* eax_54
                                
                                if (edx_20 != 0)
                                    eax_54 = sub_4fc1e0(ecx_26, edx_20)
                                else
                                    eax_54 = sub_4fc0d0()
                                    *(eax_54 + 4) = &data_83f3d3
                                    *(ebx_13 + (esi_14 << 2) + 0x30) = *(eax_54 + 0x1bc)
                                
                                *(eax_54 + 0x22) = 0
                                int32_t eax_55
                                
                                if (edi_8 u< data_be1cbc)
                                    eax_55 = data_be1cb8
                                
                                if (edi_8 u>= data_be1cbc || *(edi_8 * 0x438 + eax_55 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t esi_15 = data_3165f04
                                ebx_1 = ebx_5 + eax_55
                                
                                if (esi_15 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_21 = *(ebx_1 + (esi_15 << 2) + 0x30)
                                
                                if (edx_21 != 0)
                                    *(sub_4fc1e0(edx_7, edx_21) + 0x23) = 0
                                else
                                    int128_t* eax_56 = sub_4fc0d0()
                                    *(eax_56 + 4) = &data_83f3d3
                                    *(ebx_1 + (esi_15 << 2) + 0x30) = *(eax_56 + 0x1bc)
                                    *(eax_56 + 0x23) = 0
                            else if (eax_15 s< ecx_12)
                                if (edx_7 == 0)
                                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x45, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                uint32_t edx_24 = zx.d(edx_7.w)
                                int32_t esi_17
                                
                                if (edx_24 u< data_be1cbc)
                                    esi_17 = data_be1cb8
                                
                                if (edx_24 u>= data_be1cbc
                                        || *(edx_24 * 0x438 + esi_17 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                void* ebx_16 = edx_24 * 0x438
                                *(ebx_16 + esi_17 + 8) = 0
                                int32_t ecx_35
                                int32_t edx_25
                                
                                if (edx_24 u< data_be1cbc)
                                    edx_25 = data_be1cb8
                                    ecx_35 = edx_24 * 0x438
                                
                                if (edx_24 u>= data_be1cbc || *(ecx_35 + edx_25 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                void* ebx_17 = ebx_16 + edx_25
                                
                                if (eax_32 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_26 = *(ebx_17 + (eax_32 << 2) + 0x30)
                                int128_t* eax_61
                                
                                if (edx_26 != 0)
                                    eax_61 = sub_4fc1e0(ecx_35, edx_26)
                                else
                                    eax_61 = sub_4fc0d0()
                                    *(eax_61 + 4) = &data_83f3d3
                                    *(ebx_17 + ((eax_32 + 0xc) << 2)) = *(eax_61 + 0x1bc)
                                
                                *(eax_61 + 0x64) = *eax_61 + 1
                                sub_4c4590(&data_83f3d3)
                                int32_t ecx_37 = data_27e7a40
                                *(eax_61 + 0x151) = 1
                                int32_t edi_17 = eax_15 * 0x3c
                                char var_2c
                                var_2c.d = edi_17
                                int32_t ecx_38
                                
                                if (edx_24 u< data_be1cbc)
                                    ecx_38 = data_be1cb8
                                
                                if (edx_24 u>= data_be1cbc
                                        || *(edx_24 * 0x438 + ecx_38 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t esi_20 = data_3165f00
                                void* ebx_20 = ebx_16 + ecx_38
                                
                                if (esi_20 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_29 = *(ebx_20 + (esi_20 << 2) + 0x30)
                                int128_t* eax_66
                                
                                if (edx_29 != 0)
                                    eax_66 = sub_4fc1e0(ecx_38, edx_29)
                                else
                                    eax_66 = sub_4fc0d0()
                                    *(eax_66 + 4) = &data_83f3d3
                                    *(ebx_20 + (esi_20 << 2) + 0x30) = *(eax_66 + 0x1bc)
                                
                                *(eax_66 + 0x64) = *eax_66 + 1
                                sub_4c4590(edi_17 + ecx_37 + 0x317aec)
                                int32_t edx_30 = data_27e7a40
                                *(eax_66 + 0x151) = 1
                                int32_t edi_18
                                
                                switch (*(edi_17 + edx_30 + 0x317b0c))
                                    case 5
                                        edi_18 = data_307c02c
                                    case 6, 0xd
                                        edi_18 = data_307c030
                                    case 7
                                        edi_18 = data_307c034
                                    case 8
                                        edi_18 = data_307c000
                                    case 9
                                        edi_18 = data_307bff8
                                    case 0xa
                                        edi_18 = data_307bffc
                                    case 0xb
                                        edi_18 = data_307c004
                                    case 0xc
                                        edi_18 = data_307c038
                                    case 0xe
                                        edi_18 = data_307c014
                                    case 0xf
                                        edi_18 = data_307c008
                                    case 0x10
                                        edi_18 = data_307c010
                                    case 0x11
                                        edi_18 = data_307c00c
                                    default
                                        edi_18 = data_307c018
                                
                                int32_t ecx_42
                                
                                if (edx_24 u< data_be1cbc)
                                    ecx_42 = data_be1cb8
                                
                                if (edx_24 u>= data_be1cbc
                                        || *(edx_24 * 0x438 + ecx_42 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t esi_22 = data_3165efc
                                void* ebx_23 = ebx_16 + ecx_42
                                
                                if (esi_22 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_32 = *(ebx_23 + (esi_22 << 2) + 0x30)
                                int128_t* eax_71
                                
                                if (edx_32 != 0)
                                    eax_71 = sub_4fc1e0(ecx_42, edx_32)
                                else
                                    eax_71 = sub_4fc0d0()
                                    *(eax_71 + 4) = &data_83f3d3
                                    *(ebx_23 + (esi_22 << 2) + 0x30) = *(eax_71 + 0x1bc)
                                
                                *(eax_71 + 0x94) = *eax_71 + 1
                                *(eax_71 + 0x98) = edi_18
                                bool cond:4_1 = *(arg1 + 0x30) == 0
                                int32_t ecx_46
                                
                                if (edx_24 u< data_be1cbc)
                                    ecx_46 = data_be1cb8
                                
                                if (edx_24 u>= data_be1cbc
                                        || *(edx_24 * 0x438 + ecx_46 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t esi_23 = data_3165f08
                                void* ebx_25 = ebx_16 + ecx_46
                                
                                if (esi_23 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_35 = *(ebx_25 + (esi_23 << 2) + 0x30)
                                int128_t* eax_74
                                int32_t ecx_47
                                
                                if (edx_35 != 0)
                                    eax_74, ecx_47 = sub_4fc1e0(ecx_46, edx_35)
                                else
                                    eax_74 = sub_4fc0d0()
                                    *(eax_74 + 4) = &data_83f3d3
                                    *(ebx_25 + (esi_23 << 2) + 0x30) = *(eax_74 + 0x1bc)
                                
                                ecx_47.b = cond:4_1
                                float edx_36 = data_3165efc
                                *(eax_74 + 0x21) = ecx_47.b
                                int32_t var_60_3 = 0
                                char edx_37 = sub_4fa4e0(edx_7, edx_36, edx_36.b)
                                int32_t var_68_2 = 0
                                sub_4fa4e0(edx_7, data_3165ef8, edx_37)
                                bool var_48_2 = *(arg1 + 0x374) == 4
                                int32_t ecx_49
                                
                                if (edx_24 u< data_be1cbc)
                                    ecx_49 = data_be1cb8
                                
                                if (edx_24 u>= data_be1cbc
                                        || *(edx_24 * 0x438 + ecx_49 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t esi_25 = data_3165f04
                                void* ebx_27 = ebx_16 + ecx_49
                                
                                if (esi_25 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_38 = *(ebx_27 + (esi_25 << 2) + 0x30)
                                int128_t* eax_80
                                int32_t ecx_50
                                
                                if (edx_38 != 0)
                                    eax_80, ecx_50 = sub_4fc1e0(ecx_49, edx_38)
                                else
                                    eax_80 = sub_4fc0d0()
                                    *(eax_80 + 4) = &data_83f3d3
                                    *(ebx_27 + (esi_25 << 2) + 0x30) = *(eax_80 + 0x1bc)
                                
                                ecx_50.b = var_48_2
                                int32_t edx_39 = data_27e7a40
                                *(eax_80 + 0x22) = ecx_50.b
                                int32_t i = *(var_2c.d + edx_39 + 0x317ad4)
                                char var_48_3
                                
                                if (*(arg1 + 0x374) == 4)
                                label_40e4c2:
                                    var_48_3 = 0
                                else
                                    int32_t* eax_84 = sub_40c7a0(arg1) + 0x58
                                    int32_t ecx_51 = 0
                                    
                                    while (eax_84[-2] != 3 || *eax_84 != i)
                                        ecx_51 += 1
                                        eax_84 = &eax_84[3]
                                        
                                        if (ecx_51 s>= 4)
                                            goto label_40e4c2
                                    
                                    var_48_3 = 1
                                
                                int32_t eax_85
                                int32_t edi_20
                                
                                if (edx_24 u< data_be1cbc)
                                    eax_85 = data_be1cb8
                                    edi_20 = edx_24 * 0x438
                                
                                if (edx_24 u>= data_be1cbc || *(eax_85 + edi_20 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t esi_26 = data_3165f04
                                ebx_1 = ebx_16 + eax_85
                                
                                if (esi_26 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_41 = *(ebx_1 + (esi_26 << 2) + 0x30)
                                int128_t* eax_86
                                
                                if (edx_41 != 0)
                                    eax_86 = sub_4fc1e0(eax_85 + edi_20, edx_41)
                                else
                                    eax_86, edx_41 = sub_4fc0d0()
                                    *(eax_86 + 4) = &data_83f3d3
                                    *(ebx_1 + (esi_26 << 2) + 0x30) = *(eax_86 + 0x1bc)
                                
                                edx_41.b = var_48_3
                                *(eax_86 + 0x23) = edx_41.b
                            else
                                if (edx_7 == 0)
                                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x45, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                uint32_t eax_59 = zx.d(edx_7.w)
                                int32_t edx_22
                                
                                if (eax_59 u< data_be1cbc)
                                    edx_22 = data_be1cb8
                                
                                if (eax_59 u>= data_be1cbc
                                        || *(eax_59 * 0x438 + edx_22 + 0x434) != edx_7)
                                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                        "c:\ax2010\engine\DataArray.h", 0x46, 
                                        "DataArray<struct UIState>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                *(eax_59 * 0x438 + edx_22 + 8) = 1
                            
                            ecx_3 = var_30_1
                            int32_t eax_88 = var_34_1 + 1
                            var_34_1 = eax_88
                            
                            if (eax_88 s< edx_1)
                                continue
                            
                            edi_4 = var_24
                            break
                    
                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                        "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            ecx_3 += 1
            var_30_1 = ecx_3
            
            if (ecx_3 s>= edi_4)
                break
    
    sub_407670()
    sub_4075c0()
    int32_t eax_90
    int32_t edx_42
    edx_42:eax_90 = muls.dp.d(0x2aaaaaab, *(data_27e7a40 + 0x3188e4) + 6)
    int32_t eax_93 = (edx_42 u>> 0x1f) + edx_42
    int32_t esi_27 = 0xa
    
    if (eax_93 s<= 0xa)
        esi_27 = eax_93
    
    sub_407670()
    int32_t eax_94 = *(arg1 + 0x40)
    ebx_1.b = eax_94 == 0
    var_30_1.b = eax_94 s>= esi_27 - 1
    
    if ((data_3165f14.d & 0x100) == 0)
        data_3165f14.d |= 0x100
        int32_t var_c_17 = 8
        data_3165ef0 = sub_4f5220(data_307c1c0, "btnPrev")
        int32_t var_c_18 = 0xffffffff
    
    if ((data_3165f14.d & 0x200) == 0)
        data_3165f14.d |= 0x200
        int32_t var_c_19 = 9
        data_3165eec = sub_4f5220(data_307c1c0, "btnNext")
        int32_t var_c_20 = 0xffffffff
    
    if ((data_3165f14.d & 0x400) == 0)
        data_3165f14.d |= 0x400
        int32_t var_c_21 = 0xa
        data_3165ee8 = sub_4f5220(data_307c1c0, "imgPrev")
        int32_t var_c_22 = 0xffffffff
    
    if ((data_3165f14.d & 0x800) == 0)
        data_3165f14.d |= 0x800
        int32_t var_c_23 = 0xb
        data_3165ee4 = sub_4f5220(data_307c1c0, "imgNext")
        int32_t var_c_24 = 0xffffffff
    
    int32_t edi_21 = data_3165ef0
    int32_t eax_133
    int32_t ecx_58
    eax_133, ecx_58 = sub_4fc3d0(&data_be1cb8, *(arg1 + 0x38))
    
    if (edi_21 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_45 = *(eax_133 + (edi_21 << 2) + 0x30)
    int128_t* eax_135
    
    if (edx_45 != 0)
        eax_135 = sub_4fc1e0(ecx_58, edx_45)
    else
        eax_135 = sub_4fc0d0()
        *(eax_135 + 4) = &data_83f3d3
        *(eax_133 + (edi_21 << 2) + 0x30) = *(eax_135 + 0x1bc)
    
    int32_t edx_46 = ebx_1.b.d
    *(eax_135 + 0x21) = ebx_1.b
    int32_t var_60_4 = edx_46
    sub_4fa4e0(*(arg1 + 0x38), data_3165ee8, edx_46.b)
    int32_t edi_22 = data_3165eec
    int32_t eax_138
    int32_t ecx_60
    eax_138, ecx_60 = sub_4fc3d0(&data_be1cb8, *(arg1 + 0x38))
    
    if (edi_22 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_47 = *(eax_138 + (edi_22 << 2) + 0x30)
    int128_t* eax_140
    
    if (edx_47 != 0)
        eax_140 = sub_4fc1e0(ecx_60, edx_47)
    else
        eax_140, edx_47 = sub_4fc0d0()
        *(eax_140 + 4) = &data_83f3d3
        *(eax_138 + (edi_22 << 2) + 0x30) = *(eax_140 + 0x1bc)
    
    edx_47.b = var_30_1.b
    float ecx_62 = data_3165ee4
    *(eax_140 + 0x21) = edx_47.b
    int32_t var_60_5 = var_30_1
    int32_t result = sub_4fa4e0(*(arg1 + 0x38), ecx_62, arg1.b)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
