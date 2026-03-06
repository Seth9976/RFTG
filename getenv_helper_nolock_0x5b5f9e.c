// 函数名称: __getenv_helper_nolock
// 虚拟地址: 0x5b5f9e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*__getenv_helper_nolock(char* arg1)
{
    // 第一条实际指令: int32_t* esi = data_bec598
    int32_t* esi = data_bec598
    
    if (data_3168004 == 0)
        return nullptr
    
    int32_t edi
    int32_t var_c_1 = edi
    void* result
    
    if (esi != 0)
        if (arg1 == 0)
        labelid_3:
            result = nullptr
        else
        label_5b5fe0:
            void* eax_2 = _strlen(arg1)
            
            while (true)
                char* eax_6 = *esi
                
                if (eax_6 == 0)
                    goto label_5b6017_2
                
                if (_strlen(eax_6) u> eax_2)
                    char* eax_4 = *esi
                    
                    if (*(eax_4 + eax_2) == 0x3d && __mbsncoll(eax_4, arg1, eax_2) == 0)
                        result = *esi + eax_2 + 1
                        break
                
                esi = &esi[1]
    else
        PSTR ecx
        
        if (data_bec5a0 == esi)
        label_5b6017:
            result = nullptr
        else if (sub_5baf55(ecx) != 0)
        label_5b6017_1:
            result = nullptr
        else
            esi = data_bec598
            
            if (esi != 0 && arg1 != 0)
                goto label_5b5fe0
            
        label_5b6017_2:
            result = nullptr
    
    return result
}
