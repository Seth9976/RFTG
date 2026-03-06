// 函数名称: sub_541ab0
// 虚拟地址: 0x541ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_541ab0()
{
    // 第一条实际指令: HWND hWnd = GetDlgItem(data_3078830, 0xac)
    HWND hWnd = GetDlgItem(data_3078830, 0xac)
    HWND hWnd_2 = hWnd
    SendMessageA(hWnd, 0x184, 0, 0)
    LRESULT result = sub_4f4890(data_3079208)
    int32_t* esi_1 = data_273ac20
    LRESULT result_1 = result
    
    if (esi_1 != 0)
        result = sub_4f4890(esi_1)
        
        if (*(result + 4) != 0)
            if (data_273bc2c == 0)
                result = nullptr
            label_541b2e:
                int32_t* eax_2 = result * 0x118 + *result_1
                *eax_2
                char* var_c
                char* eax_5 = *sub_4c4ab0(&var_c)
                
                if (eax_5 == 0)
                    eax_5 = &data_83f3d3
                
                HWND hWnd_1 = hWnd_2
                int32_t var_3c_1 = 3
                char const* const lParam_1 = "General"
                void* const var_4c_1 = &data_88fd64
                char* const var_44_1 = &data_83f3d3
                char* var_40_1 = eax_5
                char const* const var_48 = nullptr
                SendMessageA(hWnd_1, 0x180, 0, &lParam_1)
                char* eax_6 = var_c
                
                if (eax_6 != 0 && *eax_6 != 0)
                    void* eax_8 = sub_4c4060(&var_c)
                    int32_t temp0_1 = *(eax_8 + 4)
                    *(eax_8 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        int32_t esi_4 = *(eax_8 + 0xc) + 0x10
                        sub_4f4430(eax_8, sub_4f4380(esi_4), esi_4)
                        hWnd_1 = hWnd_2
                
                uint32_t edx_1 = zx.d(eax_2[0xc].b)
                int32_t var_3c_2 = 8
                lParam_1 = "General"
                char const* const var_4c_2 = "Hidden"
                char* const var_44_2 = &data_83f3d3
                uint32_t var_40_2 = edx_1
                var_48 = nullptr
                SendMessageA(hWnd_1, 0x180, 0, &lParam_1)
                int32_t ecx_2 = eax_2[2]
                int32_t var_3c_3 = 0
                lParam_1 = "General"
                char const* const var_4c_3 = "Name"
                char* const var_44_3 = &data_83f3d3
                int32_t var_40_3 = ecx_2
                var_48 = nullptr
                SendMessageA(hWnd_1, 0x180, 0, &lParam_1)
                char const* const eax_13
                
                switch (eax_2[1] - 1)
                    case 0
                        eax_13 = "Image"
                        goto label_541c6a
                    case 1
                        eax_13 = "Table"
                        goto label_541c6a
                    case 2
                        eax_13 = "Text"
                        goto label_541c6a
                    case 3
                        eax_13 = "Region"
                        goto label_541c6a
                    case 4
                        eax_13 = "Button"
                        goto label_541c6a
                    case 5
                        eax_13 = "Group"
                        goto label_541c6a
                    case 7
                        eax_13 = "Particle"
                    label_541c6a:
                        char const* const var_40_4 = eax_13
                        int32_t var_3c_4 = 1
                        lParam_1 = "General"
                        char const* const var_4c_4 = "Type"
                        char* const var_44_4 = &data_83f3d3
                        var_48 = "Image"
                        SendMessageA(hWnd_1, 0x180, 0, &lParam_1)
                        char* eax_16 = *sub_53e8e0(&eax_2[3], &var_c)
                        
                        if (eax_16 == 0)
                            eax_16 = &data_83f3d3
                        
                        int32_t var_3c_5 = 0
                        lParam_1 = "General"
                        char const* const var_4c_5 = "Rect"
                        char* const var_44_5 = &data_83f3d3
                        char* var_40_5 = eax_16
                        var_48 = nullptr
                        SendMessageA(hWnd_1, 0x180, 0, &lParam_1)
                        char* eax_17 = var_c
                        void* var_10
                        
                        if (eax_17 != 0 && *eax_17 != 0)
                            void* eax_19 = sub_4c4060(&var_c)
                            int32_t temp1_1 = *(eax_19 + 4)
                            *(eax_19 + 4) -= 1
                            var_10 = eax_19
                            
                            if (temp1_1 == 1)
                                int32_t esi_7 = *(eax_19 + 0xc) + 0x10
                                sub_4f4430(eax_19, sub_4f4380(esi_7), esi_7)
                                hWnd_1 = hWnd_2
                        
                        switch (eax_2[1] - 1)
                            case 0, 3
                                void* eax_38 = eax_2[0x1a]
                                char* const eax_39
                                
                                if (eax_38 != 0)
                                    eax_39 = *(eax_38 + 0x20)
                                
                                if (eax_38 == 0 || eax_39 == 0)
                                    eax_39 = &data_83f3d3
                                
                                char* const var_44_8 = eax_39
                                void* const var_3c_8 = &data_88fd98
                                var_48 = "Choose Texture"
                                char const* const var_40_8 = "Image (*.jpg, *.png)"
                                int32_t var_54_1 = 6
                                char const* const lParam = "Image"
                                char const* const var_64_1 = "Texture"
                                char* const var_5c_1 = &data_83f3d3
                                char const* const* var_58_1 = &var_48
                                int32_t var_60_1 = 0
                                SendMessageA(hWnd_1, 0x180, 0, &lParam)
                                uint32_t edx_4 = zx.d(eax_2[0x1b].b)
                                int32_t var_54_2 = 8
                                lParam = "Image"
                                char const* const var_64_2 = "Nine Slice"
                                char* const var_5c_2 = &data_83f3d3
                                uint32_t var_58_2 = edx_4
                                int32_t var_60_2 = 0
                                SendMessageA(hWnd_1, 0x180, 0, &lParam)
                                int32_t eax_40 = eax_2[0x1c]
                                int32_t var_54_3 = 1
                                lParam = "Image"
                                char const* const var_64_3 = "Alignment"
                                char* const var_5c_3 = &data_83f3d3
                                int32_t var_58_3 = sub_5410a0(eax_40)
                                char const* const var_60_3 = "Stretch"
                                SendMessageA(hWnd_1, 0x180, 0, &lParam)
                            case 1
                                void* eax_26 = eax_2[0x28]
                                char* const eax_27
                                
                                if (eax_26 != 0)
                                    eax_27 = *(eax_26 + 0x20)
                                
                                if (eax_26 == 0 || eax_27 == 0)
                                    eax_27 = &data_83f3d3
                                
                                char* const var_44_7 = eax_27
                                void* const var_3c_7 = &data_88fd98
                                var_48 = "Choose Layout"
                                char const* const var_40_7 = "Image (*.ui)"
                                sub_541060(6, "Sublayout", "Table", hWnd_1, &var_48, 0)
                                eax_2[0x22]
                                char* eax_30 = *sub_4c4ab0(&var_10)
                                
                                if (eax_30 == 0)
                                    eax_30 = &data_83f3d3
                                
                                sub_541060(0, "Rows", "Table", hWnd_1, eax_30, 0)
                                sub_4c43d0(&var_10)
                                eax_2[0x23]
                                char* eax_33 = *sub_4c4ab0(&var_c)
                                
                                if (eax_33 == 0)
                                    eax_33 = &data_83f3d3
                                
                                sub_541060(0, "Columns", "Table", hWnd_1, eax_33, 0)
                                int32_t var_78_9 = sub_4c43d0(&var_c)
                                char* eax_35 = *sub_53f2f0(&hWnd_2, fconvert.s(fconvert.t(eax_2[0x24])))
                                
                                if (eax_35 == 0)
                                    eax_35 = &data_83f3d3
                                
                                sub_541060(0, "Row Spacing", "Table", hWnd_1, eax_35, 0)
                                int32_t var_78_11 = sub_4c43d0(&hWnd_2)
                                void var_14
                                char* eax_37 = *sub_53f2f0(&var_14, fconvert.s(fconvert.t(eax_2[0x25])))
                                
                                if (eax_37 == 0)
                                    eax_37 = &data_83f3d3
                                
                                sub_541060(0, "Column Spacing", "Table", hWnd_1, eax_37, 0)
                                sub_4c43d0(&var_14)
                                int32_t ecx_11
                                ecx_11.b = *(eax_2 + 0xad) == 0
                                sub_541060(8, "Auto Scale", "Table", hWnd_1, ecx_11, 0)
                                sub_541060(8, "Clip Sublayouts", "Table", hWnd_1, 
                                    zx.d(*(eax_2 + 0xae)), nullptr)
                            case 2
                                sub_541060(0, "Example Text", "Text", hWnd_1, eax_2[0x2c], 0)
                                void* eax_42 = eax_2[0x2d]
                                char* const eax_43
                                
                                if (eax_42 != 0)
                                    eax_43 = *(eax_42 + 0x20)
                                
                                if (eax_42 == 0 || eax_43 == 0)
                                    eax_43 = &data_83f3d3
                                
                                char* const var_44_9 = eax_43
                                char const* const var_3c_9 = "font.xml"
                                var_48 = "Choose Font"
                                char const* const var_40_9 = "Font (*.font.xml)"
                                sub_541060(6, "Font", "Text", hWnd_1, &var_48, 0)
                                sub_541060(4, "Text Color", "Text", hWnd_1, 
                                    (zx.d(*(eax_2 + 0xba)) << 8 | zx.d(*(eax_2 + 0xb9))) << 8
                                        | zx.d(eax_2[0x2e].b), 
                                    0)
                                sub_541060(4, "Outline Color", "Text", hWnd_1, 
                                    (zx.d(*(eax_2 + 0xbe)) << 8 | zx.d(*(eax_2 + 0xbd))) << 8
                                        | zx.d(eax_2[0x2f].b), 
                                    0)
                                void var_18
                                char* eax_47 = *sub_53f2f0(&var_18, fconvert.s(fconvert.t(eax_2[0x30])))
                                
                                if (eax_47 == 0)
                                    eax_47 = &data_83f3d3
                                
                                sub_541060(0, "Text Scale", "Text", hWnd_1, eax_47, 0)
                                int32_t var_7c_13 = sub_4c43d0(&var_18)
                                int32_t var_7c_15 = sub_541060(1, "Horz. Alignment", "Text", hWnd_1, 
                                    sub_541150(eax_2[0x31]), "Left")
                                sub_541060(1, "Vert. Alignment", "Text", hWnd_1, 
                                    sub_5411c0(eax_2[0x31]), 0x88fef8)
                                sub_541060(8, "Word Wrap", "Text", hWnd_1, zx.d(eax_2[0x32].b), nullptr)
                            case 4
                                void* eax_52 = eax_2[0x1a]
                                char* const eax_53
                                
                                if (eax_52 != 0)
                                    eax_53 = *(eax_52 + 0x20)
                                
                                if (eax_52 == 0 || eax_53 == 0)
                                    eax_53 = &data_83f3d3
                                
                                char* const var_44_10 = eax_53
                                void* const var_3c_10 = &data_88fd98
                                var_48 = "Choose Texture"
                                char const* const var_40_10 = "Image (*.jpg, *.png)"
                                sub_541060(6, "Texture", "Image", hWnd_1, &var_48, 0)
                                void* eax_54 = eax_2[0x38]
                                char* const eax_55
                                
                                if (eax_54 != 0)
                                    eax_55 = *(eax_54 + 0x20)
                                
                                if (eax_54 == 0 || eax_55 == 0)
                                    eax_55 = &data_83f3d3
                                
                                char* const var_44_11 = eax_55
                                void* const var_3c_11 = &data_88fd98
                                var_48 = "Choose Texture"
                                char const* const var_40_11 = "Image (*.jpg, *.png)"
                                sub_541060(6, "Image Over", "Image", hWnd_1, &var_48, 0)
                                void* eax_56 = eax_2[0x39]
                                char* const eax_57
                                
                                if (eax_56 != 0)
                                    eax_57 = *(eax_56 + 0x20)
                                
                                if (eax_56 == 0 || eax_57 == 0)
                                    eax_57 = &data_83f3d3
                                
                                char* const var_44_12 = eax_57
                                void* const var_3c_12 = &data_88fd98
                                var_48 = "Choose Texture"
                                char const* const var_40_12 = "Image (*.jpg, *.png)"
                                sub_541060(6, "Image Down", "Image", hWnd_1, &var_48, 0)
                                void* eax_58 = eax_2[0x3a]
                                char* const eax_59
                                
                                if (eax_58 != 0)
                                    eax_59 = *(eax_58 + 0x20)
                                
                                if (eax_58 == 0 || eax_59 == 0)
                                    eax_59 = &data_83f3d3
                                
                                char* const var_44_13 = eax_59
                                void* const var_3c_13 = &data_88fd98
                                var_48 = "Choose Texture"
                                char const* const var_40_13 = "Image (*.jpg, *.png)"
                                sub_541060(6, "Image Disabled", "Image", hWnd_1, &var_48, 0)
                                sub_541060(8, "Nine Slice", "Image", hWnd_1, zx.d(eax_2[0x1b].b), 0)
                                sub_541060(0, "Text", "Text", hWnd_1, eax_2[0x37], 0)
                                void* eax_61 = eax_2[0x2d]
                                char* const eax_62
                                
                                if (eax_61 != 0)
                                    eax_62 = *(eax_61 + 0x20)
                                
                                if (eax_61 == 0 || eax_62 == 0)
                                    eax_62 = &data_83f3d3
                                
                                char* const var_44_14 = eax_62
                                char const* const var_3c_14 = "font.xml"
                                var_48 = "Choose Font"
                                char const* const var_40_14 = "Font (*.font.xml)"
                                sub_541060(6, "Font", "Text", hWnd_1, &var_48, 0)
                                sub_541060(4, "Text Color", "Text", hWnd_1, 
                                    (zx.d(*(eax_2 + 0xba)) << 8 | zx.d(*(eax_2 + 0xb9))) << 8
                                        | zx.d(eax_2[0x2e].b), 
                                    0)
                                sub_541060(4, "Outline Color", "Text", hWnd_1, 
                                    (zx.d(*(eax_2 + 0xbe)) << 8 | zx.d(*(eax_2 + 0xbd))) << 8
                                        | zx.d(eax_2[0x2f].b), 
                                    0)
                                sub_541060(4, "Disabled Color", "Text", hWnd_1, 
                                    (zx.d(*(eax_2 + 0xee)) << 8 | zx.d(*(eax_2 + 0xed))) << 8
                                        | zx.d(eax_2[0x3b].b), 
                                    0)
                                sub_541060(4, "Disabled Outline", "Text", hWnd_1, 
                                    (zx.d(*(eax_2 + 0xf2)) << 8 | zx.d(*(eax_2 + 0xf1))) << 8
                                        | zx.d(eax_2[0x3c].b), 
                                    0)
                                void var_1c
                                char* eax_84 = *sub_53f2f0(&var_1c, fconvert.s(fconvert.t(eax_2[0x30])))
                                
                                if (eax_84 == 0)
                                    eax_84 = &data_83f3d3
                                
                                sub_541060(0, "Text Scale", "Text", hWnd_1, eax_84, 0)
                                sub_4c43d0(&var_1c)
                                void var_20
                                char* eax_87 = *sub_53e960(&eax_2[0x3d], &var_20)
                                
                                if (eax_87 == 0)
                                    eax_87 = &data_83f3d3
                                
                                sub_541060(0, "Text Offset", "Text", hWnd_1, eax_87, 0)
                                int32_t var_7c_30 = sub_4c43d0(&var_20)
                                int32_t var_7c_32 = sub_541060(1, "Horz. Alignment", "Text", hWnd_1, 
                                    sub_541150(eax_2[0x31]), "Left")
                                sub_541060(1, "Vert. Alignment", "Text", hWnd_1, 
                                    sub_5411c0(eax_2[0x31]), 0x88fef8)
                                sub_541060(8, "Word Wrap", "Text", hWnd_1, zx.d(eax_2[0x32].b), 0)
                                void* eax_93 = eax_2[0x3f]
                                void* const var_3c_15 = &data_88ffb4
                                var_48 = "Choose Sound"
                                char const* const var_40_15 = "Sound (*.xmlsound, *.ogg, *.wav)"
                                char* const eax_94
                                
                                if (eax_93 != 0)
                                    eax_94 = *(eax_93 + 0x20)
                                
                                if (eax_93 == 0 || eax_94 == 0)
                                    eax_94 = &data_83f3d3
                                
                                char* const var_44_15 = eax_94
                                sub_541060(6, "Click", "Sound", hWnd_1, &var_48, 0)
                                void* eax_95 = eax_2[0x40]
                                char* const eax_96
                                
                                if (eax_95 != 0)
                                    eax_96 = *(eax_95 + 0x20)
                                
                                if (eax_95 == 0 || eax_96 == 0)
                                    eax_96 = &data_83f3d3
                                
                                char* const var_44_16 = eax_96
                                sub_541060(6, "Mouseover", "Sound", hWnd_1, &var_48, 0)
                                void* ebx_3 = eax_2[0x41]
                                char* const eax_97 = &data_83f3d3
                                
                                if (ebx_3 != 0)
                                    char* ebx_4 = *(ebx_3 + 0x20)
                                    
                                    if (ebx_4 != 0)
                                        eax_97 = ebx_4
                                
                                char* const var_44_17 = eax_97
                                sub_541060(6, "Disabled", "Sound", hWnd_1, &var_48, nullptr)
                            case 5
                                eax_2[0x12]
                                void var_24
                                char* eax_100 = *sub_4c4ab0(&var_24)
                                
                                if (eax_100 == 0)
                                    eax_100 = &data_83f3d3
                                
                                sub_541060(0, "Count", "Group", hWnd_1, eax_100, 0)
                                sub_4c43d0(&var_24)
                                eax_2[0x13]
                                void var_28
                                char* eax_103 = *sub_4c4ab0(&var_28)
                                
                                if (eax_103 == 0)
                                    eax_103 = &data_83f3d3
                                
                                sub_541060(0, "Anim Duration (ms)", "Group", hWnd_1, eax_103, 0)
                                sub_4c43d0(&var_28)
                                eax_2[0x14]
                                void var_2c
                                char* eax_106 = *sub_4c4ab0(&var_2c)
                                
                                if (eax_106 == 0)
                                    eax_106 = &data_83f3d3
                                
                                sub_541060(0, "Anim Delay (ms)", "Group", hWnd_1, eax_106, 0)
                                int32_t var_78_18 = sub_4c43d0(&var_2c)
                                void var_30
                                char* eax_108 =
                                    *sub_53f2f0(&var_30, fconvert.s(fconvert.t(eax_2[0x15])))
                                
                                if (eax_108 == 0)
                                    eax_108 = &data_83f3d3
                                
                                sub_541060(0, "Anim Start Alpha", "Group", hWnd_1, eax_108, 0)
                                int32_t var_78_20 = sub_4c43d0(&var_30)
                                void var_34
                                char* eax_110 =
                                    *sub_53f2f0(&var_34, fconvert.s(fconvert.t(eax_2[0x16])))
                                
                                if (eax_110 == 0)
                                    eax_110 = &data_83f3d3
                                
                                sub_541060(0, "Anim Scale", "Group", hWnd_1, eax_110, 0)
                                sub_4c43d0(&var_34)
                                void var_38
                                char* eax_113 = *sub_53e960(&eax_2[0x17], &var_38)
                                
                                if (eax_113 == 0)
                                    eax_113 = &data_83f3d3
                                
                                sub_541060(0, "Anim Offset", "Group", hWnd_1, eax_113, 0)
                                sub_4c43d0(&var_38)
                                void* const eax_114 = &data_8407f8
                                char* const eax_115
                                
                                while (true)
                                    if (*eax_114 == eax_2[0x19])
                                        eax_115 = *(eax_114 + 4)
                                        break
                                    
                                    eax_114 += 8
                                    
                                    if (*(eax_114 + 4) == 0)
                                        eax_115 = &data_83f3d3
                                        break
                                
                                sub_541060(1, "Anim Curve", "Group", hWnd_1, eax_115, "Ease In/Out")
                            case 7
                                void* ebx_1 = eax_2[0x11]
                                char* const eax_24 = &data_83f3d3
                                
                                if (ebx_1 != 0)
                                    char* ebx_2 = *(ebx_1 + 0x20)
                                    
                                    if (ebx_2 != 0)
                                        eax_24 = ebx_2
                                
                                char* const var_44_6 = eax_24
                                char const* const var_3c_6 = "particle"
                                var_48 = "Choose Particle"
                                char const* const var_40_6 = "Particle (*.particle)"
                                sub_541060(6, "Particle", "Particle", hWnd_1, &var_48, nullptr)
                        
                        return SendMessageA(hWnd_1, 0x401, 0, 0)
                
                sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0xe78, "ToUITypeStr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            result = sub_575bb0(data_273ac2c)
            
            if (result != 0xffffffff)
                goto label_541b2e
    
    return result
}
