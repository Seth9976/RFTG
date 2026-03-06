// 函数名称: sub_5d43b0
// 虚拟地址: 0x5d43b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d43b0()
{
    // 第一条实际指令: uint32_t i = GetCurrentThreadId()
    uint32_t i = GetCurrentThreadId()
    int32_t result = 0
    
    if (data_bf7c34 == 0)
        sub_5dadf0(0xbf7c30)
        
        if (data_bf7c34 == 0)
            CRITICAL_SECTION* eax = sub_5d1140()
            data_bf7c34 = eax
            
            if (eax == 0)
                sub_5dae20(0xbf7c30)
                return 0
        
        sub_5dae20(0xbf7c30)
    
    sub_5d1190(data_bf7c34)
    int32_t* eax_3 = data_bf7c48
    
    if (eax_3 != 0)
        while (*eax_3 != i)
            eax_3 = eax_3[2]
            
            if (eax_3 == 0)
                sub_5d11c0(data_bf7c34)
                return 0
        
        result = eax_3[1]
    
    sub_5d11c0(data_bf7c34)
    return result
}
