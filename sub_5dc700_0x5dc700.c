// 函数名称: sub_5dc700
// 虚拟地址: 0x5dc700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5dc700(char* arg1, char* arg2)
{
    // 第一条实际指令: void* esi = nullptr
    void* esi = nullptr
    int32_t ebx = 0
    int32_t var_8 = 0
    void var_48
    
    if (arg2 == 0 || *arg2 == 0)
        arg2 = sub_5dc660(&var_48, 0x40)
    void var_88
    
    if (arg1 == 0 || *arg1 == 0)
        arg1 = sub_5dc660(&var_88, 0x40)
    
    while (true)
        int32_t var_98_1 = *(esi + &data_8bac98)
        char* var_9c_1 = arg2
        int32_t edi_3
        
        if (sub_5cd5e0() != 0)
            edi_3 = var_8
        label_5dc782:
            int32_t var_98_2 = *(esi + &data_8bac98)
            char* var_9c_2 = arg1
            int32_t eax_7 = sub_5cd5e0()
            
            if (eax_7 == 0)
                ebx = *(esi + 0x8bac9c)
            
            if (eax_7 != 0 || edi_3 == 0)
                esi += 8
                
                if (esi u< 0xe0)
                    continue
                else
                    edi_3 = var_8
                
                goto label_5dc7a8
        else
            edi_3 = *(esi + 0x8bac9c)
            var_8 = edi_3
            
            if (ebx == 0)
                goto label_5dc782
            
        label_5dc7a8:
            
            if (edi_3 == 0)
                break
        
        if (ebx == 0)
            break
        
        int32_t var_98_3 = 8
        int32_t* result = sub_5d0ac0()
        
        if (result == 0)
            break
        
        *result = edi_3
        result[1] = ebx
        return result
    
    return 0xffffffff
}
