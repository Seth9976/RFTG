// 函数名称: sub_5cb980
// 虚拟地址: 0x5cb980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cb980(char* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (data_bed820 != 0)
        sub_5cb7e0()
    
    sub_5cc060()
    
    if (sub_5c6730(0x4000) s< 0)
        return 0xffffffff
    
    sub_5d0b00()
    sub_5d5800()
    int32_t* esi = nullptr
    int32_t ebx
    
    if (arg1 != 0)
    label_5cb9f2:
        ebx = 0
        
        if (data_8b9738 != 0)
            void** esi_1 = &data_8b9738
            
            do
                void* var_1c_1 = sub_5cd1b0(arg1)
                char* var_20_1 = arg1
                int32_t var_24_1 = **esi_1
                
                if (sub_5cd5f0() == 0)
                    esi = (*((&data_8b9738)[ebx] + 0xc))(0)
                    goto label_5cba91
                
                ebx += 1
                esi_1 = &(&data_8b9738)[ebx]
            while ((&data_8b9738)[ebx] != 0)
        
    label_5cba98:
        
        if (arg1 != 0)
            char* var_18_2 = arg1
            sub_5cce60("%s not available")
            return 0xffffffff
    else
        char* eax_1 = sub_5d2340("SDL_VIDEODRIVER")
        arg1 = eax_1
        
        if (eax_1 != 0)
            goto label_5cb9f2
        
        ebx = 0
        
        if (data_8b9738 != 0)
            void** var_8_1 = &data_8b9738
            
            while (true)
                int32_t eax_8 = (*(*var_8_1 + 8))()
                
                if (eax_8 != 0)
                    esi = (*(*var_8_1 + 0xc))(0)
                
                if (eax_8 == 0 || esi == 0)
                    ebx += 1
                    var_8_1 = &(&data_8b9738)[ebx]
                    
                    if ((&data_8b9738)[ebx] != 0)
                        continue
                    else
                    label_5cba91:
                        
                        if (esi == 0)
                            break
                
                *esi = *(&data_8b9738)[ebx]
                esi[0x40] = 3
                esi[0x41] = 3
                data_bed820 = esi
                esi[0x3e] = 1
                esi[0x57] = 0
                esi[0x98] = 0
                esi[0x42] = 2
                esi[0x43] = 0
                esi[0x45] = 0
                esi[0x44] = 0x10
                esi[0x46] = 0
                esi[0x47] = 1
                __builtin_memset(&esi[0x48], 0, 0x1c)
                esi[0x56] = 1
                esi[0x4f] = 0xffffffff
                esi[0x53] = 0
                esi[0x50] = 2
                esi[0x51] = 1
                esi[0x52] = 0
                esi[0x54] = 0
                *(data_bed820 + 0x26c) = sub_5d4270()
                int32_t eax_15 = sub_5d4270()
                void* ecx_6 = data_bed820
                *(ecx_6 + 0x270) = eax_15
                
                if ((*(ecx_6 + 4))(ecx_6) s< 0)
                    sub_5cb7e0()
                    return 0xffffffff
                
                if (*(data_bed820 + 0xe8) == 0)
                    sub_5cb7e0()
                    sub_5cce60("The video driver did not add any displays")
                    return 0xffffffff
                
                if (sub_5c8ca0() != 0)
                    void* eax_20 = data_bed820
                    *(eax_20 + 0x68) = sub_5cac20
                    *(eax_20 + 0x6c) = sub_5caec0
                    *(eax_20 + 0x70) = sub_5caf80
                
                if (sub_5caac0() == 0)
                    sub_5caa60()
                
                return 0
            
            goto label_5cba98
    sub_5cce60("No available video device")
    return 0xffffffff
}
