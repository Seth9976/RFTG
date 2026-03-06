// 函数名称: sub_5c8b40
// 虚拟地址: 0x5c8b40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c8b40(char* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t i = 0
    int32_t ebx = 0
    
    if (sub_5c69f0(0x10) != 0)
        sub_5c8a50()
    
    int32_t var_18 = 0x58
    int32_t var_1c = 0
    int32_t* var_20 = &data_bed7c0
    sub_5cd100()
    int32_t var_24 = 0x40
    int32_t var_28 = 0
    void* var_2c = &data_bed780
    sub_5cd100()
    char* eax_1 = arg1
    
    if (eax_1 == 0)
        eax_1 = sub_5d2340("SDL_AUDIODRIVER")
        arg1 = eax_1
    
    void** const var_8_1 = &data_6b3938
    
    do
        void* esi_1 = *var_8_1
        
        if (esi_1 == 0)
            if (i != 0)
                break
            
            if (ebx == 0)
                if (eax_1 == 0)
                    sub_5cce60("No available audio device")
                else
                    char* var_18_2 = eax_1
                    sub_5cce60("Audio target '%s' not available")
            
            int32_t var_18_3 = 0x58
            int32_t var_1c_2 = 0
            int32_t* var_20_2 = &data_bed7c0
            sub_5cd100()
            return 0xffffffff
        
        if (eax_1 != 0)
            void* var_1c_1 = sub_5cd1b0(eax_1)
            char* var_20_1 = arg1
            int32_t var_24_1 = *esi_1
            
            if (sub_5cd5f0() == 0)
                goto label_5c8bd8
            
            eax_1 = arg1
        else if (*(esi_1 + 0xc) == 0)
        label_5c8bd8:
            ebx = 1
            sub_5cd100()
            data_bed7c0 = *esi_1
            data_bed7c4 = *(esi_1 + 4)
            i = (*(esi_1 + 8))(&data_bed7c8, &data_bed7c0, 0, 0x58)
            eax_1 = arg1
        
        var_8_1 = &var_8_1[1]
    while (i == 0)
    
    sub_5c8870()
    return 0
}
