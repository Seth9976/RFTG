// 函数名称: sub_541330
// 虚拟地址: 0x541330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_541330()
{
    // 第一条实际指令: void var_174
    void var_174
    int32_t eax_1 = __security_cookie ^ &var_174
    HWND hWnd = GetDlgItem(data_3078830, 0xac)
    HWND hWnd_1 = hWnd
    LRESULT result = SendMessageA(hWnd, 0x184, 0, 0)
    
    if (data_26a7764 != 0)
        int32_t ebx_1 = data_26a6764
        result = sub_50c140(data_26a6760)
        int32_t ebx_2 = ebx_1 * 0xb8
        int32_t* ebx_3 = ebx_2 + *result
        
        if (ebx_2 != neg.d(*result))
            uint32_t ecx_1 = zx.d(ebx_3[0xc].b)
            int32_t var_154_1 = 8
            char const* const lParam = "General"
            char const* const var_164_1 = "Hidden"
            char* const var_15c_1 = &data_83f3d3
            uint32_t var_158_1 = ecx_1
            int32_t var_160_1 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam)
            int32_t ecx_2 = ebx_3[1]
            int32_t var_154_2 = 0
            lParam = "General"
            char const* const var_164_2 = "Name"
            char* const var_15c_2 = &data_83f3d3
            int32_t var_158_2 = ecx_2
            int32_t var_160_2 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam)
            void* const eax_4 = &data_840440
            char* const eax_5
            
            while (true)
                if (*eax_4 == *ebx_3)
                    eax_5 = *(eax_4 + 4)
                    break
                
                eax_4 += 8
                
                if (*(eax_4 + 4) == 0)
                    eax_5 = &data_83f3d3
                    break
            
            char* const var_158_3 = eax_5
            int32_t var_154_3 = 1
            lParam = "General"
            char const* const var_164_3 = "Type"
            char* const var_15c_3 = &data_83f3d3
            char const* const var_160_3 = "Model"
            SendMessageA(hWnd, 0x180, 0, &lParam)
            char* var_170
            char* eax_8 = *sub_53e920(&ebx_3[2], &var_170)
            
            if (eax_8 == 0)
                eax_8 = &data_83f3d3
            
            int32_t var_154_4 = 0
            lParam = "General"
            char const* const var_164_4 = "Position"
            char* const var_15c_4 = &data_83f3d3
            char* var_158_4 = eax_8
            int32_t var_160_4 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam)
            char* eax_9 = var_170
            void* var_16c
            
            if (eax_9 != 0 && *eax_9 != 0)
                void* eax_11 = sub_4c4060(&var_170)
                int32_t temp2_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                var_16c = eax_11
                
                if (temp2_1 == 1)
                    int32_t esi_4 = *(eax_11 + 0xc) + 0x10
                    int32_t* eax_12 = sub_4f4380(esi_4)
                    sub_4f4430(var_16c, eax_12, esi_4)
                    hWnd = hWnd_1
            
            char* eax_16 = *sub_53e920(&ebx_3[5], &var_170)
            
            if (eax_16 == 0)
                eax_16 = &data_83f3d3
            
            int32_t var_154_5 = 0
            lParam = "General"
            char const* const var_164_5 = "Rotation"
            char* const var_15c_5 = &data_83f3d3
            char* var_158_5 = eax_16
            int32_t var_160_5 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam)
            char* eax_17 = var_170
            
            if (eax_17 != 0 && *eax_17 != 0)
                void* eax_19 = sub_4c4060(&var_170)
                int32_t temp3_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                var_16c = eax_19
                
                if (temp3_1 == 1)
                    int32_t esi_7 = *(eax_19 + 0xc) + 0x10
                    int32_t* eax_20 = sub_4f4380(esi_7)
                    sub_4f4430(var_16c, eax_20, esi_7)
                    hWnd = hWnd_1
            
            char* eax_24 = *sub_53e920(&ebx_3[8], &var_170)
            
            if (eax_24 == 0)
                eax_24 = &data_83f3d3
            
            char* var_12c_1 = eax_24
            int32_t var_128_1 = 0
            float lParam_1 = "General"
            char const* const var_138_1 = "Scale"
            char* const var_130_1 = &data_83f3d3
            int32_t var_134_1 = 0
            int32_t ecx_4 = SendMessageA(hWnd, 0x180, 0, &lParam_1)
            char* eax_25 = var_170
            
            if (eax_25 != 0 && *eax_25 != 0)
                void* eax_27 = sub_4c4060(&var_170)
                int32_t temp4_1 = *(eax_27 + 4)
                *(eax_27 + 4) -= 1
                var_16c = eax_27
                
                if (temp4_1 == 1)
                    int32_t esi_10 = *(eax_27 + 0xc) + 0x10
                    int32_t* eax_28 = sub_4f4380(esi_10)
                    ecx_4 = sub_4f4430(var_16c, eax_28, esi_10)
                    hWnd = hWnd_1
            
            char const* const var_14c
            char* const eax_46
            char const* const ecx_7
            void* const edx_3
            
            switch (*ebx_3 - 1)
                case 0
                    void* ebx_6 = ebx_3[0xe]
                    eax_46 = &data_83f3d3
                    
                    if (ebx_6 != 0)
                        char* ebx_7 = *(ebx_6 + 0x20)
                        
                        if (ebx_7 != 0)
                            eax_46 = ebx_7
                    
                    ecx_7 = "Image"
                    char const* const var_140_2 = "Image"
                    var_14c = "Choose Image"
                    char const* const var_144_2 = "Image (*.jpg, *.png)"
                    edx_3 = "Image"
                label_541941:
                    char* const var_148_2 = eax_46
                    sub_541060(6, edx_3, ecx_7, hWnd, &var_14c, nullptr)
                case 1
                    void* ebx_4 = ebx_3[0x1d]
                    char* const eax_36 = &data_83f3d3
                    
                    if (ebx_4 != 0)
                        char* ebx_5 = *(ebx_4 + 0x20)
                        
                        if (ebx_5 != 0)
                            eax_36 = ebx_5
                    
                    char* const var_138_3 = eax_36
                    void* const var_130_3 = &data_87f7e0
                    lParam_1 = "Choose UI"
                    char const* const var_134_3 = "UI (*.ui)"
                    sub_541060(6, &data_882044, &data_882044, hWnd, &lParam_1, nullptr)
                case 2
                    void* eax_32 = ebx_3[0x16]
                    char* const eax_33
                    
                    if (eax_32 != 0)
                        eax_33 = *(eax_32 + 0x20)
                    
                    if (eax_32 == 0 || eax_33 == 0)
                        eax_33 = &data_83f3d3
                    
                    char* const var_138_2 = eax_33
                    void* const var_130_2 = &data_88fc20
                    lParam_1 = "Choose Model"
                    char const* const var_134_2 = "Model (*.fbx)"
                    sub_541060(6, "Model", "Model", hWnd, &lParam_1, 0)
                    int32_t edx_2 = sub_541060(0, "Animation", "Model", hWnd, ebx_3[0x17], 0)
                    void var_110
                    sub_541230(ebx_3[0x16], edx_2, &var_110)
                    sub_541060(1, "Look", "Model", hWnd, ebx_3[0x1c], &var_110)
                case 4
                    if (ebx_3[0x25] s< 1)
                        int32_t var_188_4 = ecx_4
                        int32_t* eax_38
                        int32_t edx_4
                        eax_38, edx_4 = sub_4fff30(data_30d747c, 0x90)
                        sub_505030(eax_38, edx_4, ebx_3, eax_38, 0)
                        hWnd = hWnd_1
                    
                    void* eax_40 = *ebx_3[0x24]
                    char* const eax_41
                    
                    if (eax_40 != 0)
                        eax_41 = *(eax_40 + 0x20)
                    
                    if (eax_40 == 0 || eax_41 == 0)
                        eax_41 = &data_83f3d3
                    
                    char* const var_148_1 = eax_41
                    void* const var_140_1 = &data_88fc98
                    var_14c = "Choose Fab"
                    char const* const var_144_1 = "Fab (*.fab)"
                    float lParam_2
                    sub_510cc0(&lParam_2, sub_541060(6, "Subfab", "Distribute", hWnd, &var_14c, 0), 
                        &ebx_3[0x1f])
                    lParam_1 = lParam_2
                    int32_t var_11c
                    int32_t var_138_4 = var_11c
                    int32_t var_118
                    int32_t var_134_4 = var_118
                    char* eax_45 = *sub_53e920(&lParam_1, &var_16c)
                    
                    if (eax_45 == 0)
                        eax_45 = &data_83f3d3
                    
                    sub_541060(0, "Dimensions", "Distribute", hWnd, eax_45, 0)
                    sub_4c43d0(&var_16c)
                case 5
                    void* const eax_48 = &data_840568
                    char* const eax_49
                    
                    while (true)
                        if (*eax_48 == ebx_3[0x26])
                            eax_49 = *(eax_48 + 4)
                            break
                        
                        eax_48 += 8
                        
                        if (*(eax_48 + 4) == 0)
                            eax_49 = &data_83f3d3
                            break
                    
                    sub_541060(1, "Light Type", "Light", hWnd, eax_49, "Directional")
                    void var_124
                    char* eax_51 = *sub_53f2f0(&var_124, fconvert.s(fconvert.t(ebx_3[0x2a])))
                    
                    if (eax_51 == 0)
                        eax_51 = &data_83f3d3
                    
                    sub_541060(0, "Intensity", "Light", hWnd, eax_51, 0)
                    sub_4c43d0(&var_124)
                    sub_541060(4, "Color", "Light", hWnd, sub_53f260(&ebx_3[0x27]), 0)
                    
                    if (ebx_3[0x26] == 3)
                        void* ebx_10 = ebx_3[0x2b]
                        eax_46 = &data_83f3d3
                        
                        if (ebx_10 != 0)
                            char* ebx_11 = *(ebx_10 + 0x20)
                            
                            if (ebx_11 != 0)
                                eax_46 = ebx_11
                        
                        edx_3 = &data_881fc4
                        void* const var_140_3 = &data_881fc4
                        var_14c = "Choose IBL"
                        char const* const var_144_3 = "IBL (*.hdr)"
                        ecx_7 = "Light"
                        goto label_541941
                case 7
                    void* ebx_8 = ebx_3[0x2c]
                    char* const eax_47 = &data_83f3d3
                    
                    if (ebx_8 != 0)
                        char* ebx_9 = *(ebx_8 + 0x20)
                        
                        if (ebx_9 != 0)
                            eax_47 = ebx_9
                    
                    char* const var_164_6 = eax_47
                    char const* const var_15c_6 = "Particle"
                    lParam = "Choose Particle"
                    char const* const var_160_6 = "Particle (*.particle)"
                    sub_541060(6, "Particle", "Particle", hWnd, &lParam, nullptr)
            
            result = SendMessageA(hWnd, 0x401, 0, 0)
    
    sub_5a6aba(eax_1 ^ &var_174)
    return result
}
